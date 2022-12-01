#pragma once
class Params
{
public:
    struct ElectricCompactStoveparam
    {
        //Я не смог придумать параметр который отличал бы любую плиту от настольной плиты
        //Ее отличает значение параметра FormFactor, но он есть у всех
        //Но я поместил часть реализации вывода информации в класс ElectricStove для совместимости 
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //Количество конфорок
        float MaxPowerConsump; //Максимальная потребляймая мощность
        char EnergyClass; //Класс энерн
    };

    struct ElectricFullStoveparam
    {
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //Количество конфорок
        float MaxPowerConsump; //Максимальная потребляймая мощность
        char EnergyClass;
        float CapacityOven; //Объем духовки
        float MaxTempOven;
        int NumberModesOven;
    };

    struct GasCompactStoveparam
    {
        //Я не смог придумать параметр который отличал бы любую плиту от настольной плиты
        //Ее отличает значение параметра FormFactor, но он есть у всех
        //Но я поместил часть реализации вывода информации в класс ElectricStove для совместимости
        //и простоты вывода параметров(данные выводяться постепенно в соотвествии с иерархией классов)
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //Количество конфорок
        std::string GasType; //Вид используемого газа
        int GasFlow; //Расход газа
        bool Ignition; //Электроподжиг конфорок
    };

    struct GasFullStoveparam
    {
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //Количество конфорок
        std::string GasType; //Вид используемого газа
        int GasFlow; //Расход газа
        bool Ignition; //Электроподжиг конфорок
        float CapacityOven; //Объем духовки
        float MaxTempOven;
        int NumberModesOven;
    };

    struct CombinedStoveStoveparam
    {
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //Количество конфорок
        float MaxPowerConsump; //Максимальная потребляймая мощность
        char EnergyClass;
        float CapacityOven; //Объем духовки
        float MaxTempOven;
        int NumberModesOven;
        std::string GasType; //Вид используемого газа
        int GasFlow; //Расход газа
        bool Ignition; //Электроподжиг конфорок
        int NumberBurnersElectric; //Количество электрических конфорок
        int NumberBurnersGas; //Количество газовых конфорок
    };
};

