/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/14/2021

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace com.keg.mobilemousepad
{
    public class Setup : MonoBehaviour
    {
        public static event System.Action onConnect;

        public string IPAddress => _ipAddressField.text;
        public int Port => _portField.text != null ? int.Parse( _portField.text ) : 0;

        [SerializeField] private InputField _ipAddressField;
        [SerializeField] private InputField _portField;
        [SerializeField] private Button _connectButton;
        [SerializeField] private Text _localIPAddressText;

		private void Awake()
		{
            //set defaults
            _ipAddressField.text = "192.168.2.225";
            _portField.text = "30";
		}

		public void DisplayLocalIP(string localIpAddress)
		{
            if(_localIPAddressText == null)
			{
                return;
			}

            _localIPAddressText.text = localIpAddress;
		}

        public void ConnectProxy()
		{
            onConnect?.Invoke();
		}

        public void Lock()
		{
            _connectButton.interactable = false;
		}

        public void Unlock()
		{
            _connectButton.interactable = true;
		}
    }
}
