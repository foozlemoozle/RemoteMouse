/// Created by: Kirk George
/// Copyright: Kirk George
/// Website: https://github.com/foozlemoozle?tab=repositories
/// 03/14/2021

using System.IO;

namespace com.keg.remotemousedata
{
    public struct Vector2
    {
        public float x;
        public float y;
    }

    public abstract class Input
    {
        public static Input Get( InputType inputType, Vector2 deltas = new Vector2() )
        {
            switch( inputType )
            {
            case InputType.LTAP:
                return new LeftClick();
            case InputType.RTAP:
                return new RightClick();
            case InputType.MTAP:
                return new MiddleClick();
            case InputType.MOVE:
                return new MouseMove( deltas.x, deltas.y );
            case InputType.SCRL:
                return new ScrollMove( deltas.x, deltas.y );
            case InputType.NONE:
            default:
                throw new System.NotImplementedException( $"Input type {inputType} not yet supported!" );
            }
        }

        public static Input Get( byte[] raw )
        {
            using( MemoryStream stream = new MemoryStream( raw ) )
            {
                using( BinaryReader reader = new BinaryReader( stream ) )
                {
                    InputType inputType = (InputType)reader.ReadInt32();
                    float dx;
                    float dy;

                    switch( inputType )
                    {
                    case InputType.NONE: throw new System.NotImplementedException();
                    case InputType.LTAP:
                        return new LeftClick();
                    case InputType.RTAP:
                        return new RightClick();
                    case InputType.MTAP:
                        return new MiddleClick();
                    case InputType.MOVE:
                    case InputType.SCRL:
                    default:
                        dx = reader.ReadSingle();
                        dy = reader.ReadSingle();
                        break;
                    }

                    switch( inputType )
                    {
                    case InputType.MOVE:
                        return new MouseMove( dx, dy );
                    case InputType.SCRL:
                    default:
                        return new ScrollMove( dx, dy );
                    }
                }
            }
        }

        protected virtual string ToStringAdd => "";

        public InputType InputType { get; protected set; }

        protected Input( InputType inputType )
        {
            InputType = inputType;
        }

        public sealed override string ToString()
        {
            return $"Type: {InputType} {ToStringAdd}";
        }

        public byte[] Serialize()
        {
            using( MemoryStream stream = new MemoryStream() )
            {
                using( BinaryWriter writer = new BinaryWriter( stream ) )
                {
                    writer.Write( (int)InputType );
                    SerializeInternal( writer );
                }

                return stream.ToArray();
            }
        }

        protected virtual void SerializeInternal( BinaryWriter writer ) { }
    }

    public interface IPointerDelta
    {
        float DX { get; }
        float DY { get; }
    }

    public abstract class PointerDeltaInput : Input, IPointerDelta
    {
        private float _dx;
        private float _dy;

        float IPointerDelta.DX => _dx;
        float IPointerDelta.DY => _dy;

        protected override string ToStringAdd => $"deltas: ({_dx}, {_dy})";

        public PointerDeltaInput( InputType inputType, float dx, float dy ) : base( inputType )
        {
            _dx = dx;
            _dy = dy;
        }

        protected override void SerializeInternal( BinaryWriter writer )
        {
            writer.Write( _dx );
            writer.Write( _dy );
        }
    }

    public class LeftClick : Input
    {
        public LeftClick() : base( InputType.LTAP ) { }
    }

    public class RightClick : Input
    {
        public RightClick() : base( InputType.RTAP ) { }
    }

    public class MiddleClick : Input
    {
        public MiddleClick() : base( InputType.MTAP ) { }
    }

    public class MouseMove : PointerDeltaInput
    {
        public MouseMove( float dx, float dy ) : base( InputType.MOVE, dx, dy ) { }
    }

    public class ScrollMove : PointerDeltaInput
    {
        public ScrollMove( float dx, float dy ) : base( InputType.SCRL, dx, dy ) { }
    }
}

