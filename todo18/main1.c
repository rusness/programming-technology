#include <stdio.h>
#include <string.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	char sr[100];
	
	printf("Введите строку: ");
	gets(sr);
	
	// зеркальное отображение строки через буфернуб переменную
	char tmp[100];
	for (int i=0;i<strlen(sr);i++)
	{
		tmp[i] = sr[i];				
	}	
	
	// перезыписываем	
	for (int i=strlen(tmp)-1;i>=0;i--)
	{
		sr[strlen(tmp)-1-i] = tmp[i];
	}
	
	printf("Результат - ");
    puts(sr);
	
	return 0;
}
