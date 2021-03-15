/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/14/2021

using UnityEngine;
using V2 = com.keg.remotemousedata.Vector2;

public static class Vector2Converter
{
	public static Vector2 ToUnity(this V2 vector)
	{
		return new Vector2( vector.x, vector.y );
	}

	public static V2 ToModel(this Vector2 vector)
	{
		return new V2() { x = vector.x, y = vector.y };
	}
}
