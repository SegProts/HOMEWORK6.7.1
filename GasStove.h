#pragma once 

#include "Stove.h"

//Варочная газовая плита
class GasStove : virtual public Stove
{
public:
    GasStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color,
        int NumberBurners, std::string GasType, int GasFlow, bool Ignition
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners), _GasType(GasType), _GasFlow(GasFlow), _Ignition(Ignition)
    {
    };
    void PrintInfo() override;

protected:
    std::string _GasType; //Вид используемого газа
    int _GasFlow; //Расход газа
    bool _Ignition; //Электроподжиг конфорок
};

//Настольная газовая плита
class GasCompactStove final : public GasStove
{
public:
    GasCompactStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color,
        int NumberBurners, std::string GasType, int GasFlow, bool Ignition
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners),
        GasStove(FormFactor, Type, Model, Color, NumberBurners, GasType, GasFlow, Ignition)
    {
    };

    void PrintInfo() override;
private:
    //Здесь при желании можно выделить и описать какой-будь параметр, который отличает настольную плиту от полноразмерной
};

//Полноразмерная электрическая плита(помимо комфорок есть духовка)
class GasFullStove final : public GasStove
{
public:
    GasFullStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color,
        int NumberBurners, std::string GasType, int GasFlow, bool Ignition,
        float CapacityOven, float MaxTempOven, int NumberModesOven
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners),
        GasStove(FormFactor, Type, Model, Color, NumberBurners, GasType, GasFlow, Ignition),
        _CapacityOven(CapacityOven), _MaxTempOven(MaxTempOven), _NumberModesOven(NumberModesOven)
    {
    };

    void PrintInfo() override;
private:
    float _CapacityOven; //Объем духовки
    float _MaxTempOven; //Максимальная температура духовки
    int _NumberModesOven; //Количество режимов духовки
};