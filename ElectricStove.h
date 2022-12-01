#pragma once 

#include "Stove.h"

//�������� ������������� �����
class ElectricStove : virtual public Stove
{
public:
    ElectricStove(
        std::string FormFactor, std::string Type, std::string Model, std::string Color, 
        int NumberBurners,float MaxPowerConsump, char EnergyClass 
    ) : Stove(FormFactor, Type, Model, Color, NumberBurners), _MaxPowerConsump(MaxPowerConsump), _EnergyClass(EnergyClass){};

    void PrintInfo() override;
protected:
    float _MaxPowerConsump; //������������ ������������ ��������
    char _EnergyClass; //����� �����������������
};

//���������� ������������� �����
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
    //����� ��� ������� ����� �������� � ������� �����-���� ��������, ������� �������� ���������� ����� �� ��������������
};

//�������������� ������������� �����(������ �������� ���� �������)
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
    float _CapacityOven; //����� �������
    float _MaxTempOven; //������������ ����������� �������
    int _NumberModesOven; //���������� ������� �������
};

