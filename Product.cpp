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
    cout << "Объём видеопамяти: " << m_videoMemorySize << " ГБ" << endl;
    cout << "Штатная частота работы видеочипа: " << m_videoChipFrequency << " МГц" << endl;
    cout << "Частота процессора: " << m_processorFrequency << " ГГц" << endl;
    cout << "Число ядер процессора: " << m_numberOfCores << endl;
    cout << "Объём памяти: " << m_volumeMemorySize << " ГБ" << endl;
    cout << "Тип памяти: " << m_typeMemory << endl;
}


Monoblock::Monoblock(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores,
                     int volumeMemorySize, string typeMemory, int maxScreenRefreshRate, string screenResolution) :
                     GPU(videoMemorySize, videoChipFrequency),
                     CPU(processorFrequency, numberOfCores),
                     RAM(volumeMemorySize, typeMemory),
                     Display(maxScreenRefreshRate, screenResolution) {}

void Monoblock::Show()
{
    cout << "Объём видеопамяти: " << m_videoMemorySize << " ГБ" << endl;
    cout << "Штатная частота работы видеочипа: " << m_videoChipFrequency << " МГц" << endl;
    cout << "Частота процессора: " << m_processorFrequency << " ГГц" << endl;
    cout << "Число ядер процессора: " << m_numberOfCores << endl;
    cout << "Объём памяти: " << m_volumeMemorySize << " ГБ" << endl;
    cout << "Тип памяти: " << m_typeMemory << endl;
    cout << "Максимальная частота обновления экрана: " << m_maxScreenRefreshRate << " Гц" << endl;
    cout << "Разрешение крана: " << m_screenResolution << endl;
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
    cout << "Объём видеопамяти: " << m_videoMemorySize << " ГБ" << endl;
    cout << "Штатная частота работы видеочипа: " << m_videoChipFrequency << " МГц" << endl;
    cout << "Частота процессора: " << m_processorFrequency << " ГГц" << endl;
    cout << "Число ядер процессора: " << m_numberOfCores << endl;
    cout << "Объём памяти: " << m_volumeMemorySize << " ГБ" << endl;
    cout << "Тип памяти: " << m_typeMemory << endl;
    cout << "Максимальная частота обновления экрана: " << m_maxScreenRefreshRate << " Гц" << endl;
    cout << "Разрешение крана: " << m_screenResolution << endl;
    cout << "Емкость аккумулятора: " << m_batteryCapacity << " Вт*ч" << endl;
    cout << "Выходная мощность адаптера питания: " << m_powerAdapterOutput << " Вт" << endl;
}