#include <stdio.h>
#include <stdbool.h>


int main() {
	
	int p[100];
	int n;
	
	printf("Введите количество элементов: \n");
	scanf("%i",&n);
	
	for (int i=0; i<n; i++)
	{
		scanf("%i",&p[i]);
	}
	
	bool flag = true;
	
	while (flag)
	{
		flag = false;
		for (int i=0; i<n-1; i++)
		{
			if (p[i] > p[i+1])
			{
				int z = p[i];
				p[i] = p[i+1];
				p[i+1] = z;
				flag = true; 
				}	
		}
		
		for (int i=0; i<n; i++)
		{
			printf("%2i",p[i]);
		}
		printf("\n");
	}
	
	
}
