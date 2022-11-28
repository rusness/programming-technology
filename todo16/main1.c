#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

/*

*/

int main()
 {
	setlocale(LC_ALL, "Russian");
	
	int m[100][100];
	int r, c;
	
	printf("Введите количество строк: ");
	scanf("%d",&r);
	
	printf("Введите количество столбцов: ");
	scanf("%d",&c);
	
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\n");
	// вывод
		for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
	
	
	// меняем местами 1 и последний элементы по каждой строки
	for (int i=0;i<r;i++)
	{
		int flag = true;
		while (flag)
		{
			int tmp = m[i][0];
			m[i][0]=m[i][c-1];
			m[i][c-1]=tmp;
			flag = false;
		}
	}
	
	
	printf("\n\n");
	// вывод результат
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
