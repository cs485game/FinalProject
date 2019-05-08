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

#include "il2cpp-class-internals.h"
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

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_tD811F5ECF3613ED95E238A615BCA1E8929F1909C;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E;
// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A;
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C;
// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE;
// UnityStandardAssets.Utility.AutoMoveAndRotate
struct AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27;
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA;

extern RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1AE5D18981F4D64FF0466137F3757CD313E06F73;
extern String_t* _stringLiteral5B1AB9BE33E7B4890414B1EEC742DB1011C2742B;
extern String_t* _stringLiteral7010B7A5DAB06AEB9D9E5ED2CE216E45C87CD1C5;
extern String_t* _stringLiteral739F90911BF55016B285AF40C8E2133B9414FA7E;
extern String_t* _stringLiteral7EC6A73D33790B93A894078AD971183DE03634E6;
extern String_t* _stringLiteralB72A5073C9A5F93C453E9869CD7BCF2180C2158E;
extern String_t* _stringLiteralDD43D999A9AC05602F64A4A92D19054DB5C1FFD6;
extern String_t* _stringLiteralF90BC1D4FE95360F212485F1385A12D3B1C29B74;
extern const uint32_t AutoMoveAndRotate_LateUpdate_mD1EF98C552F455C15D770321A6B43D1199B61F85_MetadataUsageId;
extern const uint32_t VignetteAndChromaticAberration_OnRenderImage_m058FA072700D220C0DB624A8FC76A29CD144CAC5_MetadataUsageId;



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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
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
#ifndef MATHF_TFBDE6467D269BFE410605C7D806FD9991D4A89CB_H
#define MATHF_TFBDE6467D269BFE410605C7D806FD9991D4A89CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB__padding[1];
	};

public:
};

struct Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_TFBDE6467D269BFE410605C7D806FD9991D4A89CB_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef RENDERTEXTUREFORMAT_T2AB1B77FBD247648292FBBE1182F12B5FC47AF85_H
#define RENDERTEXTUREFORMAT_T2AB1B77FBD247648292FBBE1182F12B5FC47AF85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T2AB1B77FBD247648292FBBE1182F12B5FC47AF85_H
#ifndef SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#define SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifndef TEXTUREWRAPMODE_T8AC763BD80806A9175C6AA8D33D6BABAD83E950F_H
#define TEXTUREWRAPMODE_T8AC763BD80806A9175C6AA8D33D6BABAD83E950F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t8AC763BD80806A9175C6AA8D33D6BABAD83E950F 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t8AC763BD80806A9175C6AA8D33D6BABAD83E950F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T8AC763BD80806A9175C6AA8D33D6BABAD83E950F_H
#ifndef TWEAKMODE34_T38533FDB0F8FA8DFFC3FBD721FF99442D3A7E5BC_H
#define TWEAKMODE34_T38533FDB0F8FA8DFFC3FBD721FF99442D3A7E5BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TweakMode34
struct  TweakMode34_t38533FDB0F8FA8DFFC3FBD721FF99442D3A7E5BC 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TweakMode34::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweakMode34_t38533FDB0F8FA8DFFC3FBD721FF99442D3A7E5BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEAKMODE34_T38533FDB0F8FA8DFFC3FBD721FF99442D3A7E5BC_H
#ifndef ABERRATIONMODE_TE2A69D3D6AE13C9985C904E7BCFB41E2F9E28432_H
#define ABERRATIONMODE_TE2A69D3D6AE13C9985C904E7BCFB41E2F9E28432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration_AberrationMode
struct  AberrationMode_tE2A69D3D6AE13C9985C904E7BCFB41E2F9E28432 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration_AberrationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AberrationMode_tE2A69D3D6AE13C9985C904E7BCFB41E2F9E28432, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABERRATIONMODE_TE2A69D3D6AE13C9985C904E7BCFB41E2F9E28432_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef SHADER_TE2731FF351B74AB4186897484FB01E000C1160CA_H
#define SHADER_TE2731FF351B74AB4186897484FB01E000C1160CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_TE2731FF351B74AB4186897484FB01E000C1160CA_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef VECTOR3ANDSPACE_T3E61556293DA41E619A7E7B653625FE6696A5FBA_H
#define VECTOR3ANDSPACE_T3E61556293DA41E619A7E7B653625FE6696A5FBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate_Vector3andSpace
struct  Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.AutoMoveAndRotate_Vector3andSpace::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// UnityEngine.Space UnityStandardAssets.Utility.AutoMoveAndRotate_Vector3andSpace::space
	int32_t ___space_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_space_1() { return static_cast<int32_t>(offsetof(Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA, ___space_1)); }
	inline int32_t get_space_1() const { return ___space_1; }
	inline int32_t* get_address_of_space_1() { return &___space_1; }
	inline void set_space_1(int32_t value)
	{
		___space_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3ANDSPACE_T3E61556293DA41E619A7E7B653625FE6696A5FBA_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef RENDERTEXTURE_TBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_H
#define RENDERTEXTURE_TBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_TBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef IMAGEEFFECTBASE_TF477B020C61C7E604B8D55EB5312EB6CDA020F57_H
#define IMAGEEFFECTBASE_TF477B020C61C7E604B8D55EB5312EB6CDA020F57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader_4;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_5;

public:
	inline static int32_t get_offset_of_shader_4() { return static_cast<int32_t>(offsetof(ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57, ___shader_4)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_shader_4() const { return ___shader_4; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_shader_4() { return &___shader_4; }
	inline void set_shader_4(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___shader_4 = value;
		Il2CppCodeGenWriteBarrier((&___shader_4), value);
	}

	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57, ___m_Material_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTBASE_TF477B020C61C7E604B8D55EB5312EB6CDA020F57_H
#ifndef POSTEFFECTSBASE_TCC43BD8E385DF43317DC6AFE25A14C83B5A0011E_H
#define POSTEFFECTSBASE_TCC43BD8E385DF43317DC6AFE25A14C83B5A0011E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct  PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_tD811F5ECF3613ED95E238A615BCA1E8929F1909C * ___createdMaterials_7;

public:
	inline static int32_t get_offset_of_supportHDRTextures_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E, ___supportHDRTextures_4)); }
	inline bool get_supportHDRTextures_4() const { return ___supportHDRTextures_4; }
	inline bool* get_address_of_supportHDRTextures_4() { return &___supportHDRTextures_4; }
	inline void set_supportHDRTextures_4(bool value)
	{
		___supportHDRTextures_4 = value;
	}

	inline static int32_t get_offset_of_supportDX11_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E, ___supportDX11_5)); }
	inline bool get_supportDX11_5() const { return ___supportDX11_5; }
	inline bool* get_address_of_supportDX11_5() { return &___supportDX11_5; }
	inline void set_supportDX11_5(bool value)
	{
		___supportDX11_5 = value;
	}

	inline static int32_t get_offset_of_isSupported_6() { return static_cast<int32_t>(offsetof(PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E, ___isSupported_6)); }
	inline bool get_isSupported_6() const { return ___isSupported_6; }
	inline bool* get_address_of_isSupported_6() { return &___isSupported_6; }
	inline void set_isSupported_6(bool value)
	{
		___isSupported_6 = value;
	}

	inline static int32_t get_offset_of_createdMaterials_7() { return static_cast<int32_t>(offsetof(PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E, ___createdMaterials_7)); }
	inline List_1_tD811F5ECF3613ED95E238A615BCA1E8929F1909C * get_createdMaterials_7() const { return ___createdMaterials_7; }
	inline List_1_tD811F5ECF3613ED95E238A615BCA1E8929F1909C ** get_address_of_createdMaterials_7() { return &___createdMaterials_7; }
	inline void set_createdMaterials_7(List_1_tD811F5ECF3613ED95E238A615BCA1E8929F1909C * value)
	{
		___createdMaterials_7 = value;
		Il2CppCodeGenWriteBarrier((&___createdMaterials_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTEFFECTSBASE_TCC43BD8E385DF43317DC6AFE25A14C83B5A0011E_H
#ifndef AUTOMOVEANDROTATE_T92043194FF41B06B9441FB187206098DF3848E27_H
#define AUTOMOVEANDROTATE_T92043194FF41B06B9441FB187206098DF3848E27_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate
struct  AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityStandardAssets.Utility.AutoMoveAndRotate_Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * ___moveUnitsPerSecond_4;
	// UnityStandardAssets.Utility.AutoMoveAndRotate_Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * ___rotateDegreesPerSecond_5;
	// System.Boolean UnityStandardAssets.Utility.AutoMoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_6;
	// System.Single UnityStandardAssets.Utility.AutoMoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_7;

public:
	inline static int32_t get_offset_of_moveUnitsPerSecond_4() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27, ___moveUnitsPerSecond_4)); }
	inline Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * get_moveUnitsPerSecond_4() const { return ___moveUnitsPerSecond_4; }
	inline Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA ** get_address_of_moveUnitsPerSecond_4() { return &___moveUnitsPerSecond_4; }
	inline void set_moveUnitsPerSecond_4(Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * value)
	{
		___moveUnitsPerSecond_4 = value;
		Il2CppCodeGenWriteBarrier((&___moveUnitsPerSecond_4), value);
	}

	inline static int32_t get_offset_of_rotateDegreesPerSecond_5() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27, ___rotateDegreesPerSecond_5)); }
	inline Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * get_rotateDegreesPerSecond_5() const { return ___rotateDegreesPerSecond_5; }
	inline Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA ** get_address_of_rotateDegreesPerSecond_5() { return &___rotateDegreesPerSecond_5; }
	inline void set_rotateDegreesPerSecond_5(Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * value)
	{
		___rotateDegreesPerSecond_5 = value;
		Il2CppCodeGenWriteBarrier((&___rotateDegreesPerSecond_5), value);
	}

	inline static int32_t get_offset_of_ignoreTimescale_6() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27, ___ignoreTimescale_6)); }
	inline bool get_ignoreTimescale_6() const { return ___ignoreTimescale_6; }
	inline bool* get_address_of_ignoreTimescale_6() { return &___ignoreTimescale_6; }
	inline void set_ignoreTimescale_6(bool value)
	{
		___ignoreTimescale_6 = value;
	}

	inline static int32_t get_offset_of_m_LastRealTime_7() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27, ___m_LastRealTime_7)); }
	inline float get_m_LastRealTime_7() const { return ___m_LastRealTime_7; }
	inline float* get_address_of_m_LastRealTime_7() { return &___m_LastRealTime_7; }
	inline void set_m_LastRealTime_7(float value)
	{
		___m_LastRealTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOMOVEANDROTATE_T92043194FF41B06B9441FB187206098DF3848E27_H
#ifndef TWIRL_T92DA11CF58F4084A07B272093957190F3AE3172A_H
#define TWIRL_T92DA11CF58F4084A07B272093957190F3AE3172A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Twirl
struct  Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A  : public ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center_8;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A, ___radius_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_radius_6() const { return ___radius_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_center_8() { return static_cast<int32_t>(offsetof(Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A, ___center_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_center_8() const { return ___center_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_center_8() { return &___center_8; }
	inline void set_center_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___center_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWIRL_T92DA11CF58F4084A07B272093957190F3AE3172A_H
#ifndef VIGNETTEANDCHROMATICABERRATION_T8E4AAB9271EE939BF5B3895A0687A48A8207596C_H
#define VIGNETTEANDCHROMATICABERRATION_T8E4AAB9271EE939BF5B3895A0687A48A8207596C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C  : public PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration_AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_13;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_14;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___vignetteShader_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___separableBlurShader_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___chromAberrationShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_VignetteMaterial_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_SeparableBlurMaterial_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_ChromAberrationMaterial_21;

public:
	inline static int32_t get_offset_of_mode_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___mode_8)); }
	inline int32_t get_mode_8() const { return ___mode_8; }
	inline int32_t* get_address_of_mode_8() { return &___mode_8; }
	inline void set_mode_8(int32_t value)
	{
		___mode_8 = value;
	}

	inline static int32_t get_offset_of_intensity_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___intensity_9)); }
	inline float get_intensity_9() const { return ___intensity_9; }
	inline float* get_address_of_intensity_9() { return &___intensity_9; }
	inline void set_intensity_9(float value)
	{
		___intensity_9 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___chromaticAberration_10)); }
	inline float get_chromaticAberration_10() const { return ___chromaticAberration_10; }
	inline float* get_address_of_chromaticAberration_10() { return &___chromaticAberration_10; }
	inline void set_chromaticAberration_10(float value)
	{
		___chromaticAberration_10 = value;
	}

	inline static int32_t get_offset_of_axialAberration_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___axialAberration_11)); }
	inline float get_axialAberration_11() const { return ___axialAberration_11; }
	inline float* get_address_of_axialAberration_11() { return &___axialAberration_11; }
	inline void set_axialAberration_11(float value)
	{
		___axialAberration_11 = value;
	}

	inline static int32_t get_offset_of_blur_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___blur_12)); }
	inline float get_blur_12() const { return ___blur_12; }
	inline float* get_address_of_blur_12() { return &___blur_12; }
	inline void set_blur_12(float value)
	{
		___blur_12 = value;
	}

	inline static int32_t get_offset_of_blurSpread_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___blurSpread_13)); }
	inline float get_blurSpread_13() const { return ___blurSpread_13; }
	inline float* get_address_of_blurSpread_13() { return &___blurSpread_13; }
	inline void set_blurSpread_13(float value)
	{
		___blurSpread_13 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___luminanceDependency_14)); }
	inline float get_luminanceDependency_14() const { return ___luminanceDependency_14; }
	inline float* get_address_of_luminanceDependency_14() { return &___luminanceDependency_14; }
	inline void set_luminanceDependency_14(float value)
	{
		___luminanceDependency_14 = value;
	}

	inline static int32_t get_offset_of_blurDistance_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___blurDistance_15)); }
	inline float get_blurDistance_15() const { return ___blurDistance_15; }
	inline float* get_address_of_blurDistance_15() { return &___blurDistance_15; }
	inline void set_blurDistance_15(float value)
	{
		___blurDistance_15 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___vignetteShader_16)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_vignetteShader_16() const { return ___vignetteShader_16; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_vignetteShader_16() { return &___vignetteShader_16; }
	inline void set_vignetteShader_16(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___vignetteShader_16 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteShader_16), value);
	}

	inline static int32_t get_offset_of_separableBlurShader_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___separableBlurShader_17)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_separableBlurShader_17() const { return ___separableBlurShader_17; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_separableBlurShader_17() { return &___separableBlurShader_17; }
	inline void set_separableBlurShader_17(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___separableBlurShader_17 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_17), value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___chromAberrationShader_18)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_chromAberrationShader_18() const { return ___chromAberrationShader_18; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_chromAberrationShader_18() { return &___chromAberrationShader_18; }
	inline void set_chromAberrationShader_18(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___chromAberrationShader_18 = value;
		Il2CppCodeGenWriteBarrier((&___chromAberrationShader_18), value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_19() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___m_VignetteMaterial_19)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_VignetteMaterial_19() const { return ___m_VignetteMaterial_19; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_VignetteMaterial_19() { return &___m_VignetteMaterial_19; }
	inline void set_m_VignetteMaterial_19(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_VignetteMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_VignetteMaterial_19), value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_20() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___m_SeparableBlurMaterial_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_SeparableBlurMaterial_20() const { return ___m_SeparableBlurMaterial_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_SeparableBlurMaterial_20() { return &___m_SeparableBlurMaterial_20; }
	inline void set_m_SeparableBlurMaterial_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_SeparableBlurMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_SeparableBlurMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_21() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C, ___m_ChromAberrationMaterial_21)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_ChromAberrationMaterial_21() const { return ___m_ChromAberrationMaterial_21; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_ChromAberrationMaterial_21() { return &___m_ChromAberrationMaterial_21; }
	inline void set_m_ChromAberrationMaterial_21(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_ChromAberrationMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChromAberrationMaterial_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEANDCHROMATICABERRATION_T8E4AAB9271EE939BF5B3895A0687A48A8207596C_H
#ifndef VORTEX_T0C6F83AAEBA416791253929CDCC8AD898AC0F2BE_H
#define VORTEX_T0C6F83AAEBA416791253929CDCC8AD898AC0F2BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE  : public ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center_8;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE, ___radius_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_radius_6() const { return ___radius_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_center_8() { return static_cast<int32_t>(offsetof(Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE, ___center_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_center_8() const { return ___center_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_center_8() { return &___center_8; }
	inline void set_center_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___center_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VORTEX_T0C6F83AAEBA416791253929CDCC8AD898AC0F2BE_H



// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ImageEffectBase_get_material_mBBECA2FA70056036BB0A8C8EE12C005B5F540F32 (ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_mEAD2A6D8B211C9B7EBE054F227AC22FA525AE2DF (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___source1, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___destination2, float ___angle3, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center4, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius5, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_m4A9D6AD3B56675C66BDFD7814F74661E8B567FEE (ImageEffectBase_tF477B020C61C7E604B8D55EB5312EB6CDA020F57 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mB308BE6390C0474C92E742A561F90423C1502C04 (PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E * __this, bool ___needDepth0, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * PostEffectsBase_CheckShaderAndCreateMaterial_m1515D02A58527017FACB2B6AC601B5E67B65C865 (PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___s0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m2Create1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C" IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_mEFEF901F4F2DC5EDBC11340F930760EF8B10645C (PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * p1, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_mC500BCC10B2A6D6808645B505DB510056516D1FF (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8 (int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m9614A3F7FBE034123F456D0294946BDE9E4F78D8 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * p1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_mD26A16F3EFE84F10258BD8504DF1EA2B7D84F284 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * p1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m3CB789809FDA1B5598EC3C928B173C62FC152656 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_m440C9B609EF88230A2EB266FD3E6C624431E1368 (PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Twirl_OnRenderImage_mBC71C83543FB82E48C76A7925192F2A5076F44DB (Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___destination1, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ImageEffectBase_get_material_mBBECA2FA70056036BB0A8C8EE12C005B5F540F32(__this, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_1 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_2 = ___destination1;
		float L_3 = __this->get_angle_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = __this->get_center_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = __this->get_radius_6();
		ImageEffects_RenderDistortion_mEAD2A6D8B211C9B7EBE054F227AC22FA525AE2DF(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Twirl__ctor_m276BA32AEDE57F4E388B2DC82E8BE572BC2C0329 (Twirl_t92DA11CF58F4084A07B272093957190F3AE3172A * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.3f), (0.3f), /*hidden argument*/NULL);
		__this->set_radius_6(L_0);
		__this->set_angle_7((50.0f));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_8(L_1);
		ImageEffectBase__ctor_m4A9D6AD3B56675C66BDFD7814F74661E8B567FEE(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
extern "C" IL2CPP_METHOD_ATTR bool VignetteAndChromaticAberration_CheckResources_m8FD9076266E9E792ADBE50A35604F28F88687E69 (VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C * __this, const RuntimeMethod* method)
{
	{
		PostEffectsBase_CheckSupport_mB308BE6390C0474C92E742A561F90423C1502C04(__this, (bool)0, /*hidden argument*/NULL);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_0 = __this->get_vignetteShader_16();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = __this->get_m_VignetteMaterial_19();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m1515D02A58527017FACB2B6AC601B5E67B65C865(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_VignetteMaterial_19(L_2);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_3 = __this->get_separableBlurShader_17();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_m_SeparableBlurMaterial_20();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m1515D02A58527017FACB2B6AC601B5E67B65C865(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_SeparableBlurMaterial_20(L_5);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_6 = __this->get_chromAberrationShader_18();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get_m_ChromAberrationMaterial_21();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m1515D02A58527017FACB2B6AC601B5E67B65C865(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_ChromAberrationMaterial_21(L_8);
		bool L_9 = ((PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E *)__this)->get_isSupported_6();
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_mEFEF901F4F2DC5EDBC11340F930760EF8B10645C(__this, /*hidden argument*/NULL);
	}

IL_005e:
	{
		bool L_10 = ((PostEffectsBase_tCC43BD8E385DF43317DC6AFE25A14C83B5A0011E *)__this)->get_isSupported_6();
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration_OnRenderImage_m058FA072700D220C0DB624A8FC76A29CD144CAC5 (VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteAndChromaticAberration_OnRenderImage_m058FA072700D220C0DB624A8FC76A29CD144CAC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_4 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_7 = NULL;
	int32_t G_B5_0 = 0;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B17_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B19_0 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B19_1 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B19_2 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B18_0 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B18_1 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B20_1 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B20_2 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B20_3 = NULL;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_1 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_3 = ___source0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_5 = ___source0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		float L_7 = __this->get_blur_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		float L_9 = __this->get_intensity_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_11)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_12)))))));
		V_4 = (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)NULL;
		V_5 = (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)NULL;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01e9;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_16 = ___source0;
		int32_t L_17 = RenderTexture_get_format_mC500BCC10B2A6D6808645B505DB510056516D1FF(L_16, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_18 = RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8(L_14, L_15, 0, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = __this->get_blur_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_23 = ___source0;
		int32_t L_24 = RenderTexture_get_format_mC500BCC10B2A6D6808645B505DB510056516D1FF(L_23, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_25 = RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8(((int32_t)((int32_t)L_21/(int32_t)2)), ((int32_t)((int32_t)L_22/(int32_t)2)), 0, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_26 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_27 = V_5;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = __this->get_m_ChromAberrationMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_m9614A3F7FBE034123F456D0294946BDE9E4F78D8(L_26, L_27, L_28, 0, /*hidden argument*/NULL);
		V_6 = 0;
		goto IL_0170;
	}

IL_00b4:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_29 = __this->get_m_SeparableBlurMaterial_20();
		float L_30 = __this->get_blurSpread_13();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_31), (0.0f), ((float)il2cpp_codegen_multiply((float)L_30, (float)(0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_29, _stringLiteral739F90911BF55016B285AF40C8E2133B9414FA7E, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_34 = ___source0;
		int32_t L_35 = RenderTexture_get_format_mC500BCC10B2A6D6808645B505DB510056516D1FF(L_34, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_36 = RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8(((int32_t)((int32_t)L_32/(int32_t)2)), ((int32_t)((int32_t)L_33/(int32_t)2)), 0, L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_37 = V_5;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_38 = V_7;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_39 = __this->get_m_SeparableBlurMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_mD26A16F3EFE84F10258BD8504DF1EA2B7D84F284(L_37, L_38, L_39, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_40 = V_5;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_40, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_41 = __this->get_m_SeparableBlurMaterial_20();
		float L_42 = __this->get_blurSpread_13();
		float L_43 = V_3;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_44), ((float)((float)((float)il2cpp_codegen_multiply((float)L_42, (float)(0.001953125f)))/(float)L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_41, _stringLiteral739F90911BF55016B285AF40C8E2133B9414FA7E, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_47 = ___source0;
		int32_t L_48 = RenderTexture_get_format_mC500BCC10B2A6D6808645B505DB510056516D1FF(L_47, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_49 = RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8(((int32_t)((int32_t)L_45/(int32_t)2)), ((int32_t)((int32_t)L_46/(int32_t)2)), 0, L_48, /*hidden argument*/NULL);
		V_5 = L_49;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_50 = V_7;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_51 = V_5;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_52 = __this->get_m_SeparableBlurMaterial_20();
		Graphics_Blit_mD26A16F3EFE84F10258BD8504DF1EA2B7D84F284(L_50, L_51, L_52, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_53 = V_7;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_53, /*hidden argument*/NULL);
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0170:
	{
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00b4;
		}
	}

IL_0178:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_56 = __this->get_m_VignetteMaterial_19();
		float L_57 = __this->get_intensity_9();
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_56, _stringLiteral7EC6A73D33790B93A894078AD971183DE03634E6, ((float)il2cpp_codegen_subtract((float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_57)))), (float)(1.0f))), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_58 = __this->get_m_VignetteMaterial_19();
		float L_59 = __this->get_blur_12();
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_58, _stringLiteral5B1AB9BE33E7B4890414B1EEC742DB1011C2742B, ((float)il2cpp_codegen_subtract((float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_59)))), (float)(1.0f))), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_60 = __this->get_m_VignetteMaterial_19();
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_61 = V_5;
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_60, _stringLiteralB72A5073C9A5F93C453E9869CD7BCF2180C2158E, L_61, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_62 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_63 = V_4;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_64 = __this->get_m_VignetteMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_m9614A3F7FBE034123F456D0294946BDE9E4F78D8(L_62, L_63, L_64, 0, /*hidden argument*/NULL);
	}

IL_01e9:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_65 = __this->get_m_ChromAberrationMaterial_21();
		float L_66 = __this->get_chromaticAberration_10();
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_65, _stringLiteral1AE5D18981F4D64FF0466137F3757CD313E06F73, L_66, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_67 = __this->get_m_ChromAberrationMaterial_21();
		float L_68 = __this->get_axialAberration_11();
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_67, _stringLiteral7010B7A5DAB06AEB9D9E5ED2CE216E45C87CD1C5, L_68, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_69 = __this->get_m_ChromAberrationMaterial_21();
		float L_70 = __this->get_blurDistance_15();
		float L_71 = __this->get_blurDistance_15();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_72;
		memset(&L_72, 0, sizeof(L_72));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_72), ((-L_70)), L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_73 = Vector4_op_Implicit_m3CB789809FDA1B5598EC3C928B173C62FC152656(L_72, /*hidden argument*/NULL);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_69, _stringLiteralF90BC1D4FE95360F212485F1385A12D3B1C29B74, L_73, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_74 = __this->get_m_ChromAberrationMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_75 = ((Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_76 = __this->get_luminanceDependency_14();
		float L_77 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_75, L_76, /*hidden argument*/NULL);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_74, _stringLiteralDD43D999A9AC05602F64A4A92D19054DB5C1FFD6, ((float)((float)(1.0f)/(float)L_77)), /*hidden argument*/NULL);
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_026f;
		}
	}
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_79 = V_4;
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_79, 1, /*hidden argument*/NULL);
		goto IL_0276;
	}

IL_026f:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_80 = ___source0;
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_80, 1, /*hidden argument*/NULL);
	}

IL_0276:
	{
		bool L_81 = V_2;
		if (L_81)
		{
			goto IL_027c;
		}
	}
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_82 = ___source0;
		G_B17_0 = L_82;
		goto IL_027e;
	}

IL_027c:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_83 = V_4;
		G_B17_0 = L_83;
	}

IL_027e:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_84 = ___destination1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_85 = __this->get_m_ChromAberrationMaterial_21();
		int32_t L_86 = __this->get_mode_8();
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((((int32_t)L_86) == ((int32_t)1)))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_0291;
		}
	}
	{
		G_B20_0 = 1;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_0292;
	}

IL_0291:
	{
		G_B20_0 = 2;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_0292:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_m9614A3F7FBE034123F456D0294946BDE9E4F78D8(G_B20_3, G_B20_2, G_B20_1, G_B20_0, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_87 = V_4;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_87, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_88 = V_5;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_88, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration__ctor_m37B02A6651BAEBC09BCDC51A7A81953A3CE13BD6 (VignetteAndChromaticAberration_t8E4AAB9271EE939BF5B3895A0687A48A8207596C * __this, const RuntimeMethod* method)
{
	{
		__this->set_intensity_9((0.036f));
		__this->set_chromaticAberration_10((0.2f));
		__this->set_axialAberration_11((0.5f));
		__this->set_blurSpread_13((0.75f));
		__this->set_luminanceDependency_14((0.25f));
		__this->set_blurDistance_15((2.5f));
		PostEffectsBase__ctor_m440C9B609EF88230A2EB266FD3E6C624431E1368(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Vortex_OnRenderImage_m6FE1458882E5F47371016A339143B443CA44A61F (Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___destination1, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ImageEffectBase_get_material_mBBECA2FA70056036BB0A8C8EE12C005B5F540F32(__this, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_1 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_2 = ___destination1;
		float L_3 = __this->get_angle_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = __this->get_center_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = __this->get_radius_6();
		ImageEffects_RenderDistortion_mEAD2A6D8B211C9B7EBE054F227AC22FA525AE2DF(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vortex__ctor_m9E271B34D1441B5E030C40E972DE1DB16E9ED673 (Vortex_t0C6F83AAEBA416791253929CDCC8AD898AC0F2BE * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.4f), (0.4f), /*hidden argument*/NULL);
		__this->set_radius_6(L_0);
		__this->set_angle_7((50.0f));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_8(L_1);
		ImageEffectBase__ctor_m4A9D6AD3B56675C66BDFD7814F74661E8B567FEE(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
extern "C" IL2CPP_METHOD_ATTR void AutoMoveAndRotate_Start_mA63983B3FD17846EA611239E10D63121BAB0B027 (AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_m_LastRealTime_7(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void AutoMoveAndRotate_LateUpdate_mD1EF98C552F455C15D770321A6B43D1199B61F85 (AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoMoveAndRotate_LateUpdate_mD1EF98C552F455C15D770321A6B43D1199B61F85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_ignoreTimescale_6();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_m_LastRealTime_7();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_m_LastRealTime_7(L_4);
	}

IL_0026:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * L_6 = __this->get_moveUnitsPerSecond_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6->get_value_0();
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_7, L_8, /*hidden argument*/NULL);
		Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * L_10 = __this->get_moveUnitsPerSecond_4();
		int32_t L_11 = L_10->get_space_1();
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(L_5, L_9, L_11, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * L_13 = __this->get_rotateDegreesPerSecond_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = L_13->get_value_0();
		float L_15 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, L_15, /*hidden argument*/NULL);
		Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * L_17 = __this->get_moveUnitsPerSecond_4();
		int32_t L_18 = L_17->get_space_1();
		Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB(L_12, L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AutoMoveAndRotate__ctor_m03F651E702649A8253D472D3EC293E2DDD395FB9 (AutoMoveAndRotate_t92043194FF41B06B9441FB187206098DF3848E27 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate_Vector3andSpace::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vector3andSpace__ctor_m1E9719ED43F3F145421917B724D5BC5A6E218590 (Vector3andSpace_t3E61556293DA41E619A7E7B653625FE6696A5FBA * __this, const RuntimeMethod* method)
{
	{
		__this->set_space_1(1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
