#include "ElectricStove.h"

void ElectricStove::PrintInfo()
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "              �������� �����: "  << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "  ����-������: " << _FormFactor << std::endl;
    std::cout << "  ���: " << _Type << std::endl;
    std::cout << "  ������: " << _Model << std::endl;
    std::cout << "  ����: " << _Color << std::endl;
    std::cout << "  ���������� ��������: " << _NumberBurners << std::endl;
    std::cout << "  ������������ ������������ ��������: " << _MaxPowerConsump << " ���" << std::endl;
    std::cout << "  ����� �����������������: " << _EnergyClass << std::endl;
}

void ElectricCompactStove::PrintInfo()
{
    ElectricStove::PrintInfo();
}

void ElectricFullStove::PrintInfo()
{
    ElectricStove::PrintInfo();
    std::cout << "  ������ �������: " << _CapacityOven << " �" << std::endl;
    std::cout << "  ������������ ����������� �������: " << _MaxTempOven << " \xB0" << std::endl;
    std::cout << "  ���������� ������� �������: " << _NumberModesOven << std::endl;
}