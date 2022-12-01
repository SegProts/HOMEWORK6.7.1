#include "ElectricStove.h"

void ElectricStove::PrintInfo()
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "              Варочная плита: "  << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "  Форм-фактор: " << _FormFactor << std::endl;
    std::cout << "  Тип: " << _Type << std::endl;
    std::cout << "  Модель: " << _Model << std::endl;
    std::cout << "  Цвет: " << _Color << std::endl;
    std::cout << "  Количество конфорок: " << _NumberBurners << std::endl;
    std::cout << "  Максимальная потребляймая мощность: " << _MaxPowerConsump << " кВт" << std::endl;
    std::cout << "  Класс энергопотребления: " << _EnergyClass << std::endl;
}

void ElectricCompactStove::PrintInfo()
{
    ElectricStove::PrintInfo();
}

void ElectricFullStove::PrintInfo()
{
    ElectricStove::PrintInfo();
    std::cout << "  Объеми духовки: " << _CapacityOven << " л" << std::endl;
    std::cout << "  Максимальная температура духовки: " << _MaxTempOven << " \xB0" << std::endl;
    std::cout << "  Количество режимов духовки: " << _NumberModesOven << std::endl;
}