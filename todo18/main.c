#include <stdio.h>
#include <string.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	
	char sr[100];
	
	printf("Введите строку: ");
	gets(sr);
	
	// удаляем первую букву	
	for (int i=0; i<strlen(sr);i++)
	{
		sr[i] = sr[i+1];
	}
	
	printf("Результат - ");
	puts(sr);
	
	return 0;
}
