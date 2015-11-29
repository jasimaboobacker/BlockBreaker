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

struct t5_2;
struct t5_2_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_428 (t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_429 (t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_430 (t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_2_marshal(const t5_2& unmarshaled, t5_2_marshaled& marshaled);
extern "C" void t5_2_marshal_back(const t5_2_marshaled& marshaled, t5_2& unmarshaled);
extern "C" void t5_2_marshal_cleanup(t5_2_marshaled& marshaled);
