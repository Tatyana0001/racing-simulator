#pragma once
#include <string>
#include "TC_data.h"
#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class centaur : public TC_data {
    public:
        LIB_API std::string name() override;
        LIB_API int speed() override;
    };
}