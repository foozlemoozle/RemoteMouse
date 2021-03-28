/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/14/2021

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.keg.mobilemousepad
{
    public class Bootstrap : MonoBehaviour
    {
        private static Bootstrap _instance;
        public static Bootstrap Get => _instance;
        public static RemoteManager Remote => _instance?._remoteManager;

        private RemoteManager _remoteManager;

        [SerializeField] private MousePad _mousePad;
        [SerializeField] private Setup _setup;

        // Start is called before the first frame update
        private void Start()
        {
            Debug.LogError( com.keg.remotemousedata.Input.Get( remotemousedata.InputType.LTAP ).ToString() );


			_instance = this;
            _remoteManager = new RemoteManager();

            _mousePad.gameObject.SetActive( false );
            _setup.gameObject.SetActive( true );

            _setup.DisplayLocalIP( _remoteManager.LocalIPAddress );

            Setup.onConnect += OnConnect;
        }

		private void OnConnect()
		{
            _setup.Lock();
            _remoteManager.Setup( _setup.IPAddress, _setup.Port, OnConnectionSuccess, OnConnectionFailed );
		}

        private void OnConnectionSuccess()
		{
            _setup.gameObject.SetActive( false );
            _mousePad.gameObject.SetActive( true );
		}

        private void OnConnectionFailed()
		{
            _setup.Unlock();
		}

		private void OnDestroy()
		{
            _remoteManager.Shutdown();
            Setup.onConnect -= OnConnect;
		}
	}
}
