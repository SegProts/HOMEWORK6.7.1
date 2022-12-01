#include "CombinedStove.h"

void CombinedStove::PrintInfo()
{
    //Даные от класса электричекой плиты
    ElectricStove::PrintInfo();
    std::cout << "  Максимальная температура духовки: " << _MaxTempOven << " \xB0" << std::endl;
    std::cout << "  Количество режимов духовки: " << _NumberModesOven << std::endl;

    //Недостающие данные из класса газовой плиты
    std::cout << "  Вид используемого газа: " << _GasType << std::endl;
    std::cout << "  Расход газа: " << _GasFlow << " г/час" << std::endl;
    if (_Ignition) { std::cout << "  Электроподжиг: есть" << std::endl; }
    else { std::cout << "  Электроподжиг: нету" << std::endl; }

    //Новые данные для класса комбинированой плиты
	std::cout << "  Количество электрических конфорок: " << _NumberBurnersElectric << std::endl;
	std::cout << "  Количество газовых конфорок: " << _NumberBurnersGas << std::endl;
}