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

    //�������� ������� ��� ������� ��������
    IAppliance* grocery[5];

    //������� ��������� ��� ���������� ���������� ������������� �����(������� ��� �������� ���������� ������ ��� �������������)
    Params::ElectricCompactStoveparam param1;

    param1.FormFactor = "����� ����������";
    param1.Type = "�������������";
    param1.Model = "ECON ECO-135HP";
    param1.Color = "�����������";
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

    //������� ��������� ��� ���������� �������������� ������������� �����
    Params::ElectricFullStoveparam param2;

    param2.FormFactor = "����� ��������������";
    param2.Type = "�������������";
    param2.Model = "Hansa FCCS53042";
    param2.Color = "�����������";
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

    //������� ��������� ��� ���������� ��������� ������� �����
    Params::GasCompactStoveparam param3;

    param3.FormFactor = "����� ����������";
    param3.Type = "�������";
    param3.Model = "�����-200�";
    param3.Color = "�����";
    param3.NumberBurners = 2;
    param3.GasType = "��������� (������/�����)";
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

    //������� ��������� ��� ���������� �������������� ������� �����
    Params::GasFullStoveparam param4;

    param4.FormFactor = "����� ��������������";
    param4.Type = "�������";
    param4.Model = "Flama N FG 24239";
    param4.Color = "������";
    param4.NumberBurners = 4;
    param4.GasType = "��������� (�����), ��������� (������-�����)";
    param4.GasFlow = 140;
    param4.Ignition = true;
    param4.CapacityOven = 50; //������ �������
    param4.MaxTempOven = 300; //������������ ����������� �������
    param4.NumberModesOven = 3; //���������� ������� �������

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

    //������� ��������� ��� ���������� �������������� �����
    Params::CombinedStoveStoveparam param5;

    param5.FormFactor = "����� ��������������";
    param5.Type = "���������������";
    param5.Model = "ARTEL MILAGRO 10-E";
    param5.Color = "�����";
    param5.NumberBurners = 4;
    param5.MaxPowerConsump = 1.5;
    param5.EnergyClass = 'B';
    param5.CapacityOven = 65;
    param5.MaxTempOven = 300;
    param5.NumberModesOven = 4;
    param5.GasType = "��������� (�����)"; //��� ������������� ����
    param5.GasFlow = 17; //������ ����
    param5.Ignition = true; //������������� ��������
    param5.NumberBurnersElectric = 1; //���������� ������������� ��������
    param5.NumberBurnersGas = 3; //���������� ������� ��������

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
        cout << "              �������� ������� : " << std::endl;
        cout << "-------------------------------------------------------" << std::endl;
        cout << "   1 - " << param1.Model << endl
             << "   2 - " << param2.Model << endl
             << "   3 - " << param3.Model << endl
             << "   4 - " << param4.Model << endl
             << "   5 - " << param5.Model << endl
             << "   0 - ����� �����" << endl;
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
            cout << "�������� ����� �� 1 �� 5 ��� 0, ����� �����" << endl;
            break;
        }
    }

    //����������� ������
    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];
    delete grocery[4];

    return 0;
}