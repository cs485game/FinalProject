﻿#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_com;
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_pinvoke;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	intptr_t* ___native_trace_ips_15;
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
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef PLAYERPREFS_T6E16EDCF104A27E432EDE9AE648DFE7A0401C37C_H
#define PLAYERPREFS_T6E16EDCF104A27E432EDE9AE648DFE7A0401C37C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefs
struct  PlayerPrefs_t6E16EDCF104A27E432EDE9AE648DFE7A0401C37C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFS_T6E16EDCF104A27E432EDE9AE648DFE7A0401C37C_H
#ifndef PROPERTYNAMEUTILS_T01310671910F3EA84F5FD7D29149378A4FD19D28_H
#define PROPERTYNAMEUTILS_T01310671910F3EA84F5FD7D29149378A4FD19D28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t01310671910F3EA84F5FD7D29149378A4FD19D28  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T01310671910F3EA84F5FD7D29149378A4FD19D28_H
#ifndef RANDOM_TA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD_H
#define RANDOM_TA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_TA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef PERFORMANCEANALYTICSUPDATE_T88DA3DFA96BFE3334911A346234B57FDFE9B2ECF_H
#define PERFORMANCEANALYTICSUPDATE_T88DA3DFA96BFE3334911A346234B57FDFE9B2ECF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate_PerformanceAnalyticsUpdate
struct  PerformanceAnalyticsUpdate_t88DA3DFA96BFE3334911A346234B57FDFE9B2ECF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t88DA3DFA96BFE3334911A346234B57FDFE9B2ECF__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCEANALYTICSUPDATE_T88DA3DFA96BFE3334911A346234B57FDFE9B2ECF_H
#ifndef FIXEDUPDATE_T25828E1D5DAA8AB833C2E5524B63869670DA9B3B_H
#define FIXEDUPDATE_T25828E1D5DAA8AB833C2E5524B63869670DA9B3B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate
struct  FixedUpdate_t25828E1D5DAA8AB833C2E5524B63869670DA9B3B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FixedUpdate_t25828E1D5DAA8AB833C2E5524B63869670DA9B3B__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDUPDATE_T25828E1D5DAA8AB833C2E5524B63869670DA9B3B_H
#ifndef AUDIOFIXEDUPDATE_T8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4_H
#define AUDIOFIXEDUPDATE_T8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_AudioFixedUpdate
struct  AudioFixedUpdate_t8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_t8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOFIXEDUPDATE_T8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4_H
#ifndef CLEARLINES_T0FE68882040055AF723D5B12498DA993225EE4DC_H
#define CLEARLINES_T0FE68882040055AF723D5B12498DA993225EE4DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_ClearLines
struct  ClearLines_t0FE68882040055AF723D5B12498DA993225EE4DC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t0FE68882040055AF723D5B12498DA993225EE4DC__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARLINES_T0FE68882040055AF723D5B12498DA993225EE4DC_H
#ifndef DIRECTORFIXEDSAMPLETIME_TE44D97F128B848A8BE03B8E3D10CB40806D0C328_H
#define DIRECTORFIXEDSAMPLETIME_TE44D97F128B848A8BE03B8E3D10CB40806D0C328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_DirectorFixedSampleTime
struct  DirectorFixedSampleTime_tE44D97F128B848A8BE03B8E3D10CB40806D0C328 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_tE44D97F128B848A8BE03B8E3D10CB40806D0C328__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORFIXEDSAMPLETIME_TE44D97F128B848A8BE03B8E3D10CB40806D0C328_H
#ifndef DIRECTORFIXEDUPDATE_T1DB8994A40639F7BC34424ACA6FD738D209D9D76_H
#define DIRECTORFIXEDUPDATE_T1DB8994A40639F7BC34424ACA6FD738D209D9D76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_DirectorFixedUpdate
struct  DirectorFixedUpdate_t1DB8994A40639F7BC34424ACA6FD738D209D9D76 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_t1DB8994A40639F7BC34424ACA6FD738D209D9D76__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORFIXEDUPDATE_T1DB8994A40639F7BC34424ACA6FD738D209D9D76_H
#ifndef DIRECTORFIXEDUPDATEPOSTPHYSICS_TFB5E26F5620AF6298C2C115BE81D5B53D473FC1D_H
#define DIRECTORFIXEDUPDATEPOSTPHYSICS_TFB5E26F5620AF6298C2C115BE81D5B53D473FC1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_DirectorFixedUpdatePostPhysics
struct  DirectorFixedUpdatePostPhysics_tFB5E26F5620AF6298C2C115BE81D5B53D473FC1D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_tFB5E26F5620AF6298C2C115BE81D5B53D473FC1D__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORFIXEDUPDATEPOSTPHYSICS_TFB5E26F5620AF6298C2C115BE81D5B53D473FC1D_H
#ifndef LEGACYFIXEDANIMATIONUPDATE_T1670AAD9F8DB9374A4D0B01445959A14CE3FC28E_H
#define LEGACYFIXEDANIMATIONUPDATE_T1670AAD9F8DB9374A4D0B01445959A14CE3FC28E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_LegacyFixedAnimationUpdate
struct  LegacyFixedAnimationUpdate_t1670AAD9F8DB9374A4D0B01445959A14CE3FC28E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_t1670AAD9F8DB9374A4D0B01445959A14CE3FC28E__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEGACYFIXEDANIMATIONUPDATE_T1670AAD9F8DB9374A4D0B01445959A14CE3FC28E_H
#ifndef NEWINPUTFIXEDUPDATE_T43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9_H
#define NEWINPUTFIXEDUPDATE_T43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_NewInputFixedUpdate
struct  NewInputFixedUpdate_t43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_t43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTFIXEDUPDATE_T43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9_H
#ifndef PHYSICS2DFIXEDUPDATE_TFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6_H
#define PHYSICS2DFIXEDUPDATE_TFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_Physics2DFixedUpdate
struct  Physics2DFixedUpdate_tFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_tFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2DFIXEDUPDATE_TFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6_H
#ifndef PHYSICSFIXEDUPDATE_TF745C7E586137E6B6E0BADF203FFB97A1757751B_H
#define PHYSICSFIXEDUPDATE_TF745C7E586137E6B6E0BADF203FFB97A1757751B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_PhysicsFixedUpdate
struct  PhysicsFixedUpdate_tF745C7E586137E6B6E0BADF203FFB97A1757751B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_tF745C7E586137E6B6E0BADF203FFB97A1757751B__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSFIXEDUPDATE_TF745C7E586137E6B6E0BADF203FFB97A1757751B_H
#ifndef SCRIPTRUNBEHAVIOURFIXEDUPDATE_TCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF_H
#define SCRIPTRUNBEHAVIOURFIXEDUPDATE_TCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_ScriptRunBehaviourFixedUpdate
struct  ScriptRunBehaviourFixedUpdate_tCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_tCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURFIXEDUPDATE_TCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF_H
#ifndef SCRIPTRUNDELAYEDFIXEDFRAMERATE_T53CBEABC69D97C117D72024254454BE76EB16D46_H
#define SCRIPTRUNDELAYEDFIXEDFRAMERATE_T53CBEABC69D97C117D72024254454BE76EB16D46_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_ScriptRunDelayedFixedFrameRate
struct  ScriptRunDelayedFixedFrameRate_t53CBEABC69D97C117D72024254454BE76EB16D46 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t53CBEABC69D97C117D72024254454BE76EB16D46__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDFIXEDFRAMERATE_T53CBEABC69D97C117D72024254454BE76EB16D46_H
#ifndef XRFIXEDUPDATE_T25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4_H
#define XRFIXEDUPDATE_T25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate_XRFixedUpdate
struct  XRFixedUpdate_t25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_t25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRFIXEDUPDATE_T25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4_H
#ifndef POSTLATEUPDATE_T3E9A2536F5977685146D7C8C64033A750780F713_H
#define POSTLATEUPDATE_T3E9A2536F5977685146D7C8C64033A750780F713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate
struct  PostLateUpdate_t3E9A2536F5977685146D7C8C64033A750780F713 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PostLateUpdate_t3E9A2536F5977685146D7C8C64033A750780F713__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTLATEUPDATE_T3E9A2536F5977685146D7C8C64033A750780F713_H
#ifndef BATCHMODEUPDATE_T05EC976E3F41B0647D199448D6090F27EE804CE0_H
#define BATCHMODEUPDATE_T05EC976E3F41B0647D199448D6090F27EE804CE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_BatchModeUpdate
struct  BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATCHMODEUPDATE_T05EC976E3F41B0647D199448D6090F27EE804CE0_H
#ifndef CLEARIMMEDIATERENDERERS_TC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0_H
#define CLEARIMMEDIATERENDERERS_TC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ClearImmediateRenderers
struct  ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARIMMEDIATERENDERERS_TC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0_H
#ifndef DIRECTORLATEUPDATE_TFD444276DAAFDF5385A0F9183B76A3A5A0E1E887_H
#define DIRECTORLATEUPDATE_TFD444276DAAFDF5385A0F9183B76A3A5A0E1E887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_DirectorLateUpdate
struct  DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORLATEUPDATE_TFD444276DAAFDF5385A0F9183B76A3A5A0E1E887_H
#ifndef DIRECTORRENDERIMAGE_T3345E0254BC93C9546A5ED8A6C98F7435E0A281C_H
#define DIRECTORRENDERIMAGE_T3345E0254BC93C9546A5ED8A6C98F7435E0A281C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_DirectorRenderImage
struct  DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORRENDERIMAGE_T3345E0254BC93C9546A5ED8A6C98F7435E0A281C_H
#ifndef ENDGRAPHICSJOBSAFTERSCRIPTLATEUPDATE_TF1E49A609B99DD2CB51D0CF259EA98D756428329_H
#define ENDGRAPHICSJOBSAFTERSCRIPTLATEUPDATE_TF1E49A609B99DD2CB51D0CF259EA98D756428329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate
struct  EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDGRAPHICSJOBSAFTERSCRIPTLATEUPDATE_TF1E49A609B99DD2CB51D0CF259EA98D756428329_H
#ifndef ENLIGHTENRUNTIMEUPDATE_T0E127B1521BECA2EC500152C52B0C233A30C2468_H
#define ENLIGHTENRUNTIMEUPDATE_T0E127B1521BECA2EC500152C52B0C233A30C2468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_EnlightenRuntimeUpdate
struct  EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENLIGHTENRUNTIMEUPDATE_T0E127B1521BECA2EC500152C52B0C233A30C2468_H
#ifndef EXECUTEGAMECENTERCALLBACKS_T467F28230A59874C41F1C64F910FCD69387EE90E_H
#define EXECUTEGAMECENTERCALLBACKS_T467F28230A59874C41F1C64F910FCD69387EE90E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ExecuteGameCenterCallbacks
struct  ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEGAMECENTERCALLBACKS_T467F28230A59874C41F1C64F910FCD69387EE90E_H
#ifndef FINISHFRAMERENDERING_T6893FD5B11B29E45964FC1B7ACB96044CE1F96B5_H
#define FINISHFRAMERENDERING_T6893FD5B11B29E45964FC1B7ACB96044CE1F96B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_FinishFrameRendering
struct  FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHFRAMERENDERING_T6893FD5B11B29E45964FC1B7ACB96044CE1F96B5_H
#ifndef GUICLEAREVENTS_T5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED_H
#define GUICLEAREVENTS_T5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_GUIClearEvents
struct  GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUICLEAREVENTS_T5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED_H
#ifndef INPUTENDFRAME_TE7AE2B1BB082471507CFC806851C624088ABE260_H
#define INPUTENDFRAME_TE7AE2B1BB082471507CFC806851C624088ABE260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_InputEndFrame
struct  InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260 
{
public:
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTENDFRAME_TE7AE2B1BB082471507CFC806851C624088ABE260_H
#ifndef MEMORYFRAMEMAINTENANCE_T0BF88737639E721CEB73FA4889D7317E7636D0C9_H
#define MEMORYFRAMEMAINTENANCE_T0BF88737639E721CEB73FA4889D7317E7636D0C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_MemoryFrameMaintenance
struct  MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYFRAMEMAINTENANCE_T0BF88737639E721CEB73FA4889D7317E7636D0C9_H
#ifndef PARTICLESYSTEMENDUPDATEALL_T54355FCD73467AA0BA006B36C78E4B5B4491C5F0_H
#define PARTICLESYSTEMENDUPDATEALL_T54355FCD73467AA0BA006B36C78E4B5B4491C5F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ParticleSystemEndUpdateAll
struct  ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMENDUPDATEALL_T54355FCD73467AA0BA006B36C78E4B5B4491C5F0_H
#ifndef PHYSICSSKINNEDCLOTHBEGINUPDATE_T5719B08DAE9436304E01ACAECDB05427EC982D54_H
#define PHYSICSSKINNEDCLOTHBEGINUPDATE_T5719B08DAE9436304E01ACAECDB05427EC982D54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PhysicsSkinnedClothBeginUpdate
struct  PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSSKINNEDCLOTHBEGINUPDATE_T5719B08DAE9436304E01ACAECDB05427EC982D54_H
#ifndef PHYSICSSKINNEDCLOTHFINISHUPDATE_T0F1B386C557255E8AF6CAB325C682582506556E8_H
#define PHYSICSSKINNEDCLOTHFINISHUPDATE_T0F1B386C557255E8AF6CAB325C682582506556E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PhysicsSkinnedClothFinishUpdate
struct  PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSSKINNEDCLOTHFINISHUPDATE_T0F1B386C557255E8AF6CAB325C682582506556E8_H
#ifndef PLAYEREMITCANVASGEOMETRY_TF766699132854F46892FC92B8DF85B5093BDE2EB_H
#define PLAYEREMITCANVASGEOMETRY_TF766699132854F46892FC92B8DF85B5093BDE2EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerEmitCanvasGeometry
struct  PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREMITCANVASGEOMETRY_TF766699132854F46892FC92B8DF85B5093BDE2EB_H
#ifndef PLAYERSENDFRAMECOMPLETE_T9F172FEA447751A82C98B959B65A5E8B8788F1E1_H
#define PLAYERSENDFRAMECOMPLETE_T9F172FEA447751A82C98B959B65A5E8B8788F1E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerSendFrameComplete
struct  PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMECOMPLETE_T9F172FEA447751A82C98B959B65A5E8B8788F1E1_H
#ifndef PLAYERSENDFRAMEPOSTPRESENT_T3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936_H
#define PLAYERSENDFRAMEPOSTPRESENT_T3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerSendFramePostPresent
struct  PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMEPOSTPRESENT_T3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936_H
#ifndef PLAYERSENDFRAMESTARTED_T2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548_H
#define PLAYERSENDFRAMESTARTED_T2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerSendFrameStarted
struct  PlayerSendFrameStarted_t2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_t2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMESTARTED_T2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548_H
#ifndef PLAYERUPDATECANVASES_T49B2F8239228B8096C4AE5FC0731F51E5C6117FB_H
#define PLAYERUPDATECANVASES_T49B2F8239228B8096C4AE5FC0731F51E5C6117FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerUpdateCanvases
struct  PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUPDATECANVASES_T49B2F8239228B8096C4AE5FC0731F51E5C6117FB_H
#ifndef PRESENTAFTERDRAW_T83E0606C786BDFBBAE7C7AD52530A105079CC272_H
#define PRESENTAFTERDRAW_T83E0606C786BDFBBAE7C7AD52530A105079CC272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PresentAfterDraw
struct  PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTAFTERDRAW_T83E0606C786BDFBBAE7C7AD52530A105079CC272_H
#ifndef PROCESSWEBSENDMESSAGES_T8F86BF4455C109A1F054609D74FC0E23ADE1C158_H
#define PROCESSWEBSENDMESSAGES_T8F86BF4455C109A1F054609D74FC0E23ADE1C158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ProcessWebSendMessages
struct  ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWEBSENDMESSAGES_T8F86BF4455C109A1F054609D74FC0E23ADE1C158_H
#ifndef PROFILERENDFRAME_TF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8_H
#define PROFILERENDFRAME_TF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ProfilerEndFrame
struct  ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERENDFRAME_TF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8_H
#ifndef PROFILERSYNCHRONIZESTATS_T4108C3FE92D72433F79E6DB785D16B74BDD71EAF_H
#define PROFILERSYNCHRONIZESTATS_T4108C3FE92D72433F79E6DB785D16B74BDD71EAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ProfilerSynchronizeStats
struct  ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERSYNCHRONIZESTATS_T4108C3FE92D72433F79E6DB785D16B74BDD71EAF_H
#ifndef RESETINPUTAXIS_T4B544F5072B205D69657274449C898238F863808_H
#define RESETINPUTAXIS_T4B544F5072B205D69657274449C898238F863808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ResetInputAxis
struct  ResetInputAxis_t4B544F5072B205D69657274449C898238F863808 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_t4B544F5072B205D69657274449C898238F863808__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETINPUTAXIS_T4B544F5072B205D69657274449C898238F863808_H
#ifndef SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TE104884C892D5EB2425AE6A37D709D47BC184B6F_H
#define SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TE104884C892D5EB2425AE6A37D709D47BC184B6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TE104884C892D5EB2425AE6A37D709D47BC184B6F_H
#ifndef SHADERHANDLEERRORS_TAE4F539805A8101E6290BA5C8453520CC21F8444_H
#define SHADERHANDLEERRORS_TAE4F539805A8101E6290BA5C8453520CC21F8444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ShaderHandleErrors
struct  ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERHANDLEERRORS_TAE4F539805A8101E6290BA5C8453520CC21F8444_H
#ifndef SORTINGGROUPSUPDATE_TA50D0E757364F33606CF9A28337111EB6E2A7926_H
#define SORTINGGROUPSUPDATE_TA50D0E757364F33606CF9A28337111EB6E2A7926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_SortingGroupsUpdate
struct  SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGGROUPSUPDATE_TA50D0E757364F33606CF9A28337111EB6E2A7926_H
#ifndef THREADEDLOADINGDEBUG_T963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A_H
#define THREADEDLOADINGDEBUG_T963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ThreadedLoadingDebug
struct  ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADEDLOADINGDEBUG_T963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A_H
#ifndef TRIGGERENDOFFRAMECALLBACKS_TF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8_H
#define TRIGGERENDOFFRAMECALLBACKS_TF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_TriggerEndOfFrameCallbacks
struct  TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERENDOFFRAMECALLBACKS_TF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8_H
#ifndef UPDATEALLRENDERERS_T75C75FD780EC3C39E2C1701FE3309F111C3FE0A2_H
#define UPDATEALLRENDERERS_T75C75FD780EC3C39E2C1701FE3309F111C3FE0A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateAllRenderers
struct  UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLRENDERERS_T75C75FD780EC3C39E2C1701FE3309F111C3FE0A2_H
#ifndef UPDATEALLSKINNEDMESHES_TADDB42406F9C4FCC034AA96752A6C03CF71323E5_H
#define UPDATEALLSKINNEDMESHES_TADDB42406F9C4FCC034AA96752A6C03CF71323E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateAllSkinnedMeshes
struct  UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLSKINNEDMESHES_TADDB42406F9C4FCC034AA96752A6C03CF71323E5_H
#ifndef UPDATEAUDIO_T68A074027049DC4DD5A0B0E30008DF30F3A6F2FD_H
#define UPDATEAUDIO_T68A074027049DC4DD5A0B0E30008DF30F3A6F2FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateAudio
struct  UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEAUDIO_T68A074027049DC4DD5A0B0E30008DF30F3A6F2FD_H
#ifndef UPDATECANVASRECTTRANSFORM_TEC8BCF8BEC086DBD7B137894FC2D80583BF3490C_H
#define UPDATECANVASRECTTRANSFORM_TEC8BCF8BEC086DBD7B137894FC2D80583BF3490C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateCanvasRectTransform
struct  UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECANVASRECTTRANSFORM_TEC8BCF8BEC086DBD7B137894FC2D80583BF3490C_H
#ifndef UPDATECAPTURESCREENSHOT_TCD1A4C5937E922991268364CC11D3A19C4F24450_H
#define UPDATECAPTURESCREENSHOT_TCD1A4C5937E922991268364CC11D3A19C4F24450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateCaptureScreenshot
struct  UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECAPTURESCREENSHOT_TCD1A4C5937E922991268364CC11D3A19C4F24450_H
#ifndef UPDATECUSTOMRENDERTEXTURES_T4C2C0B1F32265A3DB660FB828749E6A622095A3E_H
#define UPDATECUSTOMRENDERTEXTURES_T4C2C0B1F32265A3DB660FB828749E6A622095A3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateCustomRenderTextures
struct  UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECUSTOMRENDERTEXTURES_T4C2C0B1F32265A3DB660FB828749E6A622095A3E_H
#ifndef UPDATERECTTRANSFORM_T2D0563041FA661EC515A3E081EFFE268655F2808_H
#define UPDATERECTTRANSFORM_T2D0563041FA661EC515A3E081EFFE268655F2808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateRectTransform
struct  UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERECTTRANSFORM_T2D0563041FA661EC515A3E081EFFE268655F2808_H
#ifndef UPDATERESOLUTION_TC42B88920237206D134F4166CA3A8B8FC8745AB1_H
#define UPDATERESOLUTION_TC42B88920237206D134F4166CA3A8B8FC8745AB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateResolution
struct  UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERESOLUTION_TC42B88920237206D134F4166CA3A8B8FC8745AB1_H
#ifndef UPDATESUBSTANCE_T56F9E729626CD4E63134C2AE0A1F29A345E1F7E9_H
#define UPDATESUBSTANCE_T56F9E729626CD4E63134C2AE0A1F29A345E1F7E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateSubstance
struct  UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESUBSTANCE_T56F9E729626CD4E63134C2AE0A1F29A345E1F7E9_H
#ifndef UPDATEVIDEO_TD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A_H
#define UPDATEVIDEO_TD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateVideo
struct  UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEO_TD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A_H
#ifndef UPDATEVIDEOTEXTURES_T8864A4393628834CC76D8501F593F7562B32882B_H
#define UPDATEVIDEOTEXTURES_T8864A4393628834CC76D8501F593F7562B32882B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateVideoTextures
struct  UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEOTEXTURES_T8864A4393628834CC76D8501F593F7562B32882B_H
#ifndef VFXUPDATE_TDBB6870227F433D7E16712117F30F166D76235A0_H
#define VFXUPDATE_TDBB6870227F433D7E16712117F30F166D76235A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_VFXUpdate
struct  VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VFXUPDATE_TDBB6870227F433D7E16712117F30F166D76235A0_H
#ifndef XRPOSTPRESENT_TD0C09FF1E316A8C652EBD675121E0436221746CD_H
#define XRPOSTPRESENT_TD0C09FF1E316A8C652EBD675121E0436221746CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_XRPostPresent
struct  XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPOSTPRESENT_TD0C09FF1E316A8C652EBD675121E0436221746CD_H
#ifndef PRELATEUPDATE_T3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2_H
#define PRELATEUPDATE_T3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate
struct  PreLateUpdate_t3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRELATEUPDATE_T3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2_H
#ifndef AIUPDATEPOSTSCRIPT_T610E7E67955C4BD4DFEE71E59F127FE9C545794F_H
#define AIUPDATEPOSTSCRIPT_T610E7E67955C4BD4DFEE71E59F127FE9C545794F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_AIUpdatePostScript
struct  AIUpdatePostScript_t610E7E67955C4BD4DFEE71E59F127FE9C545794F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t610E7E67955C4BD4DFEE71E59F127FE9C545794F__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIUPDATEPOSTSCRIPT_T610E7E67955C4BD4DFEE71E59F127FE9C545794F_H
#ifndef CONSTRAINTMANAGERUPDATE_T795681B4B54A73497628450F872FE5BB9D92EFE9_H
#define CONSTRAINTMANAGERUPDATE_T795681B4B54A73497628450F872FE5BB9D92EFE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_ConstraintManagerUpdate
struct  ConstraintManagerUpdate_t795681B4B54A73497628450F872FE5BB9D92EFE9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_t795681B4B54A73497628450F872FE5BB9D92EFE9__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTMANAGERUPDATE_T795681B4B54A73497628450F872FE5BB9D92EFE9_H
#ifndef DIRECTORDEFERREDEVALUATE_T715F8E37904D1127AEF5A5A6671176AF158C2255_H
#define DIRECTORDEFERREDEVALUATE_T715F8E37904D1127AEF5A5A6671176AF158C2255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_DirectorDeferredEvaluate
struct  DirectorDeferredEvaluate_t715F8E37904D1127AEF5A5A6671176AF158C2255 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t715F8E37904D1127AEF5A5A6671176AF158C2255__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORDEFERREDEVALUATE_T715F8E37904D1127AEF5A5A6671176AF158C2255_H
#ifndef DIRECTORUPDATEANIMATIONBEGIN_TDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0_H
#define DIRECTORUPDATEANIMATIONBEGIN_TDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_DirectorUpdateAnimationBegin
struct  DirectorUpdateAnimationBegin_tDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_tDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATEANIMATIONBEGIN_TDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0_H
#ifndef DIRECTORUPDATEANIMATIONEND_T8271D41507A09A13A3B2344784E40D6ACA512061_H
#define DIRECTORUPDATEANIMATIONEND_T8271D41507A09A13A3B2344784E40D6ACA512061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_DirectorUpdateAnimationEnd
struct  DirectorUpdateAnimationEnd_t8271D41507A09A13A3B2344784E40D6ACA512061 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_t8271D41507A09A13A3B2344784E40D6ACA512061__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATEANIMATIONEND_T8271D41507A09A13A3B2344784E40D6ACA512061_H
#ifndef ENDGRAPHICSJOBSAFTERSCRIPTUPDATE_T27FA55BB3C35F3433D937887845A7CD216260361_H
#define ENDGRAPHICSJOBSAFTERSCRIPTUPDATE_T27FA55BB3C35F3433D937887845A7CD216260361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_EndGraphicsJobsAfterScriptUpdate
struct  EndGraphicsJobsAfterScriptUpdate_t27FA55BB3C35F3433D937887845A7CD216260361 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_t27FA55BB3C35F3433D937887845A7CD216260361__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDGRAPHICSJOBSAFTERSCRIPTUPDATE_T27FA55BB3C35F3433D937887845A7CD216260361_H
#ifndef LEGACYANIMATIONUPDATE_T90286ACB616CC883F3DA3F822082AF875B28E602_H
#define LEGACYANIMATIONUPDATE_T90286ACB616CC883F3DA3F822082AF875B28E602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_LegacyAnimationUpdate
struct  LegacyAnimationUpdate_t90286ACB616CC883F3DA3F822082AF875B28E602 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_t90286ACB616CC883F3DA3F822082AF875B28E602__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEGACYANIMATIONUPDATE_T90286ACB616CC883F3DA3F822082AF875B28E602_H
#ifndef PARTICLESYSTEMBEGINUPDATEALL_TFD271959A8F8BFC70FA679675E122238BFA18D9B_H
#define PARTICLESYSTEMBEGINUPDATEALL_TFD271959A8F8BFC70FA679675E122238BFA18D9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_ParticleSystemBeginUpdateAll
struct  ParticleSystemBeginUpdateAll_tFD271959A8F8BFC70FA679675E122238BFA18D9B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_tFD271959A8F8BFC70FA679675E122238BFA18D9B__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMBEGINUPDATEALL_TFD271959A8F8BFC70FA679675E122238BFA18D9B_H
#ifndef SCRIPTRUNBEHAVIOURLATEUPDATE_T35B5BFC31A89E3FB958ACAEC3B9289F2BC880946_H
#define SCRIPTRUNBEHAVIOURLATEUPDATE_T35B5BFC31A89E3FB958ACAEC3B9289F2BC880946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_ScriptRunBehaviourLateUpdate
struct  ScriptRunBehaviourLateUpdate_t35B5BFC31A89E3FB958ACAEC3B9289F2BC880946 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t35B5BFC31A89E3FB958ACAEC3B9289F2BC880946__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURLATEUPDATE_T35B5BFC31A89E3FB958ACAEC3B9289F2BC880946_H
#ifndef UNETUPDATE_T5ACF417460269B4F93453BED5BE75E33F285EBF1_H
#define UNETUPDATE_T5ACF417460269B4F93453BED5BE75E33F285EBF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_UNetUpdate
struct  UNetUpdate_t5ACF417460269B4F93453BED5BE75E33F285EBF1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_t5ACF417460269B4F93453BED5BE75E33F285EBF1__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNETUPDATE_T5ACF417460269B4F93453BED5BE75E33F285EBF1_H
#ifndef UPDATEMASTERSERVERINTERFACE_TD0FF4A236C199CF3BB89E8B853B843976773AFE8_H
#define UPDATEMASTERSERVERINTERFACE_TD0FF4A236C199CF3BB89E8B853B843976773AFE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_UpdateMasterServerInterface
struct  UpdateMasterServerInterface_tD0FF4A236C199CF3BB89E8B853B843976773AFE8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_tD0FF4A236C199CF3BB89E8B853B843976773AFE8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEMASTERSERVERINTERFACE_TD0FF4A236C199CF3BB89E8B853B843976773AFE8_H
#ifndef UPDATENETWORKMANAGER_T9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF_H
#define UPDATENETWORKMANAGER_T9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate_UpdateNetworkManager
struct  UpdateNetworkManager_t9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_t9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATENETWORKMANAGER_T9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF_H
#ifndef PREUPDATE_T0D33225AF1A9EDB75B997B23B7589F824418FF67_H
#define PREUPDATE_T0D33225AF1A9EDB75B997B23B7589F824418FF67_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate
struct  PreUpdate_t0D33225AF1A9EDB75B997B23B7589F824418FF67 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PreUpdate_t0D33225AF1A9EDB75B997B23B7589F824418FF67__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREUPDATE_T0D33225AF1A9EDB75B997B23B7589F824418FF67_H
#ifndef AIUPDATE_T37225FF576E77797B8A25ECB11A6DD2DFB9513FE_H
#define AIUPDATE_T37225FF576E77797B8A25ECB11A6DD2DFB9513FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_AIUpdate
struct  AIUpdate_t37225FF576E77797B8A25ECB11A6DD2DFB9513FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_t37225FF576E77797B8A25ECB11A6DD2DFB9513FE__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIUPDATE_T37225FF576E77797B8A25ECB11A6DD2DFB9513FE_H
#ifndef CHECKTEXFIELDINPUT_TFFA9AEA30CC2D5896C5860BE717F3EEA29E62903_H
#define CHECKTEXFIELDINPUT_TFFA9AEA30CC2D5896C5860BE717F3EEA29E62903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_CheckTexFieldInput
struct  CheckTexFieldInput_tFFA9AEA30CC2D5896C5860BE717F3EEA29E62903 
{
public:
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_tFFA9AEA30CC2D5896C5860BE717F3EEA29E62903__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECKTEXFIELDINPUT_TFFA9AEA30CC2D5896C5860BE717F3EEA29E62903_H
#ifndef IMGUISENDQUEUEDEVENTS_T033762B74F9918FB60BB2ED999E665DDEEF89A71_H
#define IMGUISENDQUEUEDEVENTS_T033762B74F9918FB60BB2ED999E665DDEEF89A71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_IMGUISendQueuedEvents
struct  IMGUISendQueuedEvents_t033762B74F9918FB60BB2ED999E665DDEEF89A71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_t033762B74F9918FB60BB2ED999E665DDEEF89A71__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMGUISENDQUEUEDEVENTS_T033762B74F9918FB60BB2ED999E665DDEEF89A71_H
#ifndef NEWINPUTUPDATE_TDC21993BDF54E4723C2680229FAD9420DD83BF43_H
#define NEWINPUTUPDATE_TDC21993BDF54E4723C2680229FAD9420DD83BF43_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_NewInputUpdate
struct  NewInputUpdate_tDC21993BDF54E4723C2680229FAD9420DD83BF43 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_tDC21993BDF54E4723C2680229FAD9420DD83BF43__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTUPDATE_TDC21993BDF54E4723C2680229FAD9420DD83BF43_H
#ifndef PHYSICS2DUPDATE_TF7A35D97E86EB9F14388F256E848174C711D1D88_H
#define PHYSICS2DUPDATE_TF7A35D97E86EB9F14388F256E848174C711D1D88_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_Physics2DUpdate
struct  Physics2DUpdate_tF7A35D97E86EB9F14388F256E848174C711D1D88 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_tF7A35D97E86EB9F14388F256E848174C711D1D88__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2DUPDATE_TF7A35D97E86EB9F14388F256E848174C711D1D88_H
#ifndef PHYSICSUPDATE_TA83967EE3A64230745034E631D9619092E11EB27_H
#define PHYSICSUPDATE_TA83967EE3A64230745034E631D9619092E11EB27_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_PhysicsUpdate
struct  PhysicsUpdate_tA83967EE3A64230745034E631D9619092E11EB27 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_tA83967EE3A64230745034E631D9619092E11EB27__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSUPDATE_TA83967EE3A64230745034E631D9619092E11EB27_H
#ifndef SENDMOUSEEVENTS_TE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A_H
#define SENDMOUSEEVENTS_TE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_SendMouseEvents
struct  SendMouseEvents_tE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_tE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_TE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A_H
#ifndef UPDATEVIDEO_TE480C2DD5E4CD4853CE0992D6D973856B2E96AF6_H
#define UPDATEVIDEO_TE480C2DD5E4CD4853CE0992D6D973856B2E96AF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_UpdateVideo
struct  UpdateVideo_tE480C2DD5E4CD4853CE0992D6D973856B2E96AF6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tE480C2DD5E4CD4853CE0992D6D973856B2E96AF6__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEO_TE480C2DD5E4CD4853CE0992D6D973856B2E96AF6_H
#ifndef WINDUPDATE_T206EC40F86E0FDC0C1CF2B3D844679B944D41D4E_H
#define WINDUPDATE_T206EC40F86E0FDC0C1CF2B3D844679B944D41D4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate_WindUpdate
struct  WindUpdate_t206EC40F86E0FDC0C1CF2B3D844679B944D41D4E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t206EC40F86E0FDC0C1CF2B3D844679B944D41D4E__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDUPDATE_T206EC40F86E0FDC0C1CF2B3D844679B944D41D4E_H
#ifndef UPDATE_T91E8283652E2724B6152901FB682EA06746C9860_H
#define UPDATE_T91E8283652E2724B6152901FB682EA06746C9860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update
struct  Update_t91E8283652E2724B6152901FB682EA06746C9860 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Update_t91E8283652E2724B6152901FB682EA06746C9860__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATE_T91E8283652E2724B6152901FB682EA06746C9860_H
#ifndef DIRECTORUPDATE_T073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8_H
#define DIRECTORUPDATE_T073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update_DirectorUpdate
struct  DirectorUpdate_t073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATE_T073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8_H
#ifndef SCRIPTRUNBEHAVIOURUPDATE_T9AB25EC98B7AF880D197EF82829FFA39072DED5F_H
#define SCRIPTRUNBEHAVIOURUPDATE_T9AB25EC98B7AF880D197EF82829FFA39072DED5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update_ScriptRunBehaviourUpdate
struct  ScriptRunBehaviourUpdate_t9AB25EC98B7AF880D197EF82829FFA39072DED5F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_t9AB25EC98B7AF880D197EF82829FFA39072DED5F__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURUPDATE_T9AB25EC98B7AF880D197EF82829FFA39072DED5F_H
#ifndef SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TBC6EF01E74D63D998CF15159B46DEC388AEC1463_H
#define SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TBC6EF01E74D63D998CF15159B46DEC388AEC1463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update_ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_tBC6EF01E74D63D998CF15159B46DEC388AEC1463 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_tBC6EF01E74D63D998CF15159B46DEC388AEC1463__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TBC6EF01E74D63D998CF15159B46DEC388AEC1463_H
#ifndef SCRIPTRUNDELAYEDTASKS_T7588891B44B88987EB1E6339A67E7BFEB42094BB_H
#define SCRIPTRUNDELAYEDTASKS_T7588891B44B88987EB1E6339A67E7BFEB42094BB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update_ScriptRunDelayedTasks
struct  ScriptRunDelayedTasks_t7588891B44B88987EB1E6339A67E7BFEB42094BB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t7588891B44B88987EB1E6339A67E7BFEB42094BB__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDTASKS_T7588891B44B88987EB1E6339A67E7BFEB42094BB_H
#ifndef PLAYERPREFSEXCEPTION_TFC087CD527E55947EEB584B893B96977392396DC_H
#define PLAYERPREFSEXCEPTION_TFC087CD527E55947EEB584B893B96977392396DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_tFC087CD527E55947EEB584B893B96977392396DC  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_TFC087CD527E55947EEB584B893B96977392396DC_H
#ifndef PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#define PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifndef PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#define PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifndef RANGEINT_T4480955B65C346F1B3A7A8AB74693AAB84D2988D_H
#define RANGEINT_T4480955B65C346F1B3A7A8AB74693AAB84D2988D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T4480955B65C346F1B3A7A8AB74693AAB84D2988D_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef COLORUSAGEATTRIBUTE_T42922412257F820E685FAC4C4E17A044E391DA77_H
#define COLORUSAGEATTRIBUTE_T42922412257F820E685FAC4C4E17A044E391DA77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ColorUsageAttribute
struct  ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Boolean UnityEngine.ColorUsageAttribute::showAlpha
	bool ___showAlpha_0;
	// System.Boolean UnityEngine.ColorUsageAttribute::hdr
	bool ___hdr_1;
	// System.Single UnityEngine.ColorUsageAttribute::minBrightness
	float ___minBrightness_2;
	// System.Single UnityEngine.ColorUsageAttribute::maxBrightness
	float ___maxBrightness_3;
	// System.Single UnityEngine.ColorUsageAttribute::minExposureValue
	float ___minExposureValue_4;
	// System.Single UnityEngine.ColorUsageAttribute::maxExposureValue
	float ___maxExposureValue_5;

public:
	inline static int32_t get_offset_of_showAlpha_0() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77, ___showAlpha_0)); }
	inline bool get_showAlpha_0() const { return ___showAlpha_0; }
	inline bool* get_address_of_showAlpha_0() { return &___showAlpha_0; }
	inline void set_showAlpha_0(bool value)
	{
		___showAlpha_0 = value;
	}

	inline static int32_t get_offset_of_hdr_1() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77, ___hdr_1)); }
	inline bool get_hdr_1() const { return ___hdr_1; }
	inline bool* get_address_of_hdr_1() { return &___hdr_1; }
	inline void set_hdr_1(bool value)
	{
		___hdr_1 = value;
	}

	inline static int32_t get_offset_of_minBrightness_2() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77, ___minBrightness_2)); }
	inline float get_minBrightness_2() const { return ___minBrightness_2; }
	inline float* get_address_of_minBrightness_2() { return &___minBrightness_2; }
	inline void set_minBrightness_2(float value)
	{
		___minBrightness_2 = value;
	}

	inline static int32_t get_offset_of_maxBrightness_3() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77, ___maxBrightness_3)); }
	inline float get_maxBrightness_3() const { return ___maxBrightness_3; }
	inline float* get_address_of_maxBrightness_3() { return &___maxBrightness_3; }
	inline void set_maxBrightness_3(float value)
	{
		___maxBrightness_3 = value;
	}

	inline static int32_t get_offset_of_minExposureValue_4() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77, ___minExposureValue_4)); }
	inline float get_minExposureValue_4() const { return ___minExposureValue_4; }
	inline float* get_address_of_minExposureValue_4() { return &___minExposureValue_4; }
	inline void set_minExposureValue_4(float value)
	{
		___minExposureValue_4 = value;
	}

	inline static int32_t get_offset_of_maxExposureValue_5() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77, ___maxExposureValue_5)); }
	inline float get_maxExposureValue_5() const { return ___maxExposureValue_5; }
	inline float* get_address_of_maxExposureValue_5() { return &___maxExposureValue_5; }
	inline void set_maxExposureValue_5(float value)
	{
		___maxExposureValue_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORUSAGEATTRIBUTE_T42922412257F820E685FAC4C4E17A044E391DA77_H
#ifndef PLAYERLOOPSYSTEM_T89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_H
#define PLAYERLOOPSYSTEM_T89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[] UnityEngine.Experimental.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2* ___subSystemList_1;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem_UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * ___updateDelegate_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((&___subSystemList_1), value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___updateDelegate_2)); }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_2), value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
#endif // PLAYERLOOPSYSTEM_T89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_H
#ifndef PLAYERLOOPSYSTEMINTERNAL_TE0D30607A74F1E0D695E5E83717C26308CB5C9E9_H
#define PLAYERLOOPSYSTEMINTERNAL_TE0D30607A74F1E0D695E5E83717C26308CB5C9E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct  PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem_UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * ___updateDelegate_1;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_updateDelegate_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___updateDelegate_1)); }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * get_updateDelegate_1() const { return ___updateDelegate_1; }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 ** get_address_of_updateDelegate_1() { return &___updateDelegate_1; }
	inline void set_updateDelegate_1(UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * value)
	{
		___updateDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_1), value);
	}

	inline static int32_t get_offset_of_updateFunction_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___updateFunction_2)); }
	inline intptr_t get_updateFunction_2() const { return ___updateFunction_2; }
	inline intptr_t* get_address_of_updateFunction_2() { return &___updateFunction_2; }
	inline void set_updateFunction_2(intptr_t value)
	{
		___updateFunction_2 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___loopConditionFunction_3)); }
	inline intptr_t get_loopConditionFunction_3() const { return ___loopConditionFunction_3; }
	inline intptr_t* get_address_of_loopConditionFunction_3() { return &___loopConditionFunction_3; }
	inline void set_loopConditionFunction_3(intptr_t value)
	{
		___loopConditionFunction_3 = value;
	}

	inline static int32_t get_offset_of_numSubSystems_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___numSubSystems_4)); }
	inline int32_t get_numSubSystems_4() const { return ___numSubSystems_4; }
	inline int32_t* get_address_of_numSubSystems_4() { return &___numSubSystems_4; }
	inline void set_numSubSystems_4(int32_t value)
	{
		___numSubSystems_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshaled_pinvoke
{
	Type_t * ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshaled_com
{
	Type_t * ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
#endif // PLAYERLOOPSYSTEMINTERNAL_TE0D30607A74F1E0D695E5E83717C26308CB5C9E9_H
#ifndef RANGEATTRIBUTE_T6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98_H
#define RANGEATTRIBUTE_T6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98_H
#ifndef SPACEATTRIBUTE_TA724C103FE786D2E773D89B2789C0C1F812376C2_H
#define SPACEATTRIBUTE_TA724C103FE786D2E773D89B2789C0C1F812376C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_TA724C103FE786D2E773D89B2789C0C1F812376C2_H
#ifndef TEXTAREAATTRIBUTE_T85045C366B3A3B41CE21984CDDE589E1A786E394_H
#define TEXTAREAATTRIBUTE_T85045C366B3A3B41CE21984CDDE589E1A786E394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T85045C366B3A3B41CE21984CDDE589E1A786E394_H
#ifndef TOOLTIPATTRIBUTE_T92811DE0164DF2D722334584EBEEE3EF15AD5E6C_H
#define TOOLTIPATTRIBUTE_T92811DE0164DF2D722334584EBEEE3EF15AD5E6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T92811DE0164DF2D722334584EBEEE3EF15AD5E6C_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef UPDATEFUNCTION_TE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_H
#define UPDATEFUNCTION_TE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem_UpdateFunction
struct  UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEFUNCTION_TE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (PerformanceAnalyticsUpdate_t88DA3DFA96BFE3334911A346234B57FDFE9B2ECF)+ sizeof (RuntimeObject), sizeof(PerformanceAnalyticsUpdate_t88DA3DFA96BFE3334911A346234B57FDFE9B2ECF ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (FixedUpdate_t25828E1D5DAA8AB833C2E5524B63869670DA9B3B)+ sizeof (RuntimeObject), sizeof(FixedUpdate_t25828E1D5DAA8AB833C2E5524B63869670DA9B3B ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (ClearLines_t0FE68882040055AF723D5B12498DA993225EE4DC)+ sizeof (RuntimeObject), sizeof(ClearLines_t0FE68882040055AF723D5B12498DA993225EE4DC ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (DirectorFixedSampleTime_tE44D97F128B848A8BE03B8E3D10CB40806D0C328)+ sizeof (RuntimeObject), sizeof(DirectorFixedSampleTime_tE44D97F128B848A8BE03B8E3D10CB40806D0C328 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (AudioFixedUpdate_t8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4)+ sizeof (RuntimeObject), sizeof(AudioFixedUpdate_t8D86FEC6EF6F1B7517B2B47D1EEE3878209935E4 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (ScriptRunBehaviourFixedUpdate_tCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourFixedUpdate_tCF7AF967C8C9C39950E4E40AD084B929E3BCEDAF ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (DirectorFixedUpdate_t1DB8994A40639F7BC34424ACA6FD738D209D9D76)+ sizeof (RuntimeObject), sizeof(DirectorFixedUpdate_t1DB8994A40639F7BC34424ACA6FD738D209D9D76 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (LegacyFixedAnimationUpdate_t1670AAD9F8DB9374A4D0B01445959A14CE3FC28E)+ sizeof (RuntimeObject), sizeof(LegacyFixedAnimationUpdate_t1670AAD9F8DB9374A4D0B01445959A14CE3FC28E ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (XRFixedUpdate_t25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4)+ sizeof (RuntimeObject), sizeof(XRFixedUpdate_t25EABDFF194B8FD49B5BEF4E1B4B4668F46862C4 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (PhysicsFixedUpdate_tF745C7E586137E6B6E0BADF203FFB97A1757751B)+ sizeof (RuntimeObject), sizeof(PhysicsFixedUpdate_tF745C7E586137E6B6E0BADF203FFB97A1757751B ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (Physics2DFixedUpdate_tFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6)+ sizeof (RuntimeObject), sizeof(Physics2DFixedUpdate_tFC8E8F0ED08B5ECD39568852D580E0CA1C7AC0E6 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (DirectorFixedUpdatePostPhysics_tFB5E26F5620AF6298C2C115BE81D5B53D473FC1D)+ sizeof (RuntimeObject), sizeof(DirectorFixedUpdatePostPhysics_tFB5E26F5620AF6298C2C115BE81D5B53D473FC1D ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (ScriptRunDelayedFixedFrameRate_t53CBEABC69D97C117D72024254454BE76EB16D46)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedFixedFrameRate_t53CBEABC69D97C117D72024254454BE76EB16D46 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { sizeof (NewInputFixedUpdate_t43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9)+ sizeof (RuntimeObject), sizeof(NewInputFixedUpdate_t43DF3C6F9C46D47D4C7F58CDE9D063E1B1025EE9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { sizeof (PreUpdate_t0D33225AF1A9EDB75B997B23B7589F824418FF67)+ sizeof (RuntimeObject), sizeof(PreUpdate_t0D33225AF1A9EDB75B997B23B7589F824418FF67 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (PhysicsUpdate_tA83967EE3A64230745034E631D9619092E11EB27)+ sizeof (RuntimeObject), sizeof(PhysicsUpdate_tA83967EE3A64230745034E631D9619092E11EB27 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (Physics2DUpdate_tF7A35D97E86EB9F14388F256E848174C711D1D88)+ sizeof (RuntimeObject), sizeof(Physics2DUpdate_tF7A35D97E86EB9F14388F256E848174C711D1D88 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (CheckTexFieldInput_tFFA9AEA30CC2D5896C5860BE717F3EEA29E62903)+ sizeof (RuntimeObject), sizeof(CheckTexFieldInput_tFFA9AEA30CC2D5896C5860BE717F3EEA29E62903 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (IMGUISendQueuedEvents_t033762B74F9918FB60BB2ED999E665DDEEF89A71)+ sizeof (RuntimeObject), sizeof(IMGUISendQueuedEvents_t033762B74F9918FB60BB2ED999E665DDEEF89A71 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (SendMouseEvents_tE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A)+ sizeof (RuntimeObject), sizeof(SendMouseEvents_tE9AFB11715C1E5388ABF3B2430ECD223C3FEF62A ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (AIUpdate_t37225FF576E77797B8A25ECB11A6DD2DFB9513FE)+ sizeof (RuntimeObject), sizeof(AIUpdate_t37225FF576E77797B8A25ECB11A6DD2DFB9513FE ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (WindUpdate_t206EC40F86E0FDC0C1CF2B3D844679B944D41D4E)+ sizeof (RuntimeObject), sizeof(WindUpdate_t206EC40F86E0FDC0C1CF2B3D844679B944D41D4E ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (UpdateVideo_tE480C2DD5E4CD4853CE0992D6D973856B2E96AF6)+ sizeof (RuntimeObject), sizeof(UpdateVideo_tE480C2DD5E4CD4853CE0992D6D973856B2E96AF6 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (NewInputUpdate_tDC21993BDF54E4723C2680229FAD9420DD83BF43)+ sizeof (RuntimeObject), sizeof(NewInputUpdate_tDC21993BDF54E4723C2680229FAD9420DD83BF43 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { sizeof (Update_t91E8283652E2724B6152901FB682EA06746C9860)+ sizeof (RuntimeObject), sizeof(Update_t91E8283652E2724B6152901FB682EA06746C9860 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { sizeof (ScriptRunBehaviourUpdate_t9AB25EC98B7AF880D197EF82829FFA39072DED5F)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourUpdate_t9AB25EC98B7AF880D197EF82829FFA39072DED5F ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (DirectorUpdate_t073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8)+ sizeof (RuntimeObject), sizeof(DirectorUpdate_t073AF9E8C666D4DC542AA54D3D25B6BF1C4D9AD8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (ScriptRunDelayedDynamicFrameRate_tBC6EF01E74D63D998CF15159B46DEC388AEC1463)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedDynamicFrameRate_tBC6EF01E74D63D998CF15159B46DEC388AEC1463 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (ScriptRunDelayedTasks_t7588891B44B88987EB1E6339A67E7BFEB42094BB)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedTasks_t7588891B44B88987EB1E6339A67E7BFEB42094BB ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (PreLateUpdate_t3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2)+ sizeof (RuntimeObject), sizeof(PreLateUpdate_t3CE11A012EFE779EEA73EEC46CE79CD8C1250FA2 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (AIUpdatePostScript_t610E7E67955C4BD4DFEE71E59F127FE9C545794F)+ sizeof (RuntimeObject), sizeof(AIUpdatePostScript_t610E7E67955C4BD4DFEE71E59F127FE9C545794F ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (DirectorUpdateAnimationBegin_tDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0)+ sizeof (RuntimeObject), sizeof(DirectorUpdateAnimationBegin_tDF1CDD7DF6C214ECDF5D3955B79BE22758CCF5D0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (LegacyAnimationUpdate_t90286ACB616CC883F3DA3F822082AF875B28E602)+ sizeof (RuntimeObject), sizeof(LegacyAnimationUpdate_t90286ACB616CC883F3DA3F822082AF875B28E602 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (DirectorUpdateAnimationEnd_t8271D41507A09A13A3B2344784E40D6ACA512061)+ sizeof (RuntimeObject), sizeof(DirectorUpdateAnimationEnd_t8271D41507A09A13A3B2344784E40D6ACA512061 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (DirectorDeferredEvaluate_t715F8E37904D1127AEF5A5A6671176AF158C2255)+ sizeof (RuntimeObject), sizeof(DirectorDeferredEvaluate_t715F8E37904D1127AEF5A5A6671176AF158C2255 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (UpdateNetworkManager_t9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF)+ sizeof (RuntimeObject), sizeof(UpdateNetworkManager_t9CFA98B18E2E3822C61AE56F3146423F9A4DE8AF ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (UpdateMasterServerInterface_tD0FF4A236C199CF3BB89E8B853B843976773AFE8)+ sizeof (RuntimeObject), sizeof(UpdateMasterServerInterface_tD0FF4A236C199CF3BB89E8B853B843976773AFE8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2637 = { sizeof (UNetUpdate_t5ACF417460269B4F93453BED5BE75E33F285EBF1)+ sizeof (RuntimeObject), sizeof(UNetUpdate_t5ACF417460269B4F93453BED5BE75E33F285EBF1 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2638 = { sizeof (EndGraphicsJobsAfterScriptUpdate_t27FA55BB3C35F3433D937887845A7CD216260361)+ sizeof (RuntimeObject), sizeof(EndGraphicsJobsAfterScriptUpdate_t27FA55BB3C35F3433D937887845A7CD216260361 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2639 = { sizeof (ParticleSystemBeginUpdateAll_tFD271959A8F8BFC70FA679675E122238BFA18D9B)+ sizeof (RuntimeObject), sizeof(ParticleSystemBeginUpdateAll_tFD271959A8F8BFC70FA679675E122238BFA18D9B ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2640 = { sizeof (ScriptRunBehaviourLateUpdate_t35B5BFC31A89E3FB958ACAEC3B9289F2BC880946)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourLateUpdate_t35B5BFC31A89E3FB958ACAEC3B9289F2BC880946 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2641 = { sizeof (ConstraintManagerUpdate_t795681B4B54A73497628450F872FE5BB9D92EFE9)+ sizeof (RuntimeObject), sizeof(ConstraintManagerUpdate_t795681B4B54A73497628450F872FE5BB9D92EFE9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2642 = { sizeof (PostLateUpdate_t3E9A2536F5977685146D7C8C64033A750780F713)+ sizeof (RuntimeObject), sizeof(PostLateUpdate_t3E9A2536F5977685146D7C8C64033A750780F713 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2643 = { sizeof (PlayerSendFrameStarted_t2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548)+ sizeof (RuntimeObject), sizeof(PlayerSendFrameStarted_t2A5CD726FDED9A1CD59CA2BA8FB705A8C14D8548 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2644 = { sizeof (UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808)+ sizeof (RuntimeObject), sizeof(UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2645 = { sizeof (UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C)+ sizeof (RuntimeObject), sizeof(UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2646 = { sizeof (PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB)+ sizeof (RuntimeObject), sizeof(PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2647 = { sizeof (UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD)+ sizeof (RuntimeObject), sizeof(UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2648 = { sizeof (UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A)+ sizeof (RuntimeObject), sizeof(UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2649 = { sizeof (DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887)+ sizeof (RuntimeObject), sizeof(DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2650 = { sizeof (ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2651 = { sizeof (VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0)+ sizeof (RuntimeObject), sizeof(VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2652 = { sizeof (ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0)+ sizeof (RuntimeObject), sizeof(ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2653 = { sizeof (EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329)+ sizeof (RuntimeObject), sizeof(EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2654 = { sizeof (UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9)+ sizeof (RuntimeObject), sizeof(UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2655 = { sizeof (UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E)+ sizeof (RuntimeObject), sizeof(UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2656 = { sizeof (UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2)+ sizeof (RuntimeObject), sizeof(UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2657 = { sizeof (EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468)+ sizeof (RuntimeObject), sizeof(EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2658 = { sizeof (UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5)+ sizeof (RuntimeObject), sizeof(UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2659 = { sizeof (ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158)+ sizeof (RuntimeObject), sizeof(ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2660 = { sizeof (SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926)+ sizeof (RuntimeObject), sizeof(SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2661 = { sizeof (UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B)+ sizeof (RuntimeObject), sizeof(UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2662 = { sizeof (DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C)+ sizeof (RuntimeObject), sizeof(DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2663 = { sizeof (PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB)+ sizeof (RuntimeObject), sizeof(PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2664 = { sizeof (FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5)+ sizeof (RuntimeObject), sizeof(FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2665 = { sizeof (BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0)+ sizeof (RuntimeObject), sizeof(BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2666 = { sizeof (PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1)+ sizeof (RuntimeObject), sizeof(PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2667 = { sizeof (UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450)+ sizeof (RuntimeObject), sizeof(UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2668 = { sizeof (PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272)+ sizeof (RuntimeObject), sizeof(PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2669 = { sizeof (ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0)+ sizeof (RuntimeObject), sizeof(ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2670 = { sizeof (XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD)+ sizeof (RuntimeObject), sizeof(XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2671 = { sizeof (UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1)+ sizeof (RuntimeObject), sizeof(UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2672 = { sizeof (InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260)+ sizeof (RuntimeObject), sizeof(InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2673 = { sizeof (GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED)+ sizeof (RuntimeObject), sizeof(GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2674 = { sizeof (ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444)+ sizeof (RuntimeObject), sizeof(ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2675 = { sizeof (ResetInputAxis_t4B544F5072B205D69657274449C898238F863808)+ sizeof (RuntimeObject), sizeof(ResetInputAxis_t4B544F5072B205D69657274449C898238F863808 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2676 = { sizeof (ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A)+ sizeof (RuntimeObject), sizeof(ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2677 = { sizeof (ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF)+ sizeof (RuntimeObject), sizeof(ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2678 = { sizeof (MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9)+ sizeof (RuntimeObject), sizeof(MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2679 = { sizeof (ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E)+ sizeof (RuntimeObject), sizeof(ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2680 = { sizeof (ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8)+ sizeof (RuntimeObject), sizeof(ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2681 = { sizeof (PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936)+ sizeof (RuntimeObject), sizeof(PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2682 = { sizeof (PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54)+ sizeof (RuntimeObject), sizeof(PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2683 = { sizeof (PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8)+ sizeof (RuntimeObject), sizeof(PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2684 = { sizeof (TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8)+ sizeof (RuntimeObject), sizeof(TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2685 = { sizeof (PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2685[5] = 
{
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_updateDelegate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_updateFunction_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_loopConditionFunction_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_numSubSystems_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2686 = { sizeof (PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2686[5] = 
{
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_subSystemList_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_updateDelegate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_updateFunction_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_loopConditionFunction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2687 = { sizeof (UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2688 = { sizeof (PlayerPrefsException_tFC087CD527E55947EEB584B893B96977392396DC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2689 = { sizeof (PlayerPrefs_t6E16EDCF104A27E432EDE9AE648DFE7A0401C37C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2690 = { sizeof (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2691 = { sizeof (TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2691[1] = 
{
	TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2692 = { sizeof (SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2692[1] = 
{
	SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2693 = { sizeof (RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2693[2] = 
{
	RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98::get_offset_of_min_0(),
	RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2694 = { sizeof (TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2694[2] = 
{
	TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394::get_offset_of_minLines_0(),
	TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2695 = { sizeof (ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2695[6] = 
{
	ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77::get_offset_of_showAlpha_0(),
	ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77::get_offset_of_hdr_1(),
	ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77::get_offset_of_minBrightness_2(),
	ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77::get_offset_of_maxBrightness_3(),
	ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77::get_offset_of_minExposureValue_4(),
	ColorUsageAttribute_t42922412257F820E685FAC4C4E17A044E391DA77::get_offset_of_maxExposureValue_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2696 = { sizeof (PropertyNameUtils_t01310671910F3EA84F5FD7D29149378A4FD19D28), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2697 = { sizeof (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529)+ sizeof (RuntimeObject), sizeof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2697[1] = 
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2698 = { sizeof (Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2699 = { sizeof (RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D)+ sizeof (RuntimeObject), sizeof(RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D ), 0, 0 };
extern const int32_t g_FieldOffsetTable2699[2] = 
{
	RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
