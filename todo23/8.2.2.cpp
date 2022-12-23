#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileWasNotOpenedException: public exception
{
public:
	FileWasNotOpenedException(const char* msg) :exception(msg)
	{
		
	}

	~FileWasNotOpenedException()
	{

	}
};

void Foo()
{
	string path = "MyFile.txt"; 
	string str;
	ifstream fin;

	fin.open(path);

	if (!fin.is_open())
	{
		throw FileWasNotOpenedException("Ошибка открытия файла!");
	}
	else

	{
		while (!fin.eof())
		{
			str = "";
			getline(fin, str); 
			cout << str << endl;
		}
	}

}


int main()
{
	setlocale(LC_ALL, "ru");
	
	
	try
	{
		Foo();
	}
	catch (const FileWasNotOpenedException &ex)
	{
		cout << ex.what() << endl;
	}



	return 0;
}