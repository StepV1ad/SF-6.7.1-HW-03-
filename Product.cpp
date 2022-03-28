#include <iostream>
#include "Product.h"
using namespace std;

PersonalComputer::PersonalComputer(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores,
                                   int volumeMemorySize, string typeMemory):
                                   GPU(videoMemorySize, videoChipFrequency), 
                                   CPU(processorFrequency, numberOfCores), 
                                   RAM(volumeMemorySize, typeMemory) {}

void PersonalComputer::Show()
{
    cout << "����� �����������: " << m_videoMemorySize << " ��" << endl;
    cout << "������� ������� ������ ���������: " << m_videoChipFrequency << " ���" << endl;
    cout << "������� ����������: " << m_processorFrequency << " ���" << endl;
    cout << "����� ���� ����������: " << m_numberOfCores << endl;
    cout << "����� ������: " << m_volumeMemorySize << " ��" << endl;
    cout << "��� ������: " << m_typeMemory << endl;
}


Monoblock::Monoblock(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores,
                     int volumeMemorySize, string typeMemory, int maxScreenRefreshRate, string screenResolution) :
                     GPU(videoMemorySize, videoChipFrequency),
                     CPU(processorFrequency, numberOfCores),
                     RAM(volumeMemorySize, typeMemory),
                     Display(maxScreenRefreshRate, screenResolution) {}

void Monoblock::Show()
{
    cout << "����� �����������: " << m_videoMemorySize << " ��" << endl;
    cout << "������� ������� ������ ���������: " << m_videoChipFrequency << " ���" << endl;
    cout << "������� ����������: " << m_processorFrequency << " ���" << endl;
    cout << "����� ���� ����������: " << m_numberOfCores << endl;
    cout << "����� ������: " << m_volumeMemorySize << " ��" << endl;
    cout << "��� ������: " << m_typeMemory << endl;
    cout << "������������ ������� ���������� ������: " << m_maxScreenRefreshRate << " ��" << endl;
    cout << "���������� �����: " << m_screenResolution << endl;
}


Notebook::Notebook(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores,
                   int volumeMemorySize, string typeMemory, int maxScreenRefreshRate, string screenResolution,
                   int batteryCapacity, int powerAdapterOutput) :
                   GPU(videoMemorySize, videoChipFrequency),
                   CPU(processorFrequency, numberOfCores),
                   RAM(volumeMemorySize, typeMemory),
                   Display(maxScreenRefreshRate, screenResolution),
                   Battery(batteryCapacity, powerAdapterOutput) {}

void Notebook::Show()
{
    cout << "����� �����������: " << m_videoMemorySize << " ��" << endl;
    cout << "������� ������� ������ ���������: " << m_videoChipFrequency << " ���" << endl;
    cout << "������� ����������: " << m_processorFrequency << " ���" << endl;
    cout << "����� ���� ����������: " << m_numberOfCores << endl;
    cout << "����� ������: " << m_volumeMemorySize << " ��" << endl;
    cout << "��� ������: " << m_typeMemory << endl;
    cout << "������������ ������� ���������� ������: " << m_maxScreenRefreshRate << " ��" << endl;
    cout << "���������� �����: " << m_screenResolution << endl;
    cout << "������� ������������: " << m_batteryCapacity << " ��*�" << endl;
    cout << "�������� �������� �������� �������: " << m_powerAdapterOutput << " ��" << endl;
}