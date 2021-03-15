/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/14/2021

using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Net.NetworkInformation;
using System.Threading.Tasks;
using com.keg.remotemousedata;

using Debug = UnityEngine.Debug;

namespace com.keg.mobilemousepad
{
    public class RemoteManager
    {
        private static readonly int RETRIES = 10;

        public bool Ready { get; private set; }

        private string _localIPAddress;
        private string _hostName;
        private string _remoteIPAddress;
        private int _port;
        private TcpClient _tcpClient;

        private int _retryCount = 0;
        private System.Action _onConnectionFailed;

        private System.Action _onConnectionSuccess;

        public void Setup(string remoteIpString, int port, System.Action onConnectionSuccess, System.Action onConnectionFailed)
		{
            Ready = false;
            _onConnectionFailed = onConnectionFailed;
            _onConnectionSuccess = onConnectionSuccess;
            _port = port;

            _hostName = Dns.GetHostName();
            _localIPAddress = Dns.GetHostAddresses( _hostName )[ 0 ].ToString();

            _remoteIPAddress = remoteIpString;

            Debug.Log( $"[RemoteManager] Host Name: {_hostName} Local IP: {_localIPAddress}" );

            _tcpClient = new TcpClient( AddressFamily.InterNetwork );
            Connect();
        }

        private void Connect()
		{
            try
            {
                IPAddress remoteIp = IPAddress.Parse( _remoteIPAddress );
                Task tcpConnectionTask = _tcpClient.ConnectAsync( remoteIp, _port );
                AwaitTCPConnection( tcpConnectionTask );
            }
            catch( System.FormatException err )
            {
                Debug.LogError( $"Invalid IP Address format; {err}" );
                _onConnectionFailed?.Invoke();
            }
        }

        private async void AwaitTCPConnection( Task connectionTask )
		{
            Debug.Log( $"[RemoteManager] awaiting connection with {_remoteIPAddress}..." );

            try
            {
                await connectionTask;
            }
            catch(SocketException err)
			{
                connectionTask.Dispose();

                Debug.LogError( $"Connection refused; {err}" );
                _onConnectionFailed?.Invoke();
                return;
			}

            if(connectionTask.Status != TaskStatus.RanToCompletion)
			{
                Debug.LogError( $"[RemoteManager] Failed to connect!  Retries: {_retryCount}" );
                if(_retryCount < RETRIES)
				{
                    ++_retryCount;
                    Connect();
				}
                else
				{
                    _onConnectionFailed?.Invoke();
				}

                return;
			}

            Debug.Log( "[RemoteManager] <color=green>Success!</color>" );

            Ready = true;
            _onConnectionSuccess?.Invoke();
		}

        public void SendInput(Input input)
		{
            if(!Ready)
			{
                return;
			}

            _tcpClient.Client.Send( input.Serialize() );
		}

        public void Shutdown()
		{
            _tcpClient?.Close();
		}
    }
}
