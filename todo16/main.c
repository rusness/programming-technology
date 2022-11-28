#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*Отсортировать массив из n x m элементов построчно: 
каждая строка от минимального к максимальному элементу по значению. 
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
			scanf("%d",&m[i][j]);
		}
	}

    printf("\n\n");
	 
	// вывод до
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%3d",m[i][j]);
		}
		printf("\n");
	}	

	// сортировка
	for (int i=0;i<r;i++)
	{
		bool flag = true;
		
		while (flag)
		{
			flag=false;
			for (int j=0;j<c-1;j++)
			{
				if (m[i][j]>m[i][j+1])
				{
					int z = m[i][j];
					m[i][j]=m[i][j+1];
					m[i][j+1] = z;
					flag = true;
				}
			}
		}
	}
	
	printf("\n\n\n");
	
	// вывод результата
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%3d",m[i][j]);
		}
		printf("\n");
	}		
	
}
