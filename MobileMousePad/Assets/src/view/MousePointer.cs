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
    public class MousePointer : MonoBehaviour
    {
		[SerializeField] private CanvasGroup _canvasGroup;

		private int _tempShowCounter = 0;

		private void Awake()
		{
			_canvasGroup.blocksRaycasts = false;
			_canvasGroup.interactable = false;
			_canvasGroup.alpha = 0f;
		}

		private void Update()
		{
			if(_tempShowCounter > 0)
			{
				--_tempShowCounter;
				if(_tempShowCounter <= 0)
				{
					Hide();
				}
			}

			if( UnityEngine.Input.touchCount > 0 )
			{
				transform.localPosition = UnityEngine.Input.GetTouch( 0 ).position;
			}
			else
			{
				transform.localPosition = UnityEngine.Input.mousePosition;
			}
		}

		public void ShowTemp()
		{
			Show();
			_tempShowCounter = 2;
		}

		public void Show()
		{
			_canvasGroup.alpha = 1f;
		}

		public void Hide()
		{
			_canvasGroup.alpha = 0f;
		}
	}
}
