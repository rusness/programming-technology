#include <stdio.h>
#include <string.h>
#include <locale.h>



int main() 
{
	setlocale(LC_ALL, "Russian");
	
	char ch[100];
	
	printf("Введите текст: ");
	gets(ch);
	
	printf("\nВыберите номер элемента символа для удаления: ");
	
	int num_s;
	scanf("%i",&num_s);
	
	for (int j=num_s;j<strlen(ch);j++)
	{
		ch[j] = ch[j+1];
	}
	
	printf("\nРезультат - ");
	puts(ch);
	
	
	return 0;
}
