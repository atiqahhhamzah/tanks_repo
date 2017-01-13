#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// CameraControl
struct CameraControl_t2838268856;
// UnityEngine.UI.Text
struct Text_t356221433;
// TankManager[]
struct TankManagerU5BU5D_t2930188168;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// TankManager
struct TankManager_t1518106565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameManager::m_heal
	GameObject_t1756533147 * ___m_heal_2;
	// System.Int32 GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_3;
	// System.Single GameManager::m_StartDelay
	float ___m_StartDelay_4;
	// System.Single GameManager::m_EndDelay
	float ___m_EndDelay_5;
	// System.Single GameManager::maxTime
	float ___maxTime_6;
	// System.Single GameManager::minTime
	float ___minTime_7;
	// CameraControl GameManager::m_CameraControl
	CameraControl_t2838268856 * ___m_CameraControl_8;
	// UnityEngine.UI.Text GameManager::m_MessageText
	Text_t356221433 * ___m_MessageText_9;
	// UnityEngine.UI.Text GameManager::LinkText
	Text_t356221433 * ___LinkText_10;
	// UnityEngine.GameObject GameManager::m_TankPrefab
	GameObject_t1756533147 * ___m_TankPrefab_11;
	// TankManager[] GameManager::m_Tanks
	TankManagerU5BU5D_t2930188168* ___m_Tanks_12;
	// System.Single GameManager::time
	float ___time_13;
	// System.Single GameManager::spawnTime
	float ___spawnTime_14;
	// System.Int32 GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_15;
	// UnityEngine.WaitForSeconds GameManager::m_StartWait
	WaitForSeconds_t3839502067 * ___m_StartWait_16;
	// UnityEngine.WaitForSeconds GameManager::m_EndWait
	WaitForSeconds_t3839502067 * ___m_EndWait_17;
	// TankManager GameManager::m_RoundWinner
	TankManager_t1518106565 * ___m_RoundWinner_18;
	// TankManager GameManager::m_GameWinner
	TankManager_t1518106565 * ___m_GameWinner_19;

public:
	inline static int32_t get_offset_of_m_heal_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_heal_2)); }
	inline GameObject_t1756533147 * get_m_heal_2() const { return ___m_heal_2; }
	inline GameObject_t1756533147 ** get_address_of_m_heal_2() { return &___m_heal_2; }
	inline void set_m_heal_2(GameObject_t1756533147 * value)
	{
		___m_heal_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_heal_2, value);
	}

	inline static int32_t get_offset_of_m_NumRoundsToWin_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_NumRoundsToWin_3)); }
	inline int32_t get_m_NumRoundsToWin_3() const { return ___m_NumRoundsToWin_3; }
	inline int32_t* get_address_of_m_NumRoundsToWin_3() { return &___m_NumRoundsToWin_3; }
	inline void set_m_NumRoundsToWin_3(int32_t value)
	{
		___m_NumRoundsToWin_3 = value;
	}

	inline static int32_t get_offset_of_m_StartDelay_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_StartDelay_4)); }
	inline float get_m_StartDelay_4() const { return ___m_StartDelay_4; }
	inline float* get_address_of_m_StartDelay_4() { return &___m_StartDelay_4; }
	inline void set_m_StartDelay_4(float value)
	{
		___m_StartDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_EndDelay_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_EndDelay_5)); }
	inline float get_m_EndDelay_5() const { return ___m_EndDelay_5; }
	inline float* get_address_of_m_EndDelay_5() { return &___m_EndDelay_5; }
	inline void set_m_EndDelay_5(float value)
	{
		___m_EndDelay_5 = value;
	}

	inline static int32_t get_offset_of_maxTime_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___maxTime_6)); }
	inline float get_maxTime_6() const { return ___maxTime_6; }
	inline float* get_address_of_maxTime_6() { return &___maxTime_6; }
	inline void set_maxTime_6(float value)
	{
		___maxTime_6 = value;
	}

	inline static int32_t get_offset_of_minTime_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___minTime_7)); }
	inline float get_minTime_7() const { return ___minTime_7; }
	inline float* get_address_of_minTime_7() { return &___minTime_7; }
	inline void set_minTime_7(float value)
	{
		___minTime_7 = value;
	}

	inline static int32_t get_offset_of_m_CameraControl_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_CameraControl_8)); }
	inline CameraControl_t2838268856 * get_m_CameraControl_8() const { return ___m_CameraControl_8; }
	inline CameraControl_t2838268856 ** get_address_of_m_CameraControl_8() { return &___m_CameraControl_8; }
	inline void set_m_CameraControl_8(CameraControl_t2838268856 * value)
	{
		___m_CameraControl_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraControl_8, value);
	}

	inline static int32_t get_offset_of_m_MessageText_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_MessageText_9)); }
	inline Text_t356221433 * get_m_MessageText_9() const { return ___m_MessageText_9; }
	inline Text_t356221433 ** get_address_of_m_MessageText_9() { return &___m_MessageText_9; }
	inline void set_m_MessageText_9(Text_t356221433 * value)
	{
		___m_MessageText_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_MessageText_9, value);
	}

	inline static int32_t get_offset_of_LinkText_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___LinkText_10)); }
	inline Text_t356221433 * get_LinkText_10() const { return ___LinkText_10; }
	inline Text_t356221433 ** get_address_of_LinkText_10() { return &___LinkText_10; }
	inline void set_LinkText_10(Text_t356221433 * value)
	{
		___LinkText_10 = value;
		Il2CppCodeGenWriteBarrier(&___LinkText_10, value);
	}

	inline static int32_t get_offset_of_m_TankPrefab_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_TankPrefab_11)); }
	inline GameObject_t1756533147 * get_m_TankPrefab_11() const { return ___m_TankPrefab_11; }
	inline GameObject_t1756533147 ** get_address_of_m_TankPrefab_11() { return &___m_TankPrefab_11; }
	inline void set_m_TankPrefab_11(GameObject_t1756533147 * value)
	{
		___m_TankPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_TankPrefab_11, value);
	}

	inline static int32_t get_offset_of_m_Tanks_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_Tanks_12)); }
	inline TankManagerU5BU5D_t2930188168* get_m_Tanks_12() const { return ___m_Tanks_12; }
	inline TankManagerU5BU5D_t2930188168** get_address_of_m_Tanks_12() { return &___m_Tanks_12; }
	inline void set_m_Tanks_12(TankManagerU5BU5D_t2930188168* value)
	{
		___m_Tanks_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Tanks_12, value);
	}

	inline static int32_t get_offset_of_time_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___time_13)); }
	inline float get_time_13() const { return ___time_13; }
	inline float* get_address_of_time_13() { return &___time_13; }
	inline void set_time_13(float value)
	{
		___time_13 = value;
	}

	inline static int32_t get_offset_of_spawnTime_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___spawnTime_14)); }
	inline float get_spawnTime_14() const { return ___spawnTime_14; }
	inline float* get_address_of_spawnTime_14() { return &___spawnTime_14; }
	inline void set_spawnTime_14(float value)
	{
		___spawnTime_14 = value;
	}

	inline static int32_t get_offset_of_m_RoundNumber_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_RoundNumber_15)); }
	inline int32_t get_m_RoundNumber_15() const { return ___m_RoundNumber_15; }
	inline int32_t* get_address_of_m_RoundNumber_15() { return &___m_RoundNumber_15; }
	inline void set_m_RoundNumber_15(int32_t value)
	{
		___m_RoundNumber_15 = value;
	}

	inline static int32_t get_offset_of_m_StartWait_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_StartWait_16)); }
	inline WaitForSeconds_t3839502067 * get_m_StartWait_16() const { return ___m_StartWait_16; }
	inline WaitForSeconds_t3839502067 ** get_address_of_m_StartWait_16() { return &___m_StartWait_16; }
	inline void set_m_StartWait_16(WaitForSeconds_t3839502067 * value)
	{
		___m_StartWait_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_StartWait_16, value);
	}

	inline static int32_t get_offset_of_m_EndWait_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_EndWait_17)); }
	inline WaitForSeconds_t3839502067 * get_m_EndWait_17() const { return ___m_EndWait_17; }
	inline WaitForSeconds_t3839502067 ** get_address_of_m_EndWait_17() { return &___m_EndWait_17; }
	inline void set_m_EndWait_17(WaitForSeconds_t3839502067 * value)
	{
		___m_EndWait_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_EndWait_17, value);
	}

	inline static int32_t get_offset_of_m_RoundWinner_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_RoundWinner_18)); }
	inline TankManager_t1518106565 * get_m_RoundWinner_18() const { return ___m_RoundWinner_18; }
	inline TankManager_t1518106565 ** get_address_of_m_RoundWinner_18() { return &___m_RoundWinner_18; }
	inline void set_m_RoundWinner_18(TankManager_t1518106565 * value)
	{
		___m_RoundWinner_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_RoundWinner_18, value);
	}

	inline static int32_t get_offset_of_m_GameWinner_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_GameWinner_19)); }
	inline TankManager_t1518106565 * get_m_GameWinner_19() const { return ___m_GameWinner_19; }
	inline TankManager_t1518106565 ** get_address_of_m_GameWinner_19() { return &___m_GameWinner_19; }
	inline void set_m_GameWinner_19(TankManager_t1518106565 * value)
	{
		___m_GameWinner_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameWinner_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
