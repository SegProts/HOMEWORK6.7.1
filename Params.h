#pragma once
class Params
{
public:
    struct ElectricCompactStoveparam
    {
        //� �� ���� ��������� �������� ������� ������� �� ����� ����� �� ���������� �����
        //�� �������� �������� ��������� FormFactor, �� �� ���� � ����
        //�� � �������� ����� ���������� ������ ���������� � ����� ElectricStove ��� ������������� 
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //���������� ��������
        float MaxPowerConsump; //������������ ������������ ��������
        char EnergyClass; //����� �����
    };

    struct ElectricFullStoveparam
    {
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //���������� ��������
        float MaxPowerConsump; //������������ ������������ ��������
        char EnergyClass;
        float CapacityOven; //����� �������
        float MaxTempOven;
        int NumberModesOven;
    };

    struct GasCompactStoveparam
    {
        //� �� ���� ��������� �������� ������� ������� �� ����� ����� �� ���������� �����
        //�� �������� �������� ��������� FormFactor, �� �� ���� � ����
        //�� � �������� ����� ���������� ������ ���������� � ����� ElectricStove ��� �������������
        //� �������� ������ ����������(������ ���������� ���������� � ����������� � ��������� �������)
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //���������� ��������
        std::string GasType; //��� ������������� ����
        int GasFlow; //������ ����
        bool Ignition; //������������� ��������
    };

    struct GasFullStoveparam
    {
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //���������� ��������
        std::string GasType; //��� ������������� ����
        int GasFlow; //������ ����
        bool Ignition; //������������� ��������
        float CapacityOven; //����� �������
        float MaxTempOven;
        int NumberModesOven;
    };

    struct CombinedStoveStoveparam
    {
        std::string FormFactor;
        std::string Type;
        std::string Model;
        std::string Color;
        int NumberBurners; //���������� ��������
        float MaxPowerConsump; //������������ ������������ ��������
        char EnergyClass;
        float CapacityOven; //����� �������
        float MaxTempOven;
        int NumberModesOven;
        std::string GasType; //��� ������������� ����
        int GasFlow; //������ ����
        bool Ignition; //������������� ��������
        int NumberBurnersElectric; //���������� ������������� ��������
        int NumberBurnersGas; //���������� ������� ��������
    };
};

