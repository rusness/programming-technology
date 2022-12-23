#include <iostream>
#include <string>


using namespace std;



int Foo(char * Str)
{
    int i, l, a, a1, a2;
    char c, z;
    l = strlen(Str);
    a = 0;
    for (i = 0; i < l; i++)
    {
        c = Str[i];
        if ((c <= '9') && (c >= '0'))
            a = 10 * a + (c - '0');
        else
            if ((c == '+') || (c == '-') || (c == '*') || (c == '/'))
            {
                z = c;
                a1 = a;
                a = 0;
            }
            else                
                {
                throw exception("Плохой символ в строке, Вычисление прервано!");
                }
    }
    a2 = a;
    switch (z)
    {
    case '+':
        return a1 + a2;
    case '-':
        return a1 - a2;
    case '*':
        return a1 * a2;
    case '/':
        return a1 / a2;
    }

}


int main()
{
	setlocale(LC_ALL, "ru");

	const int size = 100;
	char *arr = new char[size];	

	cout << "Введите строку для вычисления: \t"; 
	cin >> arr;

	try
	{
		cout << Foo(arr);
	}
	catch (const exception &ex)
	{
		cout << ex.what() << endl;
	}
	
    delete[] arr;

	return 0;
}