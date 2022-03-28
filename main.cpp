#include <iostream>
#include <string>
#include "IElectronicsBase.h"
#include "Product.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    IElectronics* device[3];

    device[0] = new PersonalComputer(12, 1320, 2.6, 6, 16, string("DDR4"));
    device[1] = new Monoblock(4, 1455, 3.3, 6, 12, string("DDR4"), 60, string("3840 x 2160")); 
    device[2] = new Notebook(16, 1690, 5.0, 8, 32, string("DDR5"), 360, string("1920x1080"), 100, 330);
   
        bool open = true;
    while (open)
    {
        cout << "Выберите продукт : 1 - Персональный компьютер, 2 - Моноблок, 3 - Ноутбук, 0 чтобы выйти: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            device[0]->Show();
            cout << endl;
            break;

        case 2:
            device[1]->Show();
            cout << endl;
            break;

        case 3:
            device[2]->Show();
            cout << endl;
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 3 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete device[0];
    delete device[1];
    delete device[2];

    return 0;
}