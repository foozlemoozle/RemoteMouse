/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/14/2021

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Input = com.keg.remotemousedata.Input;
using InputType = com.keg.remotemousedata.InputType;

namespace com.keg.mobilemousepad
{
    public class MousePad : MonoBehaviour, IEventSystemHandler, IPointerDownHandler, IPointerUpHandler, IScrollHandler
    {
		[SerializeField] private MousePointer _pointer;

		private (Input input, Vector2 pos) _cachedTap = (null, Vector2.zero);

        void IScrollHandler.OnScroll(PointerEventData eventData)
		{
			if(Mathf.Approximately(eventData.scrollDelta.x, 0) && Mathf.Approximately(eventData.scrollDelta.y, 0))
			{
				_pointer?.Hide();
				return;
			}

			Input input;

			switch( GetTouches() )
			{
			case 0: throw new System.NotImplementedException();
			case 1:
				input = Input.Get( InputType.MOVE, eventData.scrollDelta.ToModel() );
				break;
			case 2:
			default:
				input = Input.Get( InputType.SCRL, eventData.scrollDelta.ToModel() );
				break;
			}

			_pointer?.ShowTemp();

			SendEvent( input );
		}

		void IPointerDownHandler.OnPointerDown( PointerEventData eventData )
		{
			_pointer?.Show();

			switch( GetTouches( eventData ) )
			{
			case 0:
				throw new System.NotImplementedException();
			case 1:
				_cachedTap.input = Input.Get( InputType.LTAP );
				break;
			case 2:
				_cachedTap.input = Input.Get( InputType.RTAP );
				break;
			case 3:
			default:
				_cachedTap.input = Input.Get( InputType.MTAP );
				break;
			}

			_cachedTap.pos = eventData.position;
		}

		void IPointerUpHandler.OnPointerUp( PointerEventData eventData )
		{
			_pointer?.Hide();

			if( Mathf.Approximately( eventData.position.x, _cachedTap.pos.x ) && Mathf.Approximately( eventData.position.y, _cachedTap.pos.y ) )
			{
				SendEvent( _cachedTap.input );
			}

			_cachedTap.input = null;
		}

        public Vector2 GetPointerPos()
		{
            return UnityEngine.Input.mousePosition;
		}

        public int GetTouches(PointerEventData eventData = null)
		{
#if UNITY_EDITOR
            if(eventData != null)
			{
                switch(eventData.button)
				{
                case PointerEventData.InputButton.Left:
                    return 1;
                case PointerEventData.InputButton.Right:
                    return 2;
                case PointerEventData.InputButton.Middle:
                    return 3;
				}
			}

            return 1;
#else
            return UnityEngine.Input.touchCount;
#endif
        }

		private void SendEvent(Input input)
		{
			Bootstrap.Remote?.SendInput( input );
		}
    }

    public class DEPRECATED : MonoBehaviour
	{
		private float _prevX = -1f;
		private float _prevY = -1f;

		private void Awake()
		{
			_prevX = GetPointerPos().x;
			_prevY = GetPointerPos().y;
		}

		private void Update()
		{
			Vector2 pointerPos = GetPointerPos();
			float curX = pointerPos.x;
			float curY = pointerPos.y;

			if( !Mathf.Approximately( _prevX, curX ) || !Mathf.Approximately( _prevY, curY ) )
			{
				Input input;
				Vector2 deltas = new Vector2(
					curX - _prevX,
					curY - _prevY );

				switch( GetTouches() )
				{
				case 0: throw new System.NotImplementedException();
				case 1:
					input = Input.Get( InputType.MOVE, deltas.ToModel() );
					break;
				case 2:
				default:
					input = Input.Get( InputType.SCRL, deltas.ToModel() );
					break;
				}

				_prevX = curX;
				_prevY = curY;

				Debug.Log( input.ToString() );
			}
		}

		public Vector2 GetPointerPos()
		{
			if( UnityEngine.Input.touchCount > 0 )
			{
				return UnityEngine.Input.GetTouch( 0 ).position;
			}

			return UnityEngine.Input.mousePosition;
		}

		public int GetTouches( PointerEventData eventData = null )
		{
#if UNITY_EDITOR
			if( eventData != null )
			{
				switch( eventData.button )
				{
				case PointerEventData.InputButton.Left:
					return 1;
				case PointerEventData.InputButton.Right:
					return 2;
				case PointerEventData.InputButton.Middle:
					return 3;
				}
			}

			return 1;
#else
            return UnityEngine.Input.touchCount;
#endif
		}
	}
}
