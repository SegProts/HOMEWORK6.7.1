#include "GasStove.h"

void GasStove::PrintInfo()
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "              �������� �����: " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "  ����-������: " << _FormFactor << std::endl;
    std::cout << "  ���: " << _Type << std::endl;
    std::cout << "  ������: " << _Model << std::endl;
    std::cout << "  ����: " << _Color << std::endl;
    std::cout << "  ���������� ��������: " << _NumberBurners << std::endl;
    std::cout << "  ��� ������������� ����: " << _GasType << std::endl;
    std::cout << "  ������ ����: " << _GasFlow << " �/���" << std::endl;
    if(_Ignition){ std::cout << "  �������������: ����" << std::endl; }
    else { std::cout << "  �������������: ����" << std::endl; }
}

void GasCompactStove::PrintInfo()
{
    GasStove::PrintInfo();
}

void GasFullStove::PrintInfo()
{
    GasStove::PrintInfo();
    std::cout << "  ������ �������: " << _CapacityOven << " �" << std::endl;
    std::cout << "  ������������ ����������� �������: " << _MaxTempOven << " \xB0" << std::endl;
    std::cout << "  ���������� ������� �������: " << _NumberModesOven << std::endl;
}