#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Complete.CameraControl
struct CameraControl_t4190994924;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Complete.TankManager[]
struct TankManagerU5BU5D_t2991001742;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// Complete.TankManager
struct TankManager_t3407860407;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Complete.GameManager
struct  GameManager_t1280073489  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Complete.GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_2;
	// System.Single Complete.GameManager::m_StartDelay
	float ___m_StartDelay_3;
	// System.Single Complete.GameManager::m_EndDelay
	float ___m_EndDelay_4;
	// Complete.CameraControl Complete.GameManager::m_CameraControl
	CameraControl_t4190994924 * ___m_CameraControl_5;
	// UnityEngine.UI.Text Complete.GameManager::m_MessageText
	Text_t356221433 * ___m_MessageText_6;
	// UnityEngine.GameObject Complete.GameManager::m_TankPrefab
	GameObject_t1756533147 * ___m_TankPrefab_7;
	// Complete.TankManager[] Complete.GameManager::m_Tanks
	TankManagerU5BU5D_t2991001742* ___m_Tanks_8;
	// System.Int32 Complete.GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_9;
	// UnityEngine.WaitForSeconds Complete.GameManager::m_StartWait
	WaitForSeconds_t3839502067 * ___m_StartWait_10;
	// UnityEngine.WaitForSeconds Complete.GameManager::m_EndWait
	WaitForSeconds_t3839502067 * ___m_EndWait_11;
	// Complete.TankManager Complete.GameManager::m_RoundWinner
	TankManager_t3407860407 * ___m_RoundWinner_12;
	// Complete.TankManager Complete.GameManager::m_GameWinner
	TankManager_t3407860407 * ___m_GameWinner_13;

public:
	inline static int32_t get_offset_of_m_NumRoundsToWin_2() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_NumRoundsToWin_2)); }
	inline int32_t get_m_NumRoundsToWin_2() const { return ___m_NumRoundsToWin_2; }
	inline int32_t* get_address_of_m_NumRoundsToWin_2() { return &___m_NumRoundsToWin_2; }
	inline void set_m_NumRoundsToWin_2(int32_t value)
	{
		___m_NumRoundsToWin_2 = value;
	}

	inline static int32_t get_offset_of_m_StartDelay_3() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_StartDelay_3)); }
	inline float get_m_StartDelay_3() const { return ___m_StartDelay_3; }
	inline float* get_address_of_m_StartDelay_3() { return &___m_StartDelay_3; }
	inline void set_m_StartDelay_3(float value)
	{
		___m_StartDelay_3 = value;
	}

	inline static int32_t get_offset_of_m_EndDelay_4() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_EndDelay_4)); }
	inline float get_m_EndDelay_4() const { return ___m_EndDelay_4; }
	inline float* get_address_of_m_EndDelay_4() { return &___m_EndDelay_4; }
	inline void set_m_EndDelay_4(float value)
	{
		___m_EndDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_CameraControl_5() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_CameraControl_5)); }
	inline CameraControl_t4190994924 * get_m_CameraControl_5() const { return ___m_CameraControl_5; }
	inline CameraControl_t4190994924 ** get_address_of_m_CameraControl_5() { return &___m_CameraControl_5; }
	inline void set_m_CameraControl_5(CameraControl_t4190994924 * value)
	{
		___m_CameraControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraControl_5, value);
	}

	inline static int32_t get_offset_of_m_MessageText_6() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_MessageText_6)); }
	inline Text_t356221433 * get_m_MessageText_6() const { return ___m_MessageText_6; }
	inline Text_t356221433 ** get_address_of_m_MessageText_6() { return &___m_MessageText_6; }
	inline void set_m_MessageText_6(Text_t356221433 * value)
	{
		___m_MessageText_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_MessageText_6, value);
	}

	inline static int32_t get_offset_of_m_TankPrefab_7() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_TankPrefab_7)); }
	inline GameObject_t1756533147 * get_m_TankPrefab_7() const { return ___m_TankPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_m_TankPrefab_7() { return &___m_TankPrefab_7; }
	inline void set_m_TankPrefab_7(GameObject_t1756533147 * value)
	{
		___m_TankPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_TankPrefab_7, value);
	}

	inline static int32_t get_offset_of_m_Tanks_8() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_Tanks_8)); }
	inline TankManagerU5BU5D_t2991001742* get_m_Tanks_8() const { return ___m_Tanks_8; }
	inline TankManagerU5BU5D_t2991001742** get_address_of_m_Tanks_8() { return &___m_Tanks_8; }
	inline void set_m_Tanks_8(TankManagerU5BU5D_t2991001742* value)
	{
		___m_Tanks_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Tanks_8, value);
	}

	inline static int32_t get_offset_of_m_RoundNumber_9() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_RoundNumber_9)); }
	inline int32_t get_m_RoundNumber_9() const { return ___m_RoundNumber_9; }
	inline int32_t* get_address_of_m_RoundNumber_9() { return &___m_RoundNumber_9; }
	inline void set_m_RoundNumber_9(int32_t value)
	{
		___m_RoundNumber_9 = value;
	}

	inline static int32_t get_offset_of_m_StartWait_10() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_StartWait_10)); }
	inline WaitForSeconds_t3839502067 * get_m_StartWait_10() const { return ___m_StartWait_10; }
	inline WaitForSeconds_t3839502067 ** get_address_of_m_StartWait_10() { return &___m_StartWait_10; }
	inline void set_m_StartWait_10(WaitForSeconds_t3839502067 * value)
	{
		___m_StartWait_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_StartWait_10, value);
	}

	inline static int32_t get_offset_of_m_EndWait_11() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_EndWait_11)); }
	inline WaitForSeconds_t3839502067 * get_m_EndWait_11() const { return ___m_EndWait_11; }
	inline WaitForSeconds_t3839502067 ** get_address_of_m_EndWait_11() { return &___m_EndWait_11; }
	inline void set_m_EndWait_11(WaitForSeconds_t3839502067 * value)
	{
		___m_EndWait_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_EndWait_11, value);
	}

	inline static int32_t get_offset_of_m_RoundWinner_12() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_RoundWinner_12)); }
	inline TankManager_t3407860407 * get_m_RoundWinner_12() const { return ___m_RoundWinner_12; }
	inline TankManager_t3407860407 ** get_address_of_m_RoundWinner_12() { return &___m_RoundWinner_12; }
	inline void set_m_RoundWinner_12(TankManager_t3407860407 * value)
	{
		___m_RoundWinner_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_RoundWinner_12, value);
	}

	inline static int32_t get_offset_of_m_GameWinner_13() { return static_cast<int32_t>(offsetof(GameManager_t1280073489, ___m_GameWinner_13)); }
	inline TankManager_t3407860407 * get_m_GameWinner_13() const { return ___m_GameWinner_13; }
	inline TankManager_t3407860407 ** get_address_of_m_GameWinner_13() { return &___m_GameWinner_13; }
	inline void set_m_GameWinner_13(TankManager_t3407860407 * value)
	{
		___m_GameWinner_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameWinner_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
