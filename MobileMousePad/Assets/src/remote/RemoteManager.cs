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
    // fe80::6c7b:a6c4:eadf:2e50%18
    public class RemoteManager
    {
        private static readonly int RETRIES = 10;

        public bool Ready { get; private set; }

        private string _localIPAddress;
        private string _hostName;
        private string _remoteIPAddress;
        private int _port;
        private TcpClient _tcpClient;

        private System.Action _onConnectionFailed;

        private System.Action _onConnectionSuccess;

        public string LocalIPAddress => _localIPAddress;

        private IPEndPoint _targetEndPoint;
        private NetworkStream _writeStream;

        public RemoteManager()
		{
            _hostName = Dns.GetHostName();
            _localIPAddress = Dns.GetHostAddresses( _hostName )[ 0 ].ToString();
        }

        public void Setup(string remoteIpString, int port, System.Action onConnectionSuccess, System.Action onConnectionFailed)
		{
            Ready = false;
            _onConnectionFailed = onConnectionFailed;
            _onConnectionSuccess = onConnectionSuccess;
            _port = port;

            _remoteIPAddress = remoteIpString;

            Debug.Log( $"[RemoteManager] Host Name: {_hostName} Local IP: {_localIPAddress}" );

			if( SetupTCPClient() )
			{
				ConnectAsync();
			}
		}

        private bool SetupTCPClient()
		{
            try
            {
                IPAddress remoteIp = IPAddress.Parse( _remoteIPAddress );
                _targetEndPoint = new IPEndPoint( remoteIp, _port );
                _tcpClient = new TcpClient( remoteIp.AddressFamily );

                return true;
            }
            catch( System.FormatException err )
            {
                Debug.LogError( $"Invalid IP Address format; {err}" );
                _onConnectionFailed?.Invoke();
            }
            catch( System.NotSupportedException err )
            {
                Debug.LogError( $"IPAddress {_remoteIPAddress} is not supported\n{err}" );
                _onConnectionFailed?.Invoke();
            }

            return false;
        }

        private async void ConnectAsync()
		{
            Task task = Task.Run(ConnectInternal);
            await task;

            if( task.Exception != null )
            {
                _onConnectionFailed?.Invoke();
            }
			else
            {
                _onConnectionSuccess?.Invoke();
            }
        }

        private void ConnectInternal()
		{
            System.Exception abstractedError = null;

            try
            {
                _tcpClient.Connect( _targetEndPoint );
                return;
            }
            catch( System.FormatException err )
            {
                Debug.LogError( $"Invalid IP Address format; {err}" );
                abstractedError = err;
            }
            catch( System.NotSupportedException err )
            {
                Debug.LogError( $"IPAddress {_remoteIPAddress} is not supported\n{err}" );
                abstractedError = err;
            }
            catch( SocketException err )
            {
                Debug.LogError( $"Socket Exception; {err}" );
                abstractedError = err;
            }

            throw abstractedError;
        }

        public void SendInput(Input input)
		{
            if(!Ready)
			{
                return;
			}

            byte[] buffer = input.Serialize();
            _tcpClient.GetStream().Write( buffer, 0, buffer.Length );
			//_tcpClient.Client.Send( input.Serialize() );
		}

        public void Shutdown()
		{
            _tcpClient?.Close();
		}
    }
}
