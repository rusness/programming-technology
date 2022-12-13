#include <stdio.h>
#include <string.h>
#include <locale.h>

char * remove_trim(char word[])
{
	int n = 0; // для обработки начало строки
	char tmp[100];
	
	while (word[n]==' ')
	{
		n++;
	}	 
	 
	// копируем без первых пробелов
	int i;
	int j=0;
	for (i=n;i<=strlen(word)+1;i++)
	{
		tmp[j] = word[i];
		j++;
	}  
	
	// затираем последние пробелы
	for (i=strlen(tmp);i>=0;i--)
	{
		if (tmp[i]==' ')
		{
			tmp[i] = '\0';
		}
	}
	
	return tmp;
	
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char word[100];
	
	printf("Введите строку: ");
	gets(word);
	
	char * new_word = remove_trim(word); 
	
 	puts(new_word);
	
	return 0;
}
