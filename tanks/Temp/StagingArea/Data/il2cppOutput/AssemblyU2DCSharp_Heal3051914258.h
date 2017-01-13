#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Heal
struct  Heal_t3051914258  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Heal::maxLife
	float ___maxLife_2;
	// System.Single Heal::lifeAdd
	float ___lifeAdd_3;

public:
	inline static int32_t get_offset_of_maxLife_2() { return static_cast<int32_t>(offsetof(Heal_t3051914258, ___maxLife_2)); }
	inline float get_maxLife_2() const { return ___maxLife_2; }
	inline float* get_address_of_maxLife_2() { return &___maxLife_2; }
	inline void set_maxLife_2(float value)
	{
		___maxLife_2 = value;
	}

	inline static int32_t get_offset_of_lifeAdd_3() { return static_cast<int32_t>(offsetof(Heal_t3051914258, ___lifeAdd_3)); }
	inline float get_lifeAdd_3() const { return ___lifeAdd_3; }
	inline float* get_address_of_lifeAdd_3() { return &___lifeAdd_3; }
	inline void set_lifeAdd_3(float value)
	{
		___lifeAdd_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
