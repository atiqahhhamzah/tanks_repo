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

// Complete.GameManager
struct GameManager_t1280073489;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Complete.TankManager
struct TankManager_t3407860407;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Complete.GameManager::.ctor()
extern "C"  void GameManager__ctor_m3851895417 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::Start()
extern "C"  void GameManager_Start_m2486843441 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::SpawnAllTanks()
extern "C"  void GameManager_SpawnAllTanks_m638198508 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::SetCameraTargets()
extern "C"  void GameManager_SetCameraTargets_m3392636156 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::GameLoop()
extern "C"  Il2CppObject * GameManager_GameLoop_m3621771901 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::RoundStarting()
extern "C"  Il2CppObject * GameManager_RoundStarting_m4266629957 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::RoundPlaying()
extern "C"  Il2CppObject * GameManager_RoundPlaying_m2302413461 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::RoundEnding()
extern "C"  Il2CppObject * GameManager_RoundEnding_m4254855796 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Complete.GameManager::OneTankLeft()
extern "C"  bool GameManager_OneTankLeft_m1296750732 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complete.TankManager Complete.GameManager::GetRoundWinner()
extern "C"  TankManager_t3407860407 * GameManager_GetRoundWinner_m202216231 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complete.TankManager Complete.GameManager::GetGameWinner()
extern "C"  TankManager_t3407860407 * GameManager_GetGameWinner_m699706775 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Complete.GameManager::EndMessage()
extern "C"  String_t* GameManager_EndMessage_m4194662718 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::ResetAllTanks()
extern "C"  void GameManager_ResetAllTanks_m1036159492 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::EnableTankControl()
extern "C"  void GameManager_EnableTankControl_m796778819 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::DisableTankControl()
extern "C"  void GameManager_DisableTankControl_m3069770138 (GameManager_t1280073489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
