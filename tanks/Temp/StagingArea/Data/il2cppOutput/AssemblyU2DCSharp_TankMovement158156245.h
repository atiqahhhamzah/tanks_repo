#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.String
struct String_t;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankMovement
struct  TankMovement_t158156245  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.Single TankMovement::m_Speed
	float ___m_Speed_3;
	// System.Single TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_4;
	// UnityEngine.AudioSource TankMovement::m_MovementAudio
	AudioSource_t1135106623 * ___m_MovementAudio_5;
	// UnityEngine.AudioClip TankMovement::m_EngineIdling
	AudioClip_t1932558630 * ___m_EngineIdling_6;
	// UnityEngine.AudioClip TankMovement::m_EngineDriving
	AudioClip_t1932558630 * ___m_EngineDriving_7;
	// System.Single TankMovement::m_PitchRange
	float ___m_PitchRange_8;
	// System.String TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_9;
	// System.String TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_10;
	// UnityEngine.Rigidbody TankMovement::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_11;
	// System.Single TankMovement::m_MovementInputValue
	float ___m_MovementInputValue_12;
	// System.Single TankMovement::m_TurnInputValue
	float ___m_TurnInputValue_13;
	// System.Single TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_14;

public:
	inline static int32_t get_offset_of_m_PlayerNumber_2() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_PlayerNumber_2)); }
	inline int32_t get_m_PlayerNumber_2() const { return ___m_PlayerNumber_2; }
	inline int32_t* get_address_of_m_PlayerNumber_2() { return &___m_PlayerNumber_2; }
	inline void set_m_PlayerNumber_2(int32_t value)
	{
		___m_PlayerNumber_2 = value;
	}

	inline static int32_t get_offset_of_m_Speed_3() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_Speed_3)); }
	inline float get_m_Speed_3() const { return ___m_Speed_3; }
	inline float* get_address_of_m_Speed_3() { return &___m_Speed_3; }
	inline void set_m_Speed_3(float value)
	{
		___m_Speed_3 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_4() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_TurnSpeed_4)); }
	inline float get_m_TurnSpeed_4() const { return ___m_TurnSpeed_4; }
	inline float* get_address_of_m_TurnSpeed_4() { return &___m_TurnSpeed_4; }
	inline void set_m_TurnSpeed_4(float value)
	{
		___m_TurnSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_MovementAudio_5() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_MovementAudio_5)); }
	inline AudioSource_t1135106623 * get_m_MovementAudio_5() const { return ___m_MovementAudio_5; }
	inline AudioSource_t1135106623 ** get_address_of_m_MovementAudio_5() { return &___m_MovementAudio_5; }
	inline void set_m_MovementAudio_5(AudioSource_t1135106623 * value)
	{
		___m_MovementAudio_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_MovementAudio_5, value);
	}

	inline static int32_t get_offset_of_m_EngineIdling_6() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_EngineIdling_6)); }
	inline AudioClip_t1932558630 * get_m_EngineIdling_6() const { return ___m_EngineIdling_6; }
	inline AudioClip_t1932558630 ** get_address_of_m_EngineIdling_6() { return &___m_EngineIdling_6; }
	inline void set_m_EngineIdling_6(AudioClip_t1932558630 * value)
	{
		___m_EngineIdling_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_EngineIdling_6, value);
	}

	inline static int32_t get_offset_of_m_EngineDriving_7() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_EngineDriving_7)); }
	inline AudioClip_t1932558630 * get_m_EngineDriving_7() const { return ___m_EngineDriving_7; }
	inline AudioClip_t1932558630 ** get_address_of_m_EngineDriving_7() { return &___m_EngineDriving_7; }
	inline void set_m_EngineDriving_7(AudioClip_t1932558630 * value)
	{
		___m_EngineDriving_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_EngineDriving_7, value);
	}

	inline static int32_t get_offset_of_m_PitchRange_8() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_PitchRange_8)); }
	inline float get_m_PitchRange_8() const { return ___m_PitchRange_8; }
	inline float* get_address_of_m_PitchRange_8() { return &___m_PitchRange_8; }
	inline void set_m_PitchRange_8(float value)
	{
		___m_PitchRange_8 = value;
	}

	inline static int32_t get_offset_of_m_MovementAxisName_9() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_MovementAxisName_9)); }
	inline String_t* get_m_MovementAxisName_9() const { return ___m_MovementAxisName_9; }
	inline String_t** get_address_of_m_MovementAxisName_9() { return &___m_MovementAxisName_9; }
	inline void set_m_MovementAxisName_9(String_t* value)
	{
		___m_MovementAxisName_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_MovementAxisName_9, value);
	}

	inline static int32_t get_offset_of_m_TurnAxisName_10() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_TurnAxisName_10)); }
	inline String_t* get_m_TurnAxisName_10() const { return ___m_TurnAxisName_10; }
	inline String_t** get_address_of_m_TurnAxisName_10() { return &___m_TurnAxisName_10; }
	inline void set_m_TurnAxisName_10(String_t* value)
	{
		___m_TurnAxisName_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_TurnAxisName_10, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_11() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_Rigidbody_11)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_11() const { return ___m_Rigidbody_11; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_11() { return &___m_Rigidbody_11; }
	inline void set_m_Rigidbody_11(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_11, value);
	}

	inline static int32_t get_offset_of_m_MovementInputValue_12() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_MovementInputValue_12)); }
	inline float get_m_MovementInputValue_12() const { return ___m_MovementInputValue_12; }
	inline float* get_address_of_m_MovementInputValue_12() { return &___m_MovementInputValue_12; }
	inline void set_m_MovementInputValue_12(float value)
	{
		___m_MovementInputValue_12 = value;
	}

	inline static int32_t get_offset_of_m_TurnInputValue_13() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_TurnInputValue_13)); }
	inline float get_m_TurnInputValue_13() const { return ___m_TurnInputValue_13; }
	inline float* get_address_of_m_TurnInputValue_13() { return &___m_TurnInputValue_13; }
	inline void set_m_TurnInputValue_13(float value)
	{
		___m_TurnInputValue_13 = value;
	}

	inline static int32_t get_offset_of_m_OriginalPitch_14() { return static_cast<int32_t>(offsetof(TankMovement_t158156245, ___m_OriginalPitch_14)); }
	inline float get_m_OriginalPitch_14() const { return ___m_OriginalPitch_14; }
	inline float* get_address_of_m_OriginalPitch_14() { return &___m_OriginalPitch_14; }
	inline void set_m_OriginalPitch_14(float value)
	{
		___m_OriginalPitch_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
