#include <stdio.h>
#include <locale.h>
#include <string.h>


void change_smb(char *word, char smb)
{
	
	word[0] = smb;
	word[strlen(word)-1] = smb;

}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	char word[100];
	
	printf("Введите строку: ");
	gets(word);
	
	char smb = '2';
	
	change_smb(word, smb);
	
	puts(word);
	
	return 0;
}
