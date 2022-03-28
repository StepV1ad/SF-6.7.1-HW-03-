#pragma once
#include "IElectronicsBase.h"
using namespace std;

class GPU : virtual public IElectronics
{
public:
    GPU(int videoMemorySize, int videoChipFrequency);
    void Show() override;
protected:
    int m_videoMemorySize;
    int m_videoChipFrequency;
};

class CPU : virtual public IElectronics
{
public:
    CPU(double processorFrequency, int numberOfCores);
    void Show() override;
protected:
    double m_processorFrequency;
    int m_numberOfCores;
};

class RAM : virtual public IElectronics
{
public:
    RAM(int volumeMemorySize, string typeMemory);
    void Show() override;
protected:
    int m_volumeMemorySize;
    string m_typeMemory;
};

class Display : virtual public IElectronics
{
public:
    Display(int maxScreenRefreshRate, string screenResolution);
    void Show() override;
protected:
    int m_maxScreenRefreshRate;
    string m_screenResolution;
};

class Battery : virtual public IElectronics
{
public:
    Battery(int batteryCapacity, int powerAdapterOutput);
    void Show() override;
protected:
    int m_batteryCapacity;
    int m_powerAdapterOutput;
};


