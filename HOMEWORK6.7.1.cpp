#include <iostream>
#include "IAppliance.h"
#include "ElectricStove.h"
#include "GasStove.h"
#include "CombinedStove.h"
#include "Params.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    //Создание массива для товаров магазина
    IAppliance* grocery[5];

    //Создаем переменую для параметров настольную электрической плита(сделано для удобства заполнения данных при инициализации)
    Params::ElectricCompactStoveparam param1;

    param1.FormFactor = "Плита компактная";
    param1.Type = "Электрическая";
    param1.Model = "ECON ECO-135HP";
    param1.Color = "серебристый";
    param1.NumberBurners = 1;
    param1.MaxPowerConsump = 1;
    param1.EnergyClass = 'B';

    grocery[0] = new ElectricCompactStove(
        param1.FormFactor,
        param1.Type,
        param1.Model,
        param1.Color,
        param1.NumberBurners,
        param1.MaxPowerConsump,
        param1.EnergyClass
    );

    //Создаем переменую для параметров полноразмерной электрической плита
    Params::ElectricFullStoveparam param2;

    param2.FormFactor = "Плита полноразмерная";
    param2.Type = "Электрическая";
    param2.Model = "Hansa FCCS53042";
    param2.Color = "серебристый";
    param2.NumberBurners = 4;
    param2.MaxPowerConsump = 7.8f;
    param2.EnergyClass = 'A';
    param2.CapacityOven = 70;
    param2.MaxTempOven = 250;
    param2.NumberModesOven = 3;

    grocery[1] = new ElectricFullStove(
        param2.FormFactor,
        param2.Type,
        param2.Model,
        param2.Color,
        param2.NumberBurners,
        param2.MaxPowerConsump,
        param2.EnergyClass,
        param2.CapacityOven,
        param2.MaxTempOven,
        param2.NumberModesOven
    );

    //Создаем переменую для параметров настольую газовую плита
    Params::GasCompactStoveparam param3;

    param3.FormFactor = "Плита компактная";
    param3.Type = "Газовая";
    param3.Model = "Мечта-200М";
    param3.Color = "белый";
    param3.NumberBurners = 2;
    param3.GasType = "сжиженный (пропан/бутан)";
    param3.GasFlow = 254;
    param3.Ignition = false;

    grocery[2] = new GasCompactStove(
        param3.FormFactor,
        param3.Type,
        param3.Model,
        param3.Color,
        param3.NumberBurners,
        param3.GasType,
        param3.GasFlow,
        param3.Ignition
    );

    //Создаем переменую для параметров полноразмерной газовой плиты
    Params::GasFullStoveparam param4;

    param4.FormFactor = "Плита полноразмерная";
    param4.Type = "Газовая";
    param4.Model = "Flama N FG 24239";
    param4.Color = "черный";
    param4.NumberBurners = 4;
    param4.GasType = "природный (метан), сжиженный (пропан-бутан)";
    param4.GasFlow = 140;
    param4.Ignition = true;
    param4.CapacityOven = 50; //Объеми духовки
    param4.MaxTempOven = 300; //Максимальная температура духовки
    param4.NumberModesOven = 3; //Количество режимов духовки

    grocery[3] = new GasFullStove(
        param4.FormFactor,
        param4.Type,
        param4.Model,
        param4.Color,
        param4.NumberBurners,
        param4.GasType,
        param4.GasFlow,
        param4.Ignition,
        param4.CapacityOven,
        param4.MaxTempOven,
        param4.NumberModesOven
    );

    //Создаем переменую для параметров комбинированой плита
    Params::CombinedStoveStoveparam param5;

    param5.FormFactor = "Плита полноразмерная";
    param5.Type = "Комбинированная";
    param5.Model = "ARTEL MILAGRO 10-E";
    param5.Color = "серый";
    param5.NumberBurners = 4;
    param5.MaxPowerConsump = 1.5;
    param5.EnergyClass = 'B';
    param5.CapacityOven = 65;
    param5.MaxTempOven = 300;
    param5.NumberModesOven = 4;
    param5.GasType = "природный (метан)"; //Вид используемого газа
    param5.GasFlow = 17; //Расход газа
    param5.Ignition = true; //Электроподжиг конфорок
    param5.NumberBurnersElectric = 1; //Количество электрических конфорок
    param5.NumberBurnersGas = 3; //Количество газовых конфорок

    grocery[4] = new CombinedStove(
        param5.FormFactor,
        param5.Type,
        param5.Model,
        param5.Color,
        param5.NumberBurners,
        param5.MaxPowerConsump,
        param5.EnergyClass,
        param5.CapacityOven,
        param5.GasType,
        param5.GasFlow,
        param5.Ignition,
        param5.MaxTempOven,
        param5.NumberModesOven,
        param5.NumberBurnersElectric,
        param5.NumberBurnersGas
    );


    bool open = true;
    while (open)
    {
        cout << "-------------------------------------------------------" << std::endl;
        cout << "              Выберите продукт : " << std::endl;
        cout << "-------------------------------------------------------" << std::endl;
        cout << "   1 - " << param1.Model << endl
             << "   2 - " << param2.Model << endl
             << "   3 - " << param3.Model << endl
             << "   4 - " << param4.Model << endl
             << "   5 - " << param5.Model << endl
             << "   0 - чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            grocery[0]->PrintInfo();
            break;

        case 2:
            grocery[1]->PrintInfo();
            break;

        case 3:
            grocery[2]->PrintInfo();
            break;

        case 4:
            grocery[3]->PrintInfo();
            break;

        case 5:
            grocery[4]->PrintInfo();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите плиту от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }

    //Освобождаем память
    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];
    delete grocery[4];

    return 0;
}