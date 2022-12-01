#include "CombinedStove.h"

void CombinedStove::PrintInfo()
{
    //����� �� ������ ������������ �����
    ElectricStove::PrintInfo();
    std::cout << "  ������������ ����������� �������: " << _MaxTempOven << " \xB0" << std::endl;
    std::cout << "  ���������� ������� �������: " << _NumberModesOven << std::endl;

    //����������� ������ �� ������ ������� �����
    std::cout << "  ��� ������������� ����: " << _GasType << std::endl;
    std::cout << "  ������ ����: " << _GasFlow << " �/���" << std::endl;
    if (_Ignition) { std::cout << "  �������������: ����" << std::endl; }
    else { std::cout << "  �������������: ����" << std::endl; }

    //����� ������ ��� ������ �������������� �����
	std::cout << "  ���������� ������������� ��������: " << _NumberBurnersElectric << std::endl;
	std::cout << "  ���������� ������� ��������: " << _NumberBurnersGas << std::endl;
}