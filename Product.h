#pragma once
#include "Electronics.h"
using namespace std;

class PersonalComputer final: public GPU, CPU, RAM
{
public:
    PersonalComputer(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores, 
                     int volumeMemorySize, string typeMemory);
    void Show() override;
};

class Monoblock final : public GPU, CPU, RAM, Display
{
public:
    Monoblock(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores,
              int volumeMemorySize, string typeMemory, int maxScreenRefreshRate, string screenResolution);
    void Show() override;
};

class Notebook final : public GPU, CPU, RAM, Display, Battery
{
public:
    Notebook(int videoMemorySize, int videoChipFrequency, double processorFrequency, int numberOfCores,
             int volumeMemorySize, string typeMemory, int maxScreenRefreshRate, string screenResolution, 
             int batteryCapacity, int powerAdapterOutput);
    void Show() override;
};

