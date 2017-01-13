#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Complete.TankMovement
struct TankMovement_t3802747291;
// Complete.TankShooting
struct TankShooting_t513723283;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Complete.TankManager
struct  TankManager_t3407860407  : public Il2CppObject
{
public:
	// UnityEngine.Color Complete.TankManager::m_PlayerColor
	Color_t2020392075  ___m_PlayerColor_0;
	// UnityEngine.Transform Complete.TankManager::m_SpawnPoint
	Transform_t3275118058 * ___m_SpawnPoint_1;
	// System.Int32 Complete.TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String Complete.TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject Complete.TankManager::m_Instance
	GameObject_t1756533147 * ___m_Instance_4;
	// System.Int32 Complete.TankManager::m_Wins
	int32_t ___m_Wins_5;
	// Complete.TankMovement Complete.TankManager::m_Movement
	TankMovement_t3802747291 * ___m_Movement_6;
	// Complete.TankShooting Complete.TankManager::m_Shooting
	TankShooting_t513723283 * ___m_Shooting_7;
	// UnityEngine.GameObject Complete.TankManager::m_CanvasGameObject
	GameObject_t1756533147 * ___m_CanvasGameObject_8;

public:
	inline static int32_t get_offset_of_m_PlayerColor_0() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_PlayerColor_0)); }
	inline Color_t2020392075  get_m_PlayerColor_0() const { return ___m_PlayerColor_0; }
	inline Color_t2020392075 * get_address_of_m_PlayerColor_0() { return &___m_PlayerColor_0; }
	inline void set_m_PlayerColor_0(Color_t2020392075  value)
	{
		___m_PlayerColor_0 = value;
	}

	inline static int32_t get_offset_of_m_SpawnPoint_1() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_SpawnPoint_1)); }
	inline Transform_t3275118058 * get_m_SpawnPoint_1() const { return ___m_SpawnPoint_1; }
	inline Transform_t3275118058 ** get_address_of_m_SpawnPoint_1() { return &___m_SpawnPoint_1; }
	inline void set_m_SpawnPoint_1(Transform_t3275118058 * value)
	{
		___m_SpawnPoint_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpawnPoint_1, value);
	}

	inline static int32_t get_offset_of_m_PlayerNumber_2() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_PlayerNumber_2)); }
	inline int32_t get_m_PlayerNumber_2() const { return ___m_PlayerNumber_2; }
	inline int32_t* get_address_of_m_PlayerNumber_2() { return &___m_PlayerNumber_2; }
	inline void set_m_PlayerNumber_2(int32_t value)
	{
		___m_PlayerNumber_2 = value;
	}

	inline static int32_t get_offset_of_m_ColoredPlayerText_3() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_ColoredPlayerText_3)); }
	inline String_t* get_m_ColoredPlayerText_3() const { return ___m_ColoredPlayerText_3; }
	inline String_t** get_address_of_m_ColoredPlayerText_3() { return &___m_ColoredPlayerText_3; }
	inline void set_m_ColoredPlayerText_3(String_t* value)
	{
		___m_ColoredPlayerText_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ColoredPlayerText_3, value);
	}

	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_Instance_4)); }
	inline GameObject_t1756533147 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline GameObject_t1756533147 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(GameObject_t1756533147 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Instance_4, value);
	}

	inline static int32_t get_offset_of_m_Wins_5() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_Wins_5)); }
	inline int32_t get_m_Wins_5() const { return ___m_Wins_5; }
	inline int32_t* get_address_of_m_Wins_5() { return &___m_Wins_5; }
	inline void set_m_Wins_5(int32_t value)
	{
		___m_Wins_5 = value;
	}

	inline static int32_t get_offset_of_m_Movement_6() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_Movement_6)); }
	inline TankMovement_t3802747291 * get_m_Movement_6() const { return ___m_Movement_6; }
	inline TankMovement_t3802747291 ** get_address_of_m_Movement_6() { return &___m_Movement_6; }
	inline void set_m_Movement_6(TankMovement_t3802747291 * value)
	{
		___m_Movement_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Movement_6, value);
	}

	inline static int32_t get_offset_of_m_Shooting_7() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_Shooting_7)); }
	inline TankShooting_t513723283 * get_m_Shooting_7() const { return ___m_Shooting_7; }
	inline TankShooting_t513723283 ** get_address_of_m_Shooting_7() { return &___m_Shooting_7; }
	inline void set_m_Shooting_7(TankShooting_t513723283 * value)
	{
		___m_Shooting_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shooting_7, value);
	}

	inline static int32_t get_offset_of_m_CanvasGameObject_8() { return static_cast<int32_t>(offsetof(TankManager_t3407860407, ___m_CanvasGameObject_8)); }
	inline GameObject_t1756533147 * get_m_CanvasGameObject_8() const { return ___m_CanvasGameObject_8; }
	inline GameObject_t1756533147 ** get_address_of_m_CanvasGameObject_8() { return &___m_CanvasGameObject_8; }
	inline void set_m_CanvasGameObject_8(GameObject_t1756533147 * value)
	{
		___m_CanvasGameObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CanvasGameObject_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
