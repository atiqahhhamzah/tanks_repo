#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraControl
struct  CameraControl_t2838268856  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraControl::m_DampTime
	float ___m_DampTime_2;
	// System.Single CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_3;
	// System.Single CameraControl::m_MinSize
	float ___m_MinSize_4;
	// UnityEngine.Transform[] CameraControl::m_Targets
	TransformU5BU5D_t3764228911* ___m_Targets_5;
	// UnityEngine.Camera CameraControl::m_Camera
	Camera_t189460977 * ___m_Camera_6;
	// System.Single CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_7;
	// UnityEngine.Vector3 CameraControl::m_MoveVelocity
	Vector3_t2243707580  ___m_MoveVelocity_8;
	// UnityEngine.Vector3 CameraControl::m_DesiredPosition
	Vector3_t2243707580  ___m_DesiredPosition_9;

public:
	inline static int32_t get_offset_of_m_DampTime_2() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_DampTime_2)); }
	inline float get_m_DampTime_2() const { return ___m_DampTime_2; }
	inline float* get_address_of_m_DampTime_2() { return &___m_DampTime_2; }
	inline void set_m_DampTime_2(float value)
	{
		___m_DampTime_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenEdgeBuffer_3() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_ScreenEdgeBuffer_3)); }
	inline float get_m_ScreenEdgeBuffer_3() const { return ___m_ScreenEdgeBuffer_3; }
	inline float* get_address_of_m_ScreenEdgeBuffer_3() { return &___m_ScreenEdgeBuffer_3; }
	inline void set_m_ScreenEdgeBuffer_3(float value)
	{
		___m_ScreenEdgeBuffer_3 = value;
	}

	inline static int32_t get_offset_of_m_MinSize_4() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_MinSize_4)); }
	inline float get_m_MinSize_4() const { return ___m_MinSize_4; }
	inline float* get_address_of_m_MinSize_4() { return &___m_MinSize_4; }
	inline void set_m_MinSize_4(float value)
	{
		___m_MinSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Targets_5() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_Targets_5)); }
	inline TransformU5BU5D_t3764228911* get_m_Targets_5() const { return ___m_Targets_5; }
	inline TransformU5BU5D_t3764228911** get_address_of_m_Targets_5() { return &___m_Targets_5; }
	inline void set_m_Targets_5(TransformU5BU5D_t3764228911* value)
	{
		___m_Targets_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Targets_5, value);
	}

	inline static int32_t get_offset_of_m_Camera_6() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_Camera_6)); }
	inline Camera_t189460977 * get_m_Camera_6() const { return ___m_Camera_6; }
	inline Camera_t189460977 ** get_address_of_m_Camera_6() { return &___m_Camera_6; }
	inline void set_m_Camera_6(Camera_t189460977 * value)
	{
		___m_Camera_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_6, value);
	}

	inline static int32_t get_offset_of_m_ZoomSpeed_7() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_ZoomSpeed_7)); }
	inline float get_m_ZoomSpeed_7() const { return ___m_ZoomSpeed_7; }
	inline float* get_address_of_m_ZoomSpeed_7() { return &___m_ZoomSpeed_7; }
	inline void set_m_ZoomSpeed_7(float value)
	{
		___m_ZoomSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_MoveVelocity_8() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_MoveVelocity_8)); }
	inline Vector3_t2243707580  get_m_MoveVelocity_8() const { return ___m_MoveVelocity_8; }
	inline Vector3_t2243707580 * get_address_of_m_MoveVelocity_8() { return &___m_MoveVelocity_8; }
	inline void set_m_MoveVelocity_8(Vector3_t2243707580  value)
	{
		___m_MoveVelocity_8 = value;
	}

	inline static int32_t get_offset_of_m_DesiredPosition_9() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___m_DesiredPosition_9)); }
	inline Vector3_t2243707580  get_m_DesiredPosition_9() const { return ___m_DesiredPosition_9; }
	inline Vector3_t2243707580 * get_address_of_m_DesiredPosition_9() { return &___m_DesiredPosition_9; }
	inline void set_m_DesiredPosition_9(Vector3_t2243707580  value)
	{
		___m_DesiredPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
