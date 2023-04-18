#pragma once
#include <string>
#include "camel.h"
#include "camel-fast.h"
#include "centaur.h"
#include "all-terrain boots.h"
#include <unordered_map>

#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class Ground_race {
    public:
        LIB_API void race(std::unordered_map<std::string, double>&ground, int lenght);
    };
}