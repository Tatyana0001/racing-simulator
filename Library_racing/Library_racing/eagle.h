#pragma once
#include <string>
#include "TC_fly.h"
#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class eagle : public TC_fly {
    public:
        LIB_API std::string name() override;
        LIB_API int speed() override;
    };
}