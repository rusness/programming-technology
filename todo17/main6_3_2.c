#include <stdio.h>
#include <string.h>
#include <locale.h>



int main() 
{
	setlocale(LC_ALL, "Russian");
	
	char ch[100];
	
	gets(ch);
	
	// последний элемент строки
	printf("Последний элемент строки - %c\n\n", ch[strlen(ch)-1]);	
	
	// меняем два элемента местами для примера возьмем 2<-->4
	printf("Исходная строка - ");
	puts(ch);
	
	char tmp = ch[1];
	ch[1] = ch[3];
	ch[3] = tmp;
	
	printf("\nСтрока после смены элементов 2 и 4 местами - ");
	puts(ch);
	
	return 0;
}
