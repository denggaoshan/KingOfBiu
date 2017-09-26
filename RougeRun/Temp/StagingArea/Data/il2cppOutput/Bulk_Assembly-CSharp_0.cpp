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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// bulletController
struct bulletController_t1893453838;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1716718187;
// UnityEngine.Component
struct Component_t2331564085;
// UnityEngine.GameObject
struct GameObject_t3517799623;
// UnityEngine.Object
struct Object_t477745608;
// CameraController
struct CameraController_t375689052;
// UnityEngine.Transform
struct Transform_t2602648905;
// KeepBalance
struct KeepBalance_t2516391038;
// MonsterController
struct MonsterController_t2458232747;
// PlayerController
struct PlayerController_t2404229581;
// UnityEngine.Animator
struct Animator_t213641401;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3573403892;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3899775678;
// System.Void
struct Void_t2742746499;

extern RuntimeClass* Object_t477745608_il2cpp_TypeInfo_var;
extern const uint32_t bulletController_Update_m1246297028_MetadataUsageId;
extern RuntimeClass* Vector3_t1456905862_il2cpp_TypeInfo_var;
extern const uint32_t CameraController_Start_m3914813888_MetadataUsageId;
extern const uint32_t CameraController_Update_m3621762239_MetadataUsageId;
extern const uint32_t MonsterController_Update_m3456425624_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t213641401_m2768772963_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t3573403892_m3494817735_RuntimeMethod_var;
extern const uint32_t PlayerController_Start_m2760541345_MetadataUsageId;
extern RuntimeClass* Quaternion_t3179779873_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t3517799623_m1861364533_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_t3573403892_m2826798899_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral2863188957;
extern const uint32_t PlayerController_Attack_m343553813_MetadataUsageId;
extern RuntimeClass* Input_t1553211949_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral516587324;
extern Il2CppCodeGenString* _stringLiteral568383665;
extern Il2CppCodeGenString* _stringLiteral309121747;
extern Il2CppCodeGenString* _stringLiteral1264800775;
extern const uint32_t PlayerController_Update_m3584484142_MetadataUsageId;



#ifndef U3CMODULEU3E_T76921240_H
#define U3CMODULEU3E_T76921240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t76921240 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T76921240_H
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
#ifndef VALUETYPE_T3892330867_H
#define VALUETYPE_T3892330867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3892330867  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3892330867_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3892330867_marshaled_com
{
};
#endif // VALUETYPE_T3892330867_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3899775678* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3899775678* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3899775678** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3899775678* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VECTOR2_T232664672_H
#define VECTOR2_T232664672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t232664672 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t232664672, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t232664672, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t232664672_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t232664672  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t232664672  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t232664672  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t232664672  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t232664672  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t232664672  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t232664672  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t232664672  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___zeroVector_2)); }
	inline Vector2_t232664672  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t232664672 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t232664672  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___oneVector_3)); }
	inline Vector2_t232664672  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t232664672 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t232664672  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___upVector_4)); }
	inline Vector2_t232664672  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t232664672 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t232664672  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___downVector_5)); }
	inline Vector2_t232664672  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t232664672 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t232664672  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___leftVector_6)); }
	inline Vector2_t232664672  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t232664672 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t232664672  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___rightVector_7)); }
	inline Vector2_t232664672  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t232664672 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t232664672  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t232664672  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t232664672 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t232664672  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t232664672_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t232664672  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t232664672 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t232664672  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T232664672_H
#ifndef QUATERNION_T3179779873_H
#define QUATERNION_T3179779873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3179779873 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3179779873, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3179779873, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3179779873, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3179779873, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3179779873_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3179779873  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3179779873_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3179779873  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3179779873 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3179779873  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3179779873_H
#ifndef SINGLE_T1186584383_H
#define SINGLE_T1186584383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1186584383 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1186584383, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1186584383_H
#ifndef VECTOR3_T1456905862_H
#define VECTOR3_T1456905862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1456905862 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1456905862, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1456905862, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1456905862, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1456905862_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1456905862  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1456905862  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1456905862  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1456905862  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1456905862  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1456905862  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1456905862  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1456905862  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1456905862  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1456905862  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1456905862  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1456905862 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1456905862  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___oneVector_5)); }
	inline Vector3_t1456905862  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1456905862 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1456905862  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___upVector_6)); }
	inline Vector3_t1456905862  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1456905862 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1456905862  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___downVector_7)); }
	inline Vector3_t1456905862  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1456905862 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1456905862  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___leftVector_8)); }
	inline Vector3_t1456905862  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1456905862 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1456905862  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___rightVector_9)); }
	inline Vector3_t1456905862  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1456905862 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1456905862  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1456905862  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1456905862 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1456905862  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___backVector_11)); }
	inline Vector3_t1456905862  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1456905862 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1456905862  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1456905862  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1456905862 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1456905862  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1456905862_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1456905862  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1456905862 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1456905862  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1456905862_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T3787774868_H
#define INT32_T3787774868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3787774868 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3787774868, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3787774868_H
#ifndef VOID_T2742746499_H
#define VOID_T2742746499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2742746499 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2742746499_H
#ifndef BOOLEAN_T440550991_H
#define BOOLEAN_T440550991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t440550991 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t440550991, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t440550991_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t440550991_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t440550991_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T440550991_H
#ifndef OBJECT_T477745608_H
#define OBJECT_T477745608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t477745608  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t477745608, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t477745608_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t477745608_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t477745608_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t477745608_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T477745608_H
#ifndef COMPONENT_T2331564085_H
#define COMPONENT_T2331564085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2331564085  : public Object_t477745608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2331564085_H
#ifndef GAMEOBJECT_T3517799623_H
#define GAMEOBJECT_T3517799623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3517799623  : public Object_t477745608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3517799623_H
#ifndef BEHAVIOUR_T3141830959_H
#define BEHAVIOUR_T3141830959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3141830959  : public Component_t2331564085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3141830959_H
#ifndef RIGIDBODY2D_T3573403892_H
#define RIGIDBODY2D_T3573403892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t3573403892  : public Component_t2331564085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T3573403892_H
#ifndef TRANSFORM_T2602648905_H
#define TRANSFORM_T2602648905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t2602648905  : public Component_t2331564085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T2602648905_H
#ifndef ANIMATOR_T213641401_H
#define ANIMATOR_T213641401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t213641401  : public Behaviour_t3141830959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T213641401_H
#ifndef MONOBEHAVIOUR_T1716718187_H
#define MONOBEHAVIOUR_T1716718187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1716718187  : public Behaviour_t3141830959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1716718187_H
#ifndef CAMERACONTROLLER_T375689052_H
#define CAMERACONTROLLER_T375689052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t375689052  : public MonoBehaviour_t1716718187
{
public:
	// UnityEngine.GameObject CameraController::player
	GameObject_t3517799623 * ___player_2;
	// UnityEngine.GameObject CameraController::background
	GameObject_t3517799623 * ___background_3;
	// System.Single CameraController::watch
	float ___watch_4;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t1456905862  ___offset_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraController_t375689052, ___player_2)); }
	inline GameObject_t3517799623 * get_player_2() const { return ___player_2; }
	inline GameObject_t3517799623 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3517799623 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(CameraController_t375689052, ___background_3)); }
	inline GameObject_t3517799623 * get_background_3() const { return ___background_3; }
	inline GameObject_t3517799623 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(GameObject_t3517799623 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier((&___background_3), value);
	}

	inline static int32_t get_offset_of_watch_4() { return static_cast<int32_t>(offsetof(CameraController_t375689052, ___watch_4)); }
	inline float get_watch_4() const { return ___watch_4; }
	inline float* get_address_of_watch_4() { return &___watch_4; }
	inline void set_watch_4(float value)
	{
		___watch_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(CameraController_t375689052, ___offset_5)); }
	inline Vector3_t1456905862  get_offset_5() const { return ___offset_5; }
	inline Vector3_t1456905862 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t1456905862  value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROLLER_T375689052_H
#ifndef KEEPBALANCE_T2516391038_H
#define KEEPBALANCE_T2516391038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeepBalance
struct  KeepBalance_t2516391038  : public MonoBehaviour_t1716718187
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEEPBALANCE_T2516391038_H
#ifndef MONSTERCONTROLLER_T2458232747_H
#define MONSTERCONTROLLER_T2458232747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonsterController
struct  MonsterController_t2458232747  : public MonoBehaviour_t1716718187
{
public:
	// System.Single MonsterController::speed
	float ___speed_2;
	// UnityEngine.GameObject MonsterController::player
	GameObject_t3517799623 * ___player_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(MonsterController_t2458232747, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(MonsterController_t2458232747, ___player_3)); }
	inline GameObject_t3517799623 * get_player_3() const { return ___player_3; }
	inline GameObject_t3517799623 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t3517799623 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier((&___player_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTERCONTROLLER_T2458232747_H
#ifndef PLAYERCONTROLLER_T2404229581_H
#define PLAYERCONTROLLER_T2404229581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2404229581  : public MonoBehaviour_t1716718187
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_3;
	// UnityEngine.GameObject PlayerController::bullet
	GameObject_t3517799623 * ___bullet_4;
	// UnityEngine.Animator PlayerController::animator
	Animator_t213641401 * ___animator_5;
	// System.Int32 PlayerController::faceDirection
	int32_t ___faceDirection_6;
	// System.Boolean PlayerController::ifJump
	bool ___ifJump_7;
	// System.Int32 PlayerController::jumpFrameRemaining
	int32_t ___jumpFrameRemaining_8;
	// UnityEngine.Rigidbody2D PlayerController::rb2d
	Rigidbody2D_t3573403892 * ___rb2d_9;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_jumpForce_3() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___jumpForce_3)); }
	inline float get_jumpForce_3() const { return ___jumpForce_3; }
	inline float* get_address_of_jumpForce_3() { return &___jumpForce_3; }
	inline void set_jumpForce_3(float value)
	{
		___jumpForce_3 = value;
	}

	inline static int32_t get_offset_of_bullet_4() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___bullet_4)); }
	inline GameObject_t3517799623 * get_bullet_4() const { return ___bullet_4; }
	inline GameObject_t3517799623 ** get_address_of_bullet_4() { return &___bullet_4; }
	inline void set_bullet_4(GameObject_t3517799623 * value)
	{
		___bullet_4 = value;
		Il2CppCodeGenWriteBarrier((&___bullet_4), value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___animator_5)); }
	inline Animator_t213641401 * get_animator_5() const { return ___animator_5; }
	inline Animator_t213641401 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t213641401 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier((&___animator_5), value);
	}

	inline static int32_t get_offset_of_faceDirection_6() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___faceDirection_6)); }
	inline int32_t get_faceDirection_6() const { return ___faceDirection_6; }
	inline int32_t* get_address_of_faceDirection_6() { return &___faceDirection_6; }
	inline void set_faceDirection_6(int32_t value)
	{
		___faceDirection_6 = value;
	}

	inline static int32_t get_offset_of_ifJump_7() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___ifJump_7)); }
	inline bool get_ifJump_7() const { return ___ifJump_7; }
	inline bool* get_address_of_ifJump_7() { return &___ifJump_7; }
	inline void set_ifJump_7(bool value)
	{
		___ifJump_7 = value;
	}

	inline static int32_t get_offset_of_jumpFrameRemaining_8() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___jumpFrameRemaining_8)); }
	inline int32_t get_jumpFrameRemaining_8() const { return ___jumpFrameRemaining_8; }
	inline int32_t* get_address_of_jumpFrameRemaining_8() { return &___jumpFrameRemaining_8; }
	inline void set_jumpFrameRemaining_8(int32_t value)
	{
		___jumpFrameRemaining_8 = value;
	}

	inline static int32_t get_offset_of_rb2d_9() { return static_cast<int32_t>(offsetof(PlayerController_t2404229581, ___rb2d_9)); }
	inline Rigidbody2D_t3573403892 * get_rb2d_9() const { return ___rb2d_9; }
	inline Rigidbody2D_t3573403892 ** get_address_of_rb2d_9() { return &___rb2d_9; }
	inline void set_rb2d_9(Rigidbody2D_t3573403892 * value)
	{
		___rb2d_9 = value;
		Il2CppCodeGenWriteBarrier((&___rb2d_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2404229581_H
#ifndef BULLETCONTROLLER_T1893453838_H
#define BULLETCONTROLLER_T1893453838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bulletController
struct  bulletController_t1893453838  : public MonoBehaviour_t1716718187
{
public:
	// System.Int32 bulletController::remainFrames
	int32_t ___remainFrames_2;

public:
	inline static int32_t get_offset_of_remainFrames_2() { return static_cast<int32_t>(offsetof(bulletController_t1893453838, ___remainFrames_2)); }
	inline int32_t get_remainFrames_2() const { return ___remainFrames_2; }
	inline int32_t* get_address_of_remainFrames_2() { return &___remainFrames_2; }
	inline void set_remainFrames_2(int32_t value)
	{
		___remainFrames_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLETCONTROLLER_T1893453838_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m3768251800_gshared (Component_t2331564085 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1578827541_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t1456905862  p1, Quaternion_t3179779873  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2475446016_gshared (GameObject_t3517799623 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2021124112 (MonoBehaviour_t1716718187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t3517799623 * Component_get_gameObject_m1397126588 (Component_t2331564085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m287268960 (GameObject_t3517799623 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m645449098 (RuntimeObject * __this /* static, unused */, Object_t477745608 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t2602648905 * Component_get_transform_m508705964 (Component_t2331564085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t1456905862  Transform_get_position_m3461250874 (Transform_t2602648905 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t2602648905 * GameObject_get_transform_m3824223737 (GameObject_t3517799623 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t1456905862  Vector3_op_Subtraction_m453774637 (RuntimeObject * __this /* static, unused */, Vector3_t1456905862  p0, Vector3_t1456905862  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t1456905862  Vector3_op_Addition_m571617041 (RuntimeObject * __this /* static, unused */, Vector3_t1456905862  p0, Vector3_t1456905862  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m1293365489 (Transform_t2602648905 * __this, Vector3_t1456905862  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1260107276 (Vector3_t1456905862 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m3343728864 (Quaternion_t3179779873 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m384626452 (Transform_t2602648905 * __this, Quaternion_t3179779873  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m1143016922 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3732412540 (Transform_t2602648905 * __this, Vector3_t1456905862  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t213641401_m2768772963(__this, method) ((  Animator_t213641401 * (*) (Component_t2331564085 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3768251800_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t3573403892_m3494817735(__this, method) ((  Rigidbody2D_t3573403892 * (*) (Component_t2331564085 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3768251800_gshared)(__this, method)
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m2639684195 (Animator_t213641401 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t3179779873  Quaternion_get_identity_m3638903760 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t3517799623_m1861364533(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t3517799623 * (*) (RuntimeObject * /* static, unused */, GameObject_t3517799623 *, Vector3_t1456905862 , Quaternion_t3179779873 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1578827541_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t3573403892_m2826798899(__this, method) ((  Rigidbody2D_t3573403892 * (*) (GameObject_t3517799623 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2475446016_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m2673939173 (Vector2_t232664672 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m3905224274 (Rigidbody2D_t3573403892 * __this, Vector2_t232664672  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m3780344495 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
extern "C"  bool Input_GetKeyDown_m3259421292 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Attack()
extern "C"  void PlayerController_Attack_m343553813 (PlayerController_t2404229581 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bulletController::.ctor()
extern "C"  void bulletController__ctor_m1736236056 (bulletController_t1893453838 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2021124112(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void bulletController::Start()
extern "C"  void bulletController_Start_m4097002550 (bulletController_t1893453838 * __this, const RuntimeMethod* method)
{
	{
		__this->set_remainFrames_2(((int32_t)80));
		return;
	}
}
// System.Void bulletController::Update()
extern "C"  void bulletController_Update_m1246297028 (bulletController_t1893453838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (bulletController_Update_m1246297028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_remainFrames_2();
		__this->set_remainFrames_2(((int32_t)((int32_t)L_0-(int32_t)1)));
		int32_t L_1 = __this->get_remainFrames_2();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		GameObject_t3517799623 * L_2 = Component_get_gameObject_m1397126588(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m287268960(L_2, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t477745608_il2cpp_TypeInfo_var);
		Object_Destroy_m645449098(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m4189659786 (CameraController_t375689052 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2021124112(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m3914813888 (CameraController_t375689052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Start_m3914813888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t2602648905 * L_0 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_1 = Transform_get_position_m3461250874(L_0, /*hidden argument*/NULL);
		GameObject_t3517799623 * L_2 = __this->get_player_2();
		Transform_t2602648905 * L_3 = GameObject_get_transform_m3824223737(L_2, /*hidden argument*/NULL);
		Vector3_t1456905862  L_4 = Transform_get_position_m3461250874(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_5 = Vector3_op_Subtraction_m453774637(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_5(L_5);
		return;
	}
}
// System.Void CameraController::Update()
extern "C"  void CameraController_Update_m3621762239 (CameraController_t375689052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Update_m3621762239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t1456905862  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t1456905862  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t1456905862  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t1456905862  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t1456905862  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t1456905862  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Transform_t2602648905 * L_0 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		GameObject_t3517799623 * L_1 = __this->get_player_2();
		Transform_t2602648905 * L_2 = GameObject_get_transform_m3824223737(L_1, /*hidden argument*/NULL);
		Vector3_t1456905862  L_3 = Transform_get_position_m3461250874(L_2, /*hidden argument*/NULL);
		Vector3_t1456905862  L_4 = __this->get_offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_5 = Vector3_op_Addition_m571617041(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m1293365489(L_0, L_5, /*hidden argument*/NULL);
		GameObject_t3517799623 * L_6 = __this->get_player_2();
		Transform_t2602648905 * L_7 = GameObject_get_transform_m3824223737(L_6, /*hidden argument*/NULL);
		Vector3_t1456905862  L_8 = Transform_get_position_m3461250874(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_x_1();
		GameObject_t3517799623 * L_10 = __this->get_background_3();
		Transform_t2602648905 * L_11 = GameObject_get_transform_m3824223737(L_10, /*hidden argument*/NULL);
		Vector3_t1456905862  L_12 = Transform_get_position_m3461250874(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_x_1();
		__this->set_watch_4(((float)((float)L_9-(float)L_13)));
		GameObject_t3517799623 * L_14 = __this->get_player_2();
		Transform_t2602648905 * L_15 = GameObject_get_transform_m3824223737(L_14, /*hidden argument*/NULL);
		Vector3_t1456905862  L_16 = Transform_get_position_m3461250874(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_x_1();
		GameObject_t3517799623 * L_18 = __this->get_background_3();
		Transform_t2602648905 * L_19 = GameObject_get_transform_m3824223737(L_18, /*hidden argument*/NULL);
		Vector3_t1456905862  L_20 = Transform_get_position_m3461250874(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		float L_21 = (&V_3)->get_x_1();
		if ((!(((float)((float)((float)L_17-(float)L_21))) > ((float)(1.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		GameObject_t3517799623 * L_22 = __this->get_background_3();
		Transform_t2602648905 * L_23 = GameObject_get_transform_m3824223737(L_22, /*hidden argument*/NULL);
		Transform_t2602648905 * L_24 = L_23;
		Vector3_t1456905862  L_25 = Transform_get_position_m3461250874(L_24, /*hidden argument*/NULL);
		Vector3_t1456905862  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m1260107276((&L_26), (4.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_27 = Vector3_op_Addition_m571617041(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Transform_set_position_m1293365489(L_24, L_27, /*hidden argument*/NULL);
		goto IL_0138;
	}

IL_00cc:
	{
		GameObject_t3517799623 * L_28 = __this->get_player_2();
		Transform_t2602648905 * L_29 = GameObject_get_transform_m3824223737(L_28, /*hidden argument*/NULL);
		Vector3_t1456905862  L_30 = Transform_get_position_m3461250874(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		float L_31 = (&V_4)->get_x_1();
		GameObject_t3517799623 * L_32 = __this->get_background_3();
		Transform_t2602648905 * L_33 = GameObject_get_transform_m3824223737(L_32, /*hidden argument*/NULL);
		Vector3_t1456905862  L_34 = Transform_get_position_m3461250874(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		float L_35 = (&V_5)->get_x_1();
		if ((!(((float)((float)((float)L_31-(float)L_35))) < ((float)(-5.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		GameObject_t3517799623 * L_36 = __this->get_background_3();
		Transform_t2602648905 * L_37 = GameObject_get_transform_m3824223737(L_36, /*hidden argument*/NULL);
		Transform_t2602648905 * L_38 = L_37;
		Vector3_t1456905862  L_39 = Transform_get_position_m3461250874(L_38, /*hidden argument*/NULL);
		Vector3_t1456905862  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Vector3__ctor_m1260107276((&L_40), (4.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_41 = Vector3_op_Subtraction_m453774637(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		Transform_set_position_m1293365489(L_38, L_41, /*hidden argument*/NULL);
	}

IL_0138:
	{
		return;
	}
}
// System.Void KeepBalance::.ctor()
extern "C"  void KeepBalance__ctor_m958432495 (KeepBalance_t2516391038 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2021124112(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KeepBalance::Start()
extern "C"  void KeepBalance_Start_m1756877174 (KeepBalance_t2516391038 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KeepBalance::Update()
extern "C"  void KeepBalance_Update_m1046088520 (KeepBalance_t2516391038 * __this, const RuntimeMethod* method)
{
	{
		Transform_t2602648905 * L_0 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Quaternion_t3179779873  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Quaternion__ctor_m3343728864((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m384626452(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MonsterController::.ctor()
extern "C"  void MonsterController__ctor_m527252895 (MonsterController_t2458232747 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2021124112(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MonsterController::Start()
extern "C"  void MonsterController_Start_m3853996080 (MonsterController_t2458232747 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MonsterController::Update()
extern "C"  void MonsterController_Update_m3456425624 (MonsterController_t2458232747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonsterController_Update_m3456425624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t1456905862  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t1456905862  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameObject_t3517799623 * L_0 = __this->get_player_3();
		Transform_t2602648905 * L_1 = GameObject_get_transform_m3824223737(L_0, /*hidden argument*/NULL);
		Vector3_t1456905862  L_2 = Transform_get_position_m3461250874(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_1();
		Transform_t2602648905 * L_4 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_5 = Transform_get_position_m3461250874(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_x_1();
		V_0 = ((float)((float)L_3-(float)L_6));
		float L_7 = V_0;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		Transform_t2602648905 * L_8 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Transform_t2602648905 * L_9 = L_8;
		Vector3_t1456905862  L_10 = Transform_get_position_m3461250874(L_9, /*hidden argument*/NULL);
		float L_11 = Time_get_deltaTime_m1143016922(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = __this->get_speed_2();
		Vector3_t1456905862  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m1260107276((&L_13), ((float)((float)L_11*(float)L_12)), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_14 = Vector3_op_Addition_m571617041(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
		Transform_set_position_m1293365489(L_9, L_14, /*hidden argument*/NULL);
		Transform_t2602648905 * L_15 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m1260107276((&L_16), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3732412540(L_15, L_16, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_008d:
	{
		float L_17 = V_0;
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_00ee;
		}
	}
	{
		Transform_t2602648905 * L_18 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Transform_t2602648905 * L_19 = L_18;
		Vector3_t1456905862  L_20 = Transform_get_position_m3461250874(L_19, /*hidden argument*/NULL);
		float L_21 = Time_get_deltaTime_m1143016922(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_22 = __this->get_speed_2();
		Vector3_t1456905862  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m1260107276((&L_23), ((float)((float)((float)((float)L_21*(float)L_22))*(float)(-1.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_24 = Vector3_op_Addition_m571617041(NULL /*static, unused*/, L_20, L_23, /*hidden argument*/NULL);
		Transform_set_position_m1293365489(L_19, L_24, /*hidden argument*/NULL);
		Transform_t2602648905 * L_25 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m1260107276((&L_26), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3732412540(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2251993616 (PlayerController_t2404229581 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_2((10.0f));
		__this->set_jumpForce_3((10.0f));
		__this->set_faceDirection_6(1);
		MonoBehaviour__ctor_m2021124112(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m2760541345 (PlayerController_t2404229581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m2760541345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t213641401 * L_0 = Component_GetComponent_TisAnimator_t213641401_m2768772963(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t213641401_m2768772963_RuntimeMethod_var);
		__this->set_animator_5(L_0);
		Rigidbody2D_t3573403892 * L_1 = Component_GetComponent_TisRigidbody2D_t3573403892_m3494817735(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3573403892_m3494817735_RuntimeMethod_var);
		__this->set_rb2d_9(L_1);
		return;
	}
}
// System.Void PlayerController::Attack()
extern "C"  void PlayerController_Attack_m343553813 (PlayerController_t2404229581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Attack_m343553813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t1456905862  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_t3517799623 * V_1 = NULL;
	{
		Animator_t213641401 * L_0 = __this->get_animator_5();
		Animator_SetTrigger_m2639684195(L_0, _stringLiteral2863188957, /*hidden argument*/NULL);
		Transform_t2602648905 * L_1 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_2 = Transform_get_position_m3461250874(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t1456905862 * L_3 = (&V_0);
		float L_4 = L_3->get_x_1();
		int32_t L_5 = __this->get_faceDirection_6();
		L_3->set_x_1(((float)((float)L_4+(float)((float)((float)(0.2f)*(float)(((float)((float)L_5))))))));
		GameObject_t3517799623 * L_6 = __this->get_bullet_4();
		Vector3_t1456905862  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t3179779873_il2cpp_TypeInfo_var);
		Quaternion_t3179779873  L_8 = Quaternion_get_identity_m3638903760(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t477745608_il2cpp_TypeInfo_var);
		GameObject_t3517799623 * L_9 = Object_Instantiate_TisGameObject_t3517799623_m1861364533(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t3517799623_m1861364533_RuntimeMethod_var);
		V_1 = L_9;
		GameObject_t3517799623 * L_10 = V_1;
		Rigidbody2D_t3573403892 * L_11 = GameObject_GetComponent_TisRigidbody2D_t3573403892_m2826798899(L_10, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t3573403892_m2826798899_RuntimeMethod_var);
		int32_t L_12 = __this->get_faceDirection_6();
		Vector2_t232664672  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m2673939173((&L_13), (((float)((float)((int32_t)((int32_t)L_12*(int32_t)((int32_t)200)))))), (50.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3905224274(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m3584484142 (PlayerController_t2404229581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m3584484142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1553211949_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m3780344495(NULL /*static, unused*/, _stringLiteral516587324, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m3780344495(NULL /*static, unused*/, _stringLiteral568383665, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = Input_GetKeyDown_m3259421292(NULL /*static, unused*/, _stringLiteral309121747, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		PlayerController_Attack_m343553813(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		bool L_3 = __this->get_ifJump_7();
		if (L_3)
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1553211949_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m3259421292(NULL /*static, unused*/, _stringLiteral1264800775, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		__this->set_ifJump_7((bool)1);
		__this->set_jumpFrameRemaining_8(((int32_t)20));
		Rigidbody2D_t3573403892 * L_5 = __this->get_rb2d_9();
		float L_6 = __this->get_jumpForce_3();
		Vector2_t232664672  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m2673939173((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3905224274(L_5, L_7, /*hidden argument*/NULL);
	}

IL_006f:
	{
		bool L_8 = __this->get_ifJump_7();
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_9 = __this->get_jumpFrameRemaining_8();
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_10 = __this->get_jumpFrameRemaining_8();
		__this->set_jumpFrameRemaining_8(((int32_t)((int32_t)L_10-(int32_t)1)));
		goto IL_00a0;
	}

IL_0099:
	{
		__this->set_ifJump_7((bool)0);
	}

IL_00a0:
	{
		float L_11 = V_1;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->set_faceDirection_6(1);
		Transform_t2602648905 * L_12 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m1260107276((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3732412540(L_12, L_13, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00d6:
	{
		float L_14 = V_1;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_0107;
		}
	}
	{
		__this->set_faceDirection_6((-1));
		Transform_t2602648905 * L_15 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m1260107276((&L_16), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3732412540(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0107:
	{
		Transform_t2602648905 * L_17 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Transform_t2602648905 * L_18 = Component_get_transform_m508705964(__this, /*hidden argument*/NULL);
		Vector3_t1456905862  L_19 = Transform_get_position_m3461250874(L_18, /*hidden argument*/NULL);
		float L_20 = V_1;
		float L_21 = __this->get_moveSpeed_2();
		float L_22 = Time_get_deltaTime_m1143016922(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t1456905862  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m1260107276((&L_23), ((float)((float)((float)((float)L_20*(float)L_21))*(float)L_22)), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1456905862_il2cpp_TypeInfo_var);
		Vector3_t1456905862  L_24 = Vector3_op_Addition_m571617041(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		Transform_set_position_m1293365489(L_17, L_24, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
