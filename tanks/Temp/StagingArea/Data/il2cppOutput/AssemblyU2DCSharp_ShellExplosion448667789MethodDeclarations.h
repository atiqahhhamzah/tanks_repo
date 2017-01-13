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

// ShellExplosion
struct ShellExplosion_t448667789;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ShellExplosion::.ctor()
extern "C"  void ShellExplosion__ctor_m2707178300 (ShellExplosion_t448667789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShellExplosion::Start()
extern "C"  void ShellExplosion_Start_m1993596748 (ShellExplosion_t448667789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void ShellExplosion_OnTriggerEnter_m3253562960 (ShellExplosion_t448667789 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShellExplosion::CalculateDamage(UnityEngine.Vector3)
extern "C"  float ShellExplosion_CalculateDamage_m2629024124 (ShellExplosion_t448667789 * __this, Vector3_t2243707580  ___targetPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
