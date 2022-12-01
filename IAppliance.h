#pragma once  

#include <iostream>

class IAppliance
{
public:
    virtual void PrintInfo() = 0;
    virtual ~IAppliance() = default;
};