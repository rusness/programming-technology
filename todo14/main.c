#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main() {
	
	int m[100][100];
	int r, c;
	
	printf("Введите количество строк: ");
	scanf("%d",&r);
	
	printf("Введите количество столбцов: ");
	scanf("%d",&c);
	
	srand(time(NULL));
	
	for (int i=0; i<r;i++)
	{
		for (int j=0;j<c;j++)
		
			// rand() % длина_диапазона +(-) сдвиг		
			m[i][j]=rand()%9-2;
	}
	
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%12i",m[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	
	
	
	return 0;
}
