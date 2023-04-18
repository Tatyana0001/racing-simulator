#pragma once
#include <string>
#include "broom.h"
#include "eagle.h"
#include "magic carpet.h"
#include <unordered_map>


#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class Air_race {
    public:
        LIB_API void race(std::unordered_map<std::string, double>& air, int lenght);
    };
}