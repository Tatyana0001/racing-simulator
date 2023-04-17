#pragma once
#include<string>
#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
namespace Library_racing
{
    class TC_fly {
    public:
        LIB_API virtual std::string name();
        LIB_API virtual int speed();
    };
}