#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;



int main()
{
	setlocale(LC_ALL,"ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	
    int size;

    cout << "¬ведите количество фамилий: ";
    cin >> size;

    char **mass = new char*[size];
    

    for (int i = 0; i < 5; i++)
    {
        cout << "¬ведите фамилию " << i + 1 << ":\t";
        mass[i] = new char[20];
        cin >> mass[i];
    }
    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++)
            if (strcmp(mass[i], mass[j]) > 0) 
            {
                char* tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << mass[i] << endl;
    }


    delete[] mass;

    return 0;

}