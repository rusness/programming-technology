#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;



int main()
{
	setlocale(LC_ALL,"ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	
    int r;

    cout << "Введите количество фамилий: ";
    cin >> r;

    char **mass = new char*[r];
    

    for (int i = 0; i < r; i++)
    {
        cout << "Введите фамилию " << i + 1 << ":\t";
        mass[i] = new char[20];
        cin >> mass[i];
    }
    for (int i = 0; i < r; i++) 
    {
        for (int j = i + 1; j < r; j++)
            if (strcmp(mass[i], mass[j]) > 0) 
            {
                char* tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < r; i++)
    {
        cout << mass[i] << endl;
    }


    for (int i = 0; i < r; i++)
    {
        delete mass[i];
    }

    delete[] mass;

    return 0;

}