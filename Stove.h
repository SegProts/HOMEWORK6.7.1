#pragma once
#include "IAppliance.h"

class Stove : virtual public IAppliance
{
public:
    virtual void PrintInfo() = 0;
    Stove(std::string FormFactor, std::string Type, std::string Model, std::string Color, int NumberBurners) :
        _FormFactor(FormFactor), _Type(Type), _Model(Model), _Color(Color), _NumberBurners(NumberBurners){};
protected:
    std::string _FormFactor; //���������� �����(�������������� ��� ����������)
    std::string _Type; //��� �����(������������� ��� �������)
    std::string _Model;
    std::string _Color;
    int _NumberBurners; //���������� ��������
};

