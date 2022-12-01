#pragma once
#include "IAppliance.h"

class Stove : virtual public IAppliance
{
public:
    virtual void PrintInfo() = 0;
    Stove(std::string FormFactor, std::string Type, std::string Model, std::string Color, int NumberBurners) :
        _FormFactor(FormFactor), _Type(Type), _Model(Model), _Color(Color), _NumberBurners(NumberBurners){};
protected:
    std::string _FormFactor; //Формфактор плиты(полноразмерная или настольная)
    std::string _Type; //Тип плиты(электрическая или газовая)
    std::string _Model;
    std::string _Color;
    int _NumberBurners; //Количество конфорок
};

