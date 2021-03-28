/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/27/2021

using System.IO;
using System.Threading.Tasks;
using Action = System.Action<com.keg.remotemousedata.Input>;

namespace com.keg.remotemousedata
{
	public class InputReader
	{
		public enum Token
		{
			READ,
			STOP,
		}

		public event Action OnInputRead;

		public void Read( Stream stream, in Token readToken )
		{
			using( BinaryReader reader = new BinaryReader( stream ) )
			{
				while( readToken == Token.READ )
				{
					OnInputRead( Input.Get( reader ) );
				}
			}
		}
	}
}
