#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShellExplosion
struct  ShellExplosion_t448667789  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask ShellExplosion::m_TankMask
	LayerMask_t3188175821  ___m_TankMask_2;
	// UnityEngine.ParticleSystem ShellExplosion::m_ExplosionParticles
	ParticleSystem_t3394631041 * ___m_ExplosionParticles_3;
	// UnityEngine.AudioSource ShellExplosion::m_ExplosionAudio
	AudioSource_t1135106623 * ___m_ExplosionAudio_4;
	// System.Single ShellExplosion::m_MaxDamage
	float ___m_MaxDamage_5;
	// System.Single ShellExplosion::m_ExplosionForce
	float ___m_ExplosionForce_6;
	// System.Single ShellExplosion::m_MaxLifeTime
	float ___m_MaxLifeTime_7;
	// System.Single ShellExplosion::m_ExplosionRadius
	float ___m_ExplosionRadius_8;

public:
	inline static int32_t get_offset_of_m_TankMask_2() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_TankMask_2)); }
	inline LayerMask_t3188175821  get_m_TankMask_2() const { return ___m_TankMask_2; }
	inline LayerMask_t3188175821 * get_address_of_m_TankMask_2() { return &___m_TankMask_2; }
	inline void set_m_TankMask_2(LayerMask_t3188175821  value)
	{
		___m_TankMask_2 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionParticles_3() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_ExplosionParticles_3)); }
	inline ParticleSystem_t3394631041 * get_m_ExplosionParticles_3() const { return ___m_ExplosionParticles_3; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_ExplosionParticles_3() { return &___m_ExplosionParticles_3; }
	inline void set_m_ExplosionParticles_3(ParticleSystem_t3394631041 * value)
	{
		___m_ExplosionParticles_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExplosionParticles_3, value);
	}

	inline static int32_t get_offset_of_m_ExplosionAudio_4() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_ExplosionAudio_4)); }
	inline AudioSource_t1135106623 * get_m_ExplosionAudio_4() const { return ___m_ExplosionAudio_4; }
	inline AudioSource_t1135106623 ** get_address_of_m_ExplosionAudio_4() { return &___m_ExplosionAudio_4; }
	inline void set_m_ExplosionAudio_4(AudioSource_t1135106623 * value)
	{
		___m_ExplosionAudio_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExplosionAudio_4, value);
	}

	inline static int32_t get_offset_of_m_MaxDamage_5() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_MaxDamage_5)); }
	inline float get_m_MaxDamage_5() const { return ___m_MaxDamage_5; }
	inline float* get_address_of_m_MaxDamage_5() { return &___m_MaxDamage_5; }
	inline void set_m_MaxDamage_5(float value)
	{
		___m_MaxDamage_5 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionForce_6() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_ExplosionForce_6)); }
	inline float get_m_ExplosionForce_6() const { return ___m_ExplosionForce_6; }
	inline float* get_address_of_m_ExplosionForce_6() { return &___m_ExplosionForce_6; }
	inline void set_m_ExplosionForce_6(float value)
	{
		___m_ExplosionForce_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxLifeTime_7() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_MaxLifeTime_7)); }
	inline float get_m_MaxLifeTime_7() const { return ___m_MaxLifeTime_7; }
	inline float* get_address_of_m_MaxLifeTime_7() { return &___m_MaxLifeTime_7; }
	inline void set_m_MaxLifeTime_7(float value)
	{
		___m_MaxLifeTime_7 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionRadius_8() { return static_cast<int32_t>(offsetof(ShellExplosion_t448667789, ___m_ExplosionRadius_8)); }
	inline float get_m_ExplosionRadius_8() const { return ___m_ExplosionRadius_8; }
	inline float* get_address_of_m_ExplosionRadius_8() { return &___m_ExplosionRadius_8; }
	inline void set_m_ExplosionRadius_8(float value)
	{
		___m_ExplosionRadius_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
