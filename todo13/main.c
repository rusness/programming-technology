#include <stdio.h>


int main() {
	
	int m[100][100];
	
	int r, c;
	
	printf("Введите количество строк: ");
	scanf("%d",&r);
	
	printf("Введите количество столбцов: ");
	scanf("%d",&c);
	
	for (int j=0;j<r;j++)
	{
		for (int i=0;i<c;i++)
		{
			scanf("%i",&m[j][i]);
		}
	}

	for (int j=0;j<r;j++)
	{
		for (int i=0;i<c;i++)
		{
			printf("%2i",m[j][i]);
		 } 
		 
		 printf("\n");
	}
	
}
