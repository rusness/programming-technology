#include <iostream>

using namespace std;

int devide(int value)
{

	if (value == 0)
	{
		throw exception("������� �� ����!");
	}

	return 1024 / value;

}

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "������� �����!" << endl;
	cin >> a;


	try
	{
		cout << "��������� �������: \t" << devide(a) << endl;
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}


	return 0;
}