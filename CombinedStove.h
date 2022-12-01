#pragma once 

#include "ElectricStove.h"
#include "GasStove.h" 

class CombinedStove final : public ElectricStove, GasStove
{
public:
    CombinedStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color, int NumberBurners,
        float MaxPowerConsump, char EnergyClass, float CapacityOven,
        std::string GasType, int GasFlow, bool Ignition,
        float MaxTempOven, int NumberModesOven,
        int NumberBurnersElectric, int NumberBurnersGas)
        :  ElectricStove(FormFactor, Type,Model, Color, NumberBurners, MaxPowerConsump, EnergyClass),
           Stove(FormFactor, Type, Model, Color, NumberBurners),
           GasStove(FormFactor, Type, Model, Color, NumberBurners, GasType, GasFlow, Ignition),
           _MaxTempOven(MaxTempOven), _NumberModesOven(NumberModesOven),
           _NumberBurnersElectric(NumberBurnersElectric), _NumberBurnersGas(NumberBurnersGas)
    {
    };
protected:
    void PrintInfo() override;
    float _MaxTempOven; //Максимальная температура духовки
    int _NumberModesOven; //Количество режимов духовки
    int _NumberBurnersElectric; //Количество электрических конфорок
    int _NumberBurnersGas; //Количество газовых конфорок
};