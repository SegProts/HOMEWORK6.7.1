#include "GasStove.h"

void GasStove::PrintInfo()
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "              Варочная плита: " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "  Форм-фактор: " << _FormFactor << std::endl;
    std::cout << "  Тип: " << _Type << std::endl;
    std::cout << "  Модель: " << _Model << std::endl;
    std::cout << "  Цвет: " << _Color << std::endl;
    std::cout << "  Количество конфорок: " << _NumberBurners << std::endl;
    std::cout << "  Вид используемого газа: " << _GasType << std::endl;
    std::cout << "  Расход газа: " << _GasFlow << " г/час" << std::endl;
    if(_Ignition){ std::cout << "  Электроподжиг: есть" << std::endl; }
    else { std::cout << "  Электроподжиг: нету" << std::endl; }
}

void GasCompactStove::PrintInfo()
{
    GasStove::PrintInfo();
}

void GasFullStove::PrintInfo()
{
    GasStove::PrintInfo();
    std::cout << "  Объеми духовки: " << _CapacityOven << " л" << std::endl;
    std::cout << "  Максимальная температура духовки: " << _MaxTempOven << " \xB0" << std::endl;
    std::cout << "  Количество режимов духовки: " << _NumberModesOven << std::endl;
}