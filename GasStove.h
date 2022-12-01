#pragma once 

#include "Stove.h"

//�������� ������� �����
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
    std::string _GasType; //��� ������������� ����
    int _GasFlow; //������ ����
    bool _Ignition; //������������� ��������
};

//���������� ������� �����
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
    //����� ��� ������� ����� �������� � ������� �����-���� ��������, ������� �������� ���������� ����� �� ��������������
};

//�������������� ������������� �����(������ �������� ���� �������)
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
    float _CapacityOven; //����� �������
    float _MaxTempOven; //������������ ����������� �������
    int _NumberModesOven; //���������� ������� �������
};