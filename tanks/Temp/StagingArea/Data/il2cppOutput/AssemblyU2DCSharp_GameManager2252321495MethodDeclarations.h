#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameManager
struct GameManager_t2252321495;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// TankManager
struct TankManager_t1518106565;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::FixedUpdate()
extern "C"  void GameManager_FixedUpdate_m366222337 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SpawnPowerUps()
extern "C"  void GameManager_SpawnPowerUps_m3828249234 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SpawnAllTanks()
extern "C"  void GameManager_SpawnAllTanks_m4208256951 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SetCameraTargets()
extern "C"  void GameManager_SetCameraTargets_m2136827367 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::GameLoop()
extern "C"  Il2CppObject * GameManager_GameLoop_m2983069862 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundStarting()
extern "C"  Il2CppObject * GameManager_RoundStarting_m4017140100 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundPlaying()
extern "C"  Il2CppObject * GameManager_RoundPlaying_m527142760 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundEnding()
extern "C"  Il2CppObject * GameManager_RoundEnding_m2845837737 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::OneTankLeft()
extern "C"  bool GameManager_OneTankLeft_m1340475421 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TankManager GameManager::GetRoundWinner()
extern "C"  TankManager_t1518106565 * GameManager_GetRoundWinner_m1181682487 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TankManager GameManager::GetGameWinner()
extern "C"  TankManager_t1518106565 * GameManager_GetGameWinner_m3979791935 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameManager::EndMessage()
extern "C"  String_t* GameManager_EndMessage_m3203853851 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ResetAllTanks()
extern "C"  void GameManager_ResetAllTanks_m886578893 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::EnableTankControl()
extern "C"  void GameManager_EnableTankControl_m1856936 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DisableTankControl()
extern "C"  void GameManager_DisableTankControl_m2758432441 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
