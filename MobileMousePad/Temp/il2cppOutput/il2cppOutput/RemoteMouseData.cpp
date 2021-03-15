#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// com.keg.remotemousedata.Input
struct Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858;
// com.keg.remotemousedata.LeftClick
struct LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B;
// com.keg.remotemousedata.MiddleClick
struct MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B;
// com.keg.remotemousedata.MouseMove
struct MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A;
// com.keg.remotemousedata.PointerDeltaInput
struct PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0;
// com.keg.remotemousedata.RightClick
struct RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B;
// com.keg.remotemousedata.ScrollMove
struct ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9;

IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputType_t81B7CAD61E9C106B06FCA264BA0D9B868D3ABB6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral617D0649AEF1573EB7CE1176636BD8427CA78917;
IL2CPP_EXTERN_C String_t* _stringLiteral9B770D711221E10CDA6E2CB2AE04B6B8D57FCEF9;
IL2CPP_EXTERN_C String_t* _stringLiteralD947609B6CBEE840E20ED7BDD8F4B6660BF87905;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Input_Get_mD853CA2D85FC2C320875D70DCCB319996387B270_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Input_Get_mD853CA2D85FC2C320875D70DCCB319996387B270_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Input_Serialize_mC5288B4115F9DC0BB3A1521613DAE1C0A140FECF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Input_ToString_m5D1341083EBDBC29CF5891346944B42B0A2786BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Input_get_ToStringAdd_m03F36A1D394FF227C807B6F3C5BF74350BEE254B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerDeltaInput_get_ToStringAdd_mB55A8B98A8A21BD765EA160040ADA47E7A2A98F0_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t26B84A6162DFD66BE82DC681AEC7E5A77194718B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// com.keg.remotemousedata.Vector2
struct  Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4 
{
public:
	// System.Single com.keg.remotemousedata.Vector2::x
	float ___x_0;
	// System.Single com.keg.remotemousedata.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// com.keg.remotemousedata.InputType
struct  InputType_t81B7CAD61E9C106B06FCA264BA0D9B868D3ABB6E 
{
public:
	// System.Int32 com.keg.remotemousedata.InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t81B7CAD61E9C106B06FCA264BA0D9B868D3ABB6E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// com.keg.remotemousedata.Input
struct  Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858  : public RuntimeObject
{
public:
	// com.keg.remotemousedata.InputType com.keg.remotemousedata.Input::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInputTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858, ___U3CInputTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CInputTypeU3Ek__BackingField_0() const { return ___U3CInputTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CInputTypeU3Ek__BackingField_0() { return &___U3CInputTypeU3Ek__BackingField_0; }
	inline void set_U3CInputTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CInputTypeU3Ek__BackingField_0 = value;
	}
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// com.keg.remotemousedata.LeftClick
struct  LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B  : public Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858
{
public:

public:
};


// com.keg.remotemousedata.MiddleClick
struct  MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B  : public Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858
{
public:

public:
};


// com.keg.remotemousedata.PointerDeltaInput
struct  PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0  : public Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858
{
public:
	// System.Single com.keg.remotemousedata.PointerDeltaInput::_dx
	float ____dx_1;
	// System.Single com.keg.remotemousedata.PointerDeltaInput::_dy
	float ____dy_2;

public:
	inline static int32_t get_offset_of__dx_1() { return static_cast<int32_t>(offsetof(PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0, ____dx_1)); }
	inline float get__dx_1() const { return ____dx_1; }
	inline float* get_address_of__dx_1() { return &____dx_1; }
	inline void set__dx_1(float value)
	{
		____dx_1 = value;
	}

	inline static int32_t get_offset_of__dy_2() { return static_cast<int32_t>(offsetof(PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0, ____dy_2)); }
	inline float get__dy_2() const { return ____dy_2; }
	inline float* get_address_of__dy_2() { return &____dy_2; }
	inline void set__dy_2(float value)
	{
		____dy_2 = value;
	}
};


// com.keg.remotemousedata.RightClick
struct  RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B  : public Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858
{
public:

public:
};


// com.keg.remotemousedata.MouseMove
struct  MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A  : public PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0
{
public:

public:
};


// com.keg.remotemousedata.ScrollMove
struct  ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9  : public PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void com.keg.remotemousedata.LeftClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftClick__ctor_m1D5D6896E3D4AC1B111154E620CA7634AC337D87 (LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B * __this, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.RightClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightClick__ctor_mD75FBF20C880A6D9C83A8E715C766723C4D68E7F (RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B * __this, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.MiddleClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddleClick__ctor_m49AD8DF5DDFB57F76A0E9BB7840D8328C529B8D2 (MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B * __this, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.MouseMove::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseMove__ctor_mE99B5E4901C1AFC33BC0B1725516AFE9ADCAB4C1 (MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A * __this, float ___dx0, float ___dy1, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.ScrollMove::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollMove__ctor_m825BA0972F1DBE19CAB204E2D9979288B44861E8 (ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9 * __this, float ___dx0, float ___dy1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.Input::set_InputType(com.keg.remotemousedata.InputType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Input_set_InputType_mE98E6EE0FAD30F9B0073CA0A233E8AEB39E2B050_inline (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, int32_t ___value0, const RuntimeMethod* method);
// com.keg.remotemousedata.InputType com.keg.remotemousedata.Input::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Input_get_InputType_m7C8E384550EDBB07796E76031BAA305007A8D6D5_inline (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output0, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.Input::.ctor(com.keg.remotemousedata.InputType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__ctor_mBCFB898DD71643DD0A874E4D7E19EAA022352171 (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, int32_t ___inputType0, const RuntimeMethod* method);
// System.Void com.keg.remotemousedata.PointerDeltaInput::.ctor(com.keg.remotemousedata.InputType,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeltaInput__ctor_mD73C45EA9BA1290EB97334C7791085547BD47DA1 (PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0 * __this, int32_t ___inputType0, float ___dx1, float ___dy2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// com.keg.remotemousedata.Input com.keg.remotemousedata.Input::Get(com.keg.remotemousedata.InputType,com.keg.remotemousedata.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * Input_Get_mD853CA2D85FC2C320875D70DCCB319996387B270 (int32_t ___inputType0, Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4  ___deltas1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_Get_mD853CA2D85FC2C320875D70DCCB319996387B270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * V_2 = NULL;
	{
		int32_t L_0 = ___inputType0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0065;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0025;
			}
			case 4:
			{
				goto IL_0035;
			}
			case 5:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0025:
	{
		LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B * L_3 = (LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B *)il2cpp_codegen_object_new(LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B_il2cpp_TypeInfo_var);
		LeftClick__ctor_m1D5D6896E3D4AC1B111154E620CA7634AC337D87(L_3, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0084;
	}

IL_002d:
	{
		RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B * L_4 = (RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B *)il2cpp_codegen_object_new(RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B_il2cpp_TypeInfo_var);
		RightClick__ctor_mD75FBF20C880A6D9C83A8E715C766723C4D68E7F(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0084;
	}

IL_0035:
	{
		MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B * L_5 = (MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B *)il2cpp_codegen_object_new(MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B_il2cpp_TypeInfo_var);
		MiddleClick__ctor_m49AD8DF5DDFB57F76A0E9BB7840D8328C529B8D2(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0084;
	}

IL_003d:
	{
		Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4  L_6 = ___deltas1;
		float L_7 = L_6.get_x_0();
		Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4  L_8 = ___deltas1;
		float L_9 = L_8.get_y_1();
		MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A * L_10 = (MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A *)il2cpp_codegen_object_new(MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A_il2cpp_TypeInfo_var);
		MouseMove__ctor_mE99B5E4901C1AFC33BC0B1725516AFE9ADCAB4C1(L_10, L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0084;
	}

IL_0051:
	{
		Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4  L_11 = ___deltas1;
		float L_12 = L_11.get_x_0();
		Vector2_tA1E629BEDF9265EC685E9F92A9556EF1B04CDFA4  L_13 = ___deltas1;
		float L_14 = L_13.get_y_1();
		ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9 * L_15 = (ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9 *)il2cpp_codegen_object_new(ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9_il2cpp_TypeInfo_var);
		ScrollMove__ctor_m825BA0972F1DBE19CAB204E2D9979288B44861E8(L_15, L_12, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0084;
	}

IL_0065:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = ___inputType0;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(InputType_t81B7CAD61E9C106B06FCA264BA0D9B868D3ABB6E_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		String_t* L_21 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9B770D711221E10CDA6E2CB2AE04B6B8D57FCEF9, L_17, /*hidden argument*/NULL);
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_22 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, Input_Get_mD853CA2D85FC2C320875D70DCCB319996387B270_RuntimeMethod_var);
	}

IL_0084:
	{
		Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * L_23 = V_2;
		return L_23;
	}
}
// System.String com.keg.remotemousedata.Input::get_ToStringAdd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_ToStringAdd_m03F36A1D394FF227C807B6F3C5BF74350BEE254B (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_get_ToStringAdd_m03F36A1D394FF227C807B6F3C5BF74350BEE254B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// com.keg.remotemousedata.InputType com.keg.remotemousedata.Input::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_InputType_m7C8E384550EDBB07796E76031BAA305007A8D6D5 (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInputTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void com.keg.remotemousedata.Input::set_InputType(com.keg.remotemousedata.InputType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_InputType_mE98E6EE0FAD30F9B0073CA0A233E8AEB39E2B050 (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInputTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void com.keg.remotemousedata.Input::.ctor(com.keg.remotemousedata.InputType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__ctor_mBCFB898DD71643DD0A874E4D7E19EAA022352171 (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, int32_t ___inputType0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___inputType0;
		Input_set_InputType_mE98E6EE0FAD30F9B0073CA0A233E8AEB39E2B050_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String com.keg.remotemousedata.Input::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_ToString_m5D1341083EBDBC29CF5891346944B42B0A2786BF (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_ToString_m5D1341083EBDBC29CF5891346944B42B0A2786BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = Input_get_InputType_m7C8E384550EDBB07796E76031BAA305007A8D6D5_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(InputType_t81B7CAD61E9C106B06FCA264BA0D9B868D3ABB6E_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String com.keg.remotemousedata.Input::get_ToStringAdd() */, __this);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		String_t* L_7 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral617D0649AEF1573EB7CE1176636BD8427CA78917, L_5, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] com.keg.remotemousedata.Input::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Input_Serialize_mC5288B4115F9DC0BB3A1521613DAE1C0A140FECF (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_Serialize_mC5288B4115F9DC0BB3A1521613DAE1C0A140FECF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = V_0;
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
			BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_2, L_1, /*hidden argument*/NULL);
			V_1 = L_2;
		}

IL_000f:
		try
		{ // begin try (depth: 2)
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_3 = V_1;
			int32_t L_4 = Input_get_InputType_m7C8E384550EDBB07796E76031BAA305007A8D6D5_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_3);
			VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_4);
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = V_1;
			VirtActionInvoker1< BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * >::Invoke(5 /* System.Void com.keg.remotemousedata.Input::SerializeInternal(System.IO.BinaryWriter) */, __this, L_5);
			IL2CPP_LEAVE(0x33, FINALLY_0028);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0028;
		}

FINALLY_0028:
		{ // begin finally (depth: 2)
			{
				BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_6 = V_1;
				if (!L_6)
				{
					goto IL_0032;
				}
			}

IL_002b:
			{
				BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_7 = V_1;
				NullCheck(L_7);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_7);
			}

IL_0032:
			{
				IL2CPP_END_FINALLY(40)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(40)
		{
			IL2CPP_JUMP_TBL(0x33, IL_0033)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0033:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_8 = V_0;
			NullCheck(L_8);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_8);
			V_2 = L_9;
			IL2CPP_LEAVE(0x47, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_003f:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_2;
		return L_12;
	}
}
// System.Void com.keg.remotemousedata.Input::SerializeInternal(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_SerializeInternal_m5B2AB18E3B6461B6279CC45E562B480884638B48 (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.keg.remotemousedata.LeftClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftClick__ctor_m1D5D6896E3D4AC1B111154E620CA7634AC337D87 (LeftClick_t0DDBB8E05CEEA5FDDFAF729221592775B69E4E1B * __this, const RuntimeMethod* method)
{
	{
		Input__ctor_mBCFB898DD71643DD0A874E4D7E19EAA022352171(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.keg.remotemousedata.MiddleClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddleClick__ctor_m49AD8DF5DDFB57F76A0E9BB7840D8328C529B8D2 (MiddleClick_tF4A2BF8F57B4668BDB0ED6CD196E6FC193B8D66B * __this, const RuntimeMethod* method)
{
	{
		Input__ctor_mBCFB898DD71643DD0A874E4D7E19EAA022352171(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.keg.remotemousedata.MouseMove::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseMove__ctor_mE99B5E4901C1AFC33BC0B1725516AFE9ADCAB4C1 (MouseMove_t369BFC62D5EC41BA5ECC6C71DA2F23EC07CD550A * __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	{
		float L_0 = ___dx0;
		float L_1 = ___dy1;
		PointerDeltaInput__ctor_mD73C45EA9BA1290EB97334C7791085547BD47DA1(__this, 1, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String com.keg.remotemousedata.PointerDeltaInput::get_ToStringAdd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PointerDeltaInput_get_ToStringAdd_mB55A8B98A8A21BD765EA160040ADA47E7A2A98F0 (PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerDeltaInput_get_ToStringAdd_mB55A8B98A8A21BD765EA160040ADA47E7A2A98F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get__dx_1();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get__dy_2();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralD947609B6CBEE840E20ED7BDD8F4B6660BF87905, L_5, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void com.keg.remotemousedata.PointerDeltaInput::.ctor(com.keg.remotemousedata.InputType,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeltaInput__ctor_mD73C45EA9BA1290EB97334C7791085547BD47DA1 (PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0 * __this, int32_t ___inputType0, float ___dx1, float ___dy2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___inputType0;
		Input__ctor_mBCFB898DD71643DD0A874E4D7E19EAA022352171(__this, L_0, /*hidden argument*/NULL);
		float L_1 = ___dx1;
		__this->set__dx_1(L_1);
		float L_2 = ___dy2;
		__this->set__dy_2(L_2);
		return;
	}
}
// System.Void com.keg.remotemousedata.PointerDeltaInput::SerializeInternal(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeltaInput_SerializeInternal_m5E269E52799ADEB37B81716F5A4BE15FB7F32120 (PointerDeltaInput_tF010EA1C9D1208D5562E6B43F4615A74497C6EF0 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		float L_1 = __this->get__dx_1();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = ___writer0;
		float L_3 = __this->get__dy_2();
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_2, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.keg.remotemousedata.RightClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightClick__ctor_mD75FBF20C880A6D9C83A8E715C766723C4D68E7F (RightClick_t83F30A5BC401E7442243CA31BA45E7282C0B908B * __this, const RuntimeMethod* method)
{
	{
		Input__ctor_mBCFB898DD71643DD0A874E4D7E19EAA022352171(__this, 2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.keg.remotemousedata.ScrollMove::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollMove__ctor_m825BA0972F1DBE19CAB204E2D9979288B44861E8 (ScrollMove_t4AFD98E1A168D9B57A5BBC7A548D9E997CEE5AA9 * __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	{
		float L_0 = ___dx0;
		float L_1 = ___dy1;
		PointerDeltaInput__ctor_mD73C45EA9BA1290EB97334C7791085547BD47DA1(__this, 5, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Input_set_InputType_mE98E6EE0FAD30F9B0073CA0A233E8AEB39E2B050_inline (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInputTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Input_get_InputType_m7C8E384550EDBB07796E76031BAA305007A8D6D5_inline (Input_t2EB1CA575FF87E91C1CBC4EEDAAD43AE7694D858 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInputTypeU3Ek__BackingField_0();
		return L_0;
	}
}
