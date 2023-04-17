#pragma once
#include <string>
#include "camel.h"
#include "camel-fast.h"
#include "centaur.h"
#include "all-terrain boots.h"
#include <unordered_map>
#include <map>

#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class Ground_race {
    public:
        //LIB_API bool sort_race(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b);
        LIB_API void race(std::string*& TC, std::unordered_map<std::string, double>ground, int lenght);
    };
}