#include <iostream>
#include "Electronics.h"
using namespace std;

GPU::GPU(int videoMemorySize, int videoChipFrequency): 
         m_videoMemorySize(videoMemorySize), m_videoChipFrequency(videoChipFrequency) {}

void GPU::Show()
{
    cout << "Объём видеопамяти: " << m_videoMemorySize << " ГБ" << endl;
    cout << "Штатная частота работы видеочипа: " << m_videoChipFrequency << " МГц" << endl;
}


CPU::CPU(double processorFrequency, int numberOfCores):
         m_processorFrequency(processorFrequency), m_numberOfCores(numberOfCores) {}

void CPU::Show()
{
    cout << "Частота процессора: " << m_processorFrequency << " ГГц" << endl;
    cout << "Число ядер процессора: " << m_numberOfCores << endl;
}


RAM::RAM(int volumeMemorySize, string typeMemory): 
         m_volumeMemorySize(volumeMemorySize), m_typeMemory(typeMemory) {}

void RAM::Show()
{
    cout << "Объём памяти: " << m_volumeMemorySize << " ГБ" << endl;
    cout << "Тип памяти: " << m_typeMemory << endl;
}


Display::Display(int maxScreenRefreshRate, string screenResolution): 
                 m_maxScreenRefreshRate(maxScreenRefreshRate), m_screenResolution(screenResolution) {}

void Display::Show()
{
    cout << "Максимальная частота обновления экрана: " << m_maxScreenRefreshRate << " Гц" << endl;
    cout << "Разрешение крана: " << m_screenResolution << endl;
}


Battery::Battery(int batteryCapacity, int powerAdapterOutput) : 
                 m_batteryCapacity(batteryCapacity), m_powerAdapterOutput(powerAdapterOutput) {}

void Battery::Show()
{
    cout << "Емкость аккумулятора: " << m_batteryCapacity << " Вт*ч" << endl;
    cout << "Выходная мощность адаптера питания: " << m_powerAdapterOutput << " Вт" << endl;
}