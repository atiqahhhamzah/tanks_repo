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

// Complete.ShellExplosion
struct ShellExplosion_t1270022755;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Complete.ShellExplosion::.ctor()
extern "C"  void ShellExplosion__ctor_m792838663 (ShellExplosion_t1270022755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.ShellExplosion::Start()
extern "C"  void ShellExplosion_Start_m541160827 (ShellExplosion_t1270022755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void ShellExplosion_OnTriggerEnter_m2175765819 (ShellExplosion_t1270022755 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Complete.ShellExplosion::CalculateDamage(UnityEngine.Vector3)
extern "C"  float ShellExplosion_CalculateDamage_m1195781151 (ShellExplosion_t1270022755 * __this, Vector3_t2243707580  ___targetPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
