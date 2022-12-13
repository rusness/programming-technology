#include <stdio.h>
#include <string.h>
#include <locale.h>

char * remove_space(char word[])
{

	int i;
	
	while(word[i]==' ')
   {
     memcpy(word,word+1,strlen(word)+1);
   }	 
	 
	for (i=strlen(word);i>=0;i--)
	{
		if (word[i]==' ')
		{
			word[i] = '\0';
		}
	}
	
	return word;
	
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char word[100];
	
	printf("Введите строку: ");
	gets(word);
	
	char * new_word = remove_space(word); 
	
 	puts(new_word);
	
	return 0;
}
