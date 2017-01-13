#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankHealth
struct  TankHealth_t977205842  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TankHealth::m_StartingHealth
	float ___m_StartingHealth_2;
	// UnityEngine.UI.Slider TankHealth::m_Slider
	Slider_t297367283 * ___m_Slider_3;
	// UnityEngine.UI.Image TankHealth::m_FillImage
	Image_t2042527209 * ___m_FillImage_4;
	// UnityEngine.Color TankHealth::m_FullHealthColor
	Color_t2020392075  ___m_FullHealthColor_5;
	// UnityEngine.Color TankHealth::m_ZeroHealthColor
	Color_t2020392075  ___m_ZeroHealthColor_6;
	// UnityEngine.GameObject TankHealth::m_ExplosionPrefab
	GameObject_t1756533147 * ___m_ExplosionPrefab_7;
	// UnityEngine.AudioSource TankHealth::m_ExplosionAudio
	AudioSource_t1135106623 * ___m_ExplosionAudio_8;
	// UnityEngine.ParticleSystem TankHealth::m_ExplosionParticles
	ParticleSystem_t3394631041 * ___m_ExplosionParticles_9;
	// System.Single TankHealth::m_CurrentHealth
	float ___m_CurrentHealth_10;
	// System.Boolean TankHealth::m_Dead
	bool ___m_Dead_11;

public:
	inline static int32_t get_offset_of_m_StartingHealth_2() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_StartingHealth_2)); }
	inline float get_m_StartingHealth_2() const { return ___m_StartingHealth_2; }
	inline float* get_address_of_m_StartingHealth_2() { return &___m_StartingHealth_2; }
	inline void set_m_StartingHealth_2(float value)
	{
		___m_StartingHealth_2 = value;
	}

	inline static int32_t get_offset_of_m_Slider_3() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_Slider_3)); }
	inline Slider_t297367283 * get_m_Slider_3() const { return ___m_Slider_3; }
	inline Slider_t297367283 ** get_address_of_m_Slider_3() { return &___m_Slider_3; }
	inline void set_m_Slider_3(Slider_t297367283 * value)
	{
		___m_Slider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Slider_3, value);
	}

	inline static int32_t get_offset_of_m_FillImage_4() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_FillImage_4)); }
	inline Image_t2042527209 * get_m_FillImage_4() const { return ___m_FillImage_4; }
	inline Image_t2042527209 ** get_address_of_m_FillImage_4() { return &___m_FillImage_4; }
	inline void set_m_FillImage_4(Image_t2042527209 * value)
	{
		___m_FillImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillImage_4, value);
	}

	inline static int32_t get_offset_of_m_FullHealthColor_5() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_FullHealthColor_5)); }
	inline Color_t2020392075  get_m_FullHealthColor_5() const { return ___m_FullHealthColor_5; }
	inline Color_t2020392075 * get_address_of_m_FullHealthColor_5() { return &___m_FullHealthColor_5; }
	inline void set_m_FullHealthColor_5(Color_t2020392075  value)
	{
		___m_FullHealthColor_5 = value;
	}

	inline static int32_t get_offset_of_m_ZeroHealthColor_6() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_ZeroHealthColor_6)); }
	inline Color_t2020392075  get_m_ZeroHealthColor_6() const { return ___m_ZeroHealthColor_6; }
	inline Color_t2020392075 * get_address_of_m_ZeroHealthColor_6() { return &___m_ZeroHealthColor_6; }
	inline void set_m_ZeroHealthColor_6(Color_t2020392075  value)
	{
		___m_ZeroHealthColor_6 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionPrefab_7() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_ExplosionPrefab_7)); }
	inline GameObject_t1756533147 * get_m_ExplosionPrefab_7() const { return ___m_ExplosionPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_m_ExplosionPrefab_7() { return &___m_ExplosionPrefab_7; }
	inline void set_m_ExplosionPrefab_7(GameObject_t1756533147 * value)
	{
		___m_ExplosionPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExplosionPrefab_7, value);
	}

	inline static int32_t get_offset_of_m_ExplosionAudio_8() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_ExplosionAudio_8)); }
	inline AudioSource_t1135106623 * get_m_ExplosionAudio_8() const { return ___m_ExplosionAudio_8; }
	inline AudioSource_t1135106623 ** get_address_of_m_ExplosionAudio_8() { return &___m_ExplosionAudio_8; }
	inline void set_m_ExplosionAudio_8(AudioSource_t1135106623 * value)
	{
		___m_ExplosionAudio_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExplosionAudio_8, value);
	}

	inline static int32_t get_offset_of_m_ExplosionParticles_9() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_ExplosionParticles_9)); }
	inline ParticleSystem_t3394631041 * get_m_ExplosionParticles_9() const { return ___m_ExplosionParticles_9; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_ExplosionParticles_9() { return &___m_ExplosionParticles_9; }
	inline void set_m_ExplosionParticles_9(ParticleSystem_t3394631041 * value)
	{
		___m_ExplosionParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExplosionParticles_9, value);
	}

	inline static int32_t get_offset_of_m_CurrentHealth_10() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_CurrentHealth_10)); }
	inline float get_m_CurrentHealth_10() const { return ___m_CurrentHealth_10; }
	inline float* get_address_of_m_CurrentHealth_10() { return &___m_CurrentHealth_10; }
	inline void set_m_CurrentHealth_10(float value)
	{
		___m_CurrentHealth_10 = value;
	}

	inline static int32_t get_offset_of_m_Dead_11() { return static_cast<int32_t>(offsetof(TankHealth_t977205842, ___m_Dead_11)); }
	inline bool get_m_Dead_11() const { return ___m_Dead_11; }
	inline bool* get_address_of_m_Dead_11() { return &___m_Dead_11; }
	inline void set_m_Dead_11(bool value)
	{
		___m_Dead_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
