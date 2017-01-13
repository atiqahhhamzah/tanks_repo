#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Complete.UIDirectionControl
struct  UIDirectionControl_t2272639316  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Complete.UIDirectionControl::m_UseRelativeRotation
	bool ___m_UseRelativeRotation_2;
	// UnityEngine.Quaternion Complete.UIDirectionControl::m_RelativeRotation
	Quaternion_t4030073918  ___m_RelativeRotation_3;

public:
	inline static int32_t get_offset_of_m_UseRelativeRotation_2() { return static_cast<int32_t>(offsetof(UIDirectionControl_t2272639316, ___m_UseRelativeRotation_2)); }
	inline bool get_m_UseRelativeRotation_2() const { return ___m_UseRelativeRotation_2; }
	inline bool* get_address_of_m_UseRelativeRotation_2() { return &___m_UseRelativeRotation_2; }
	inline void set_m_UseRelativeRotation_2(bool value)
	{
		___m_UseRelativeRotation_2 = value;
	}

	inline static int32_t get_offset_of_m_RelativeRotation_3() { return static_cast<int32_t>(offsetof(UIDirectionControl_t2272639316, ___m_RelativeRotation_3)); }
	inline Quaternion_t4030073918  get_m_RelativeRotation_3() const { return ___m_RelativeRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_m_RelativeRotation_3() { return &___m_RelativeRotation_3; }
	inline void set_m_RelativeRotation_3(Quaternion_t4030073918  value)
	{
		___m_RelativeRotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
