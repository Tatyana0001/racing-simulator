#pragma once
#include <string>
#include "camel.h"
#include "camel-fast.h"
#include "centaur.h"
#include "all-terrain boots.h"
#include "broom.h"
#include "eagle.h"
#include "magic carpet.h"
#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class General_race {
    public:
        LIB_API auto race(const std::string*& TC, int lenght);
    };
}