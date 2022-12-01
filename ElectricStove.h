#pragma once 

#include "Stove.h"

//Варочная электрическая плита
class ElectricStove : virtual public Stove
{
public:
    ElectricStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color, 
        int NumberBurners,float MaxPowerConsump, char EnergyClass 
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners), _MaxPowerConsump(MaxPowerConsump), _EnergyClass(EnergyClass){};

    void PrintInfo() override;
protected:
    float _MaxPowerConsump; //Максимальная потребляймая мощность
    char _EnergyClass; //Класс энергопотребления
};

//Настольная электрическая плита
class ElectricCompactStove final : public ElectricStove
{
public:
    ElectricCompactStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color,
        int NumberBurners, float MaxPowerConsump, char EnergyClass
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners),
        ElectricStove(FormFactor, Type, Model, Color, NumberBurners, MaxPowerConsump, EnergyClass)
    {
    };

    void PrintInfo() override;
private:
    //Здесь при желании можно выделить и описать какой-будь параметр, который отличает настольную плиту от полноразмерной
};

//Полноразмерная электрическая плита(помимо комфорок есть духовка)
class ElectricFullStove final : public ElectricStove
{
public:
    ElectricFullStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color, int NumberBurners, 
        float MaxPowerConsump, char EnergyClass, float CapacityOven, float MaxTempOven ,int NumberModesOven
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners), 
        ElectricStove(FormFactor, Type, Model, Color, NumberBurners,MaxPowerConsump, EnergyClass),
        _CapacityOven(CapacityOven), _MaxTempOven(MaxTempOven), _NumberModesOven(NumberModesOven)
    {
    };

    void PrintInfo() override;
private:
    float _CapacityOven; //Объем духовки
    float _MaxTempOven; //Максимальная температура духовки
    int _NumberModesOven; //Количество режимов духовки
};

