#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankShooting
struct  TankShooting_t3377978145  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TankShooting::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// UnityEngine.Rigidbody TankShooting::m_Shell
	Rigidbody_t4233889191 * ___m_Shell_3;
	// UnityEngine.Transform TankShooting::m_FireTransform
	Transform_t3275118058 * ___m_FireTransform_4;
	// UnityEngine.UI.Slider TankShooting::m_AimSlider
	Slider_t297367283 * ___m_AimSlider_5;
	// UnityEngine.AudioSource TankShooting::m_ShootingAudio
	AudioSource_t1135106623 * ___m_ShootingAudio_6;
	// UnityEngine.AudioClip TankShooting::m_ChargingClip
	AudioClip_t1932558630 * ___m_ChargingClip_7;
	// UnityEngine.AudioClip TankShooting::m_FireClip
	AudioClip_t1932558630 * ___m_FireClip_8;
	// System.Single TankShooting::m_MinLaunchForce
	float ___m_MinLaunchForce_9;
	// System.Single TankShooting::m_MaxLaunchForce
	float ___m_MaxLaunchForce_10;
	// System.Single TankShooting::m_MaxChargeTime
	float ___m_MaxChargeTime_11;
	// System.String TankShooting::m_FireButton
	String_t* ___m_FireButton_12;
	// System.Single TankShooting::m_CurrentLaunchForce
	float ___m_CurrentLaunchForce_13;
	// System.Single TankShooting::m_ChargeSpeed
	float ___m_ChargeSpeed_14;
	// System.Boolean TankShooting::m_Fired
	bool ___m_Fired_15;

public:
	inline static int32_t get_offset_of_m_PlayerNumber_2() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_PlayerNumber_2)); }
	inline int32_t get_m_PlayerNumber_2() const { return ___m_PlayerNumber_2; }
	inline int32_t* get_address_of_m_PlayerNumber_2() { return &___m_PlayerNumber_2; }
	inline void set_m_PlayerNumber_2(int32_t value)
	{
		___m_PlayerNumber_2 = value;
	}

	inline static int32_t get_offset_of_m_Shell_3() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_Shell_3)); }
	inline Rigidbody_t4233889191 * get_m_Shell_3() const { return ___m_Shell_3; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Shell_3() { return &___m_Shell_3; }
	inline void set_m_Shell_3(Rigidbody_t4233889191 * value)
	{
		___m_Shell_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shell_3, value);
	}

	inline static int32_t get_offset_of_m_FireTransform_4() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_FireTransform_4)); }
	inline Transform_t3275118058 * get_m_FireTransform_4() const { return ___m_FireTransform_4; }
	inline Transform_t3275118058 ** get_address_of_m_FireTransform_4() { return &___m_FireTransform_4; }
	inline void set_m_FireTransform_4(Transform_t3275118058 * value)
	{
		___m_FireTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_FireTransform_4, value);
	}

	inline static int32_t get_offset_of_m_AimSlider_5() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_AimSlider_5)); }
	inline Slider_t297367283 * get_m_AimSlider_5() const { return ___m_AimSlider_5; }
	inline Slider_t297367283 ** get_address_of_m_AimSlider_5() { return &___m_AimSlider_5; }
	inline void set_m_AimSlider_5(Slider_t297367283 * value)
	{
		___m_AimSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AimSlider_5, value);
	}

	inline static int32_t get_offset_of_m_ShootingAudio_6() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_ShootingAudio_6)); }
	inline AudioSource_t1135106623 * get_m_ShootingAudio_6() const { return ___m_ShootingAudio_6; }
	inline AudioSource_t1135106623 ** get_address_of_m_ShootingAudio_6() { return &___m_ShootingAudio_6; }
	inline void set_m_ShootingAudio_6(AudioSource_t1135106623 * value)
	{
		___m_ShootingAudio_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_ShootingAudio_6, value);
	}

	inline static int32_t get_offset_of_m_ChargingClip_7() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_ChargingClip_7)); }
	inline AudioClip_t1932558630 * get_m_ChargingClip_7() const { return ___m_ChargingClip_7; }
	inline AudioClip_t1932558630 ** get_address_of_m_ChargingClip_7() { return &___m_ChargingClip_7; }
	inline void set_m_ChargingClip_7(AudioClip_t1932558630 * value)
	{
		___m_ChargingClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChargingClip_7, value);
	}

	inline static int32_t get_offset_of_m_FireClip_8() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_FireClip_8)); }
	inline AudioClip_t1932558630 * get_m_FireClip_8() const { return ___m_FireClip_8; }
	inline AudioClip_t1932558630 ** get_address_of_m_FireClip_8() { return &___m_FireClip_8; }
	inline void set_m_FireClip_8(AudioClip_t1932558630 * value)
	{
		___m_FireClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_FireClip_8, value);
	}

	inline static int32_t get_offset_of_m_MinLaunchForce_9() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_MinLaunchForce_9)); }
	inline float get_m_MinLaunchForce_9() const { return ___m_MinLaunchForce_9; }
	inline float* get_address_of_m_MinLaunchForce_9() { return &___m_MinLaunchForce_9; }
	inline void set_m_MinLaunchForce_9(float value)
	{
		___m_MinLaunchForce_9 = value;
	}

	inline static int32_t get_offset_of_m_MaxLaunchForce_10() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_MaxLaunchForce_10)); }
	inline float get_m_MaxLaunchForce_10() const { return ___m_MaxLaunchForce_10; }
	inline float* get_address_of_m_MaxLaunchForce_10() { return &___m_MaxLaunchForce_10; }
	inline void set_m_MaxLaunchForce_10(float value)
	{
		___m_MaxLaunchForce_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxChargeTime_11() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_MaxChargeTime_11)); }
	inline float get_m_MaxChargeTime_11() const { return ___m_MaxChargeTime_11; }
	inline float* get_address_of_m_MaxChargeTime_11() { return &___m_MaxChargeTime_11; }
	inline void set_m_MaxChargeTime_11(float value)
	{
		___m_MaxChargeTime_11 = value;
	}

	inline static int32_t get_offset_of_m_FireButton_12() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_FireButton_12)); }
	inline String_t* get_m_FireButton_12() const { return ___m_FireButton_12; }
	inline String_t** get_address_of_m_FireButton_12() { return &___m_FireButton_12; }
	inline void set_m_FireButton_12(String_t* value)
	{
		___m_FireButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_FireButton_12, value);
	}

	inline static int32_t get_offset_of_m_CurrentLaunchForce_13() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_CurrentLaunchForce_13)); }
	inline float get_m_CurrentLaunchForce_13() const { return ___m_CurrentLaunchForce_13; }
	inline float* get_address_of_m_CurrentLaunchForce_13() { return &___m_CurrentLaunchForce_13; }
	inline void set_m_CurrentLaunchForce_13(float value)
	{
		___m_CurrentLaunchForce_13 = value;
	}

	inline static int32_t get_offset_of_m_ChargeSpeed_14() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_ChargeSpeed_14)); }
	inline float get_m_ChargeSpeed_14() const { return ___m_ChargeSpeed_14; }
	inline float* get_address_of_m_ChargeSpeed_14() { return &___m_ChargeSpeed_14; }
	inline void set_m_ChargeSpeed_14(float value)
	{
		___m_ChargeSpeed_14 = value;
	}

	inline static int32_t get_offset_of_m_Fired_15() { return static_cast<int32_t>(offsetof(TankShooting_t3377978145, ___m_Fired_15)); }
	inline bool get_m_Fired_15() const { return ___m_Fired_15; }
	inline bool* get_address_of_m_Fired_15() { return &___m_Fired_15; }
	inline void set_m_Fired_15(bool value)
	{
		___m_Fired_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
