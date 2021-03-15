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
        public int Port => int.Parse( _portField.text );

        [SerializeField] private InputField _ipAddressField;
        [SerializeField] private InputField _portField;
        [SerializeField] private Button _connectButton;

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
