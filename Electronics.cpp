#include <iostream>
#include "Electronics.h"
using namespace std;

GPU::GPU(int videoMemorySize, int videoChipFrequency): 
         m_videoMemorySize(videoMemorySize), m_videoChipFrequency(videoChipFrequency) {}

void GPU::Show()
{
    cout << "����� �����������: " << m_videoMemorySize << " ��" << endl;
    cout << "������� ������� ������ ���������: " << m_videoChipFrequency << " ���" << endl;
}


CPU::CPU(double processorFrequency, int numberOfCores):
         m_processorFrequency(processorFrequency), m_numberOfCores(numberOfCores) {}

void CPU::Show()
{
    cout << "������� ����������: " << m_processorFrequency << " ���" << endl;
    cout << "����� ���� ����������: " << m_numberOfCores << endl;
}


RAM::RAM(int volumeMemorySize, string typeMemory): 
         m_volumeMemorySize(volumeMemorySize), m_typeMemory(typeMemory) {}

void RAM::Show()
{
    cout << "����� ������: " << m_volumeMemorySize << " ��" << endl;
    cout << "��� ������: " << m_typeMemory << endl;
}


Display::Display(int maxScreenRefreshRate, string screenResolution): 
                 m_maxScreenRefreshRate(maxScreenRefreshRate), m_screenResolution(screenResolution) {}

void Display::Show()
{
    cout << "������������ ������� ���������� ������: " << m_maxScreenRefreshRate << " ��" << endl;
    cout << "���������� �����: " << m_screenResolution << endl;
}


Battery::Battery(int batteryCapacity, int powerAdapterOutput) : 
                 m_batteryCapacity(batteryCapacity), m_powerAdapterOutput(powerAdapterOutput) {}

void Battery::Show()
{
    cout << "������� ������������: " << m_batteryCapacity << " ��*�" << endl;
    cout << "�������� �������� �������� �������: " << m_powerAdapterOutput << " ��" << endl;
}