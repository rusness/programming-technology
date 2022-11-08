#include <stdio.h>

// Угадать число

int main() {
	
	int a = 9;
	
	while (a!=7)
	
	{
		printf("Введите число: ");
		scanf("%i",&a);
		
		// 1. больше или меньше 7
		if (a<7) 
		{
			printf("Меньше \n");		
		}
		else if (a>7)
		{
			printf("Больше \n");
		}
	
		// 2. больше или меньше 10
		if (a<10) 
		{
			printf("Меньше 10\n");		
		}
		else if (a>10)
		{
			printf("Больше 10\n");
		}
	
		// 3. делится ли на 2
		if (a%2==0)
		{
			printf("Делится на 2 \n");
		}
		else
		{
			printf("Не делится на 2 \n");
		}
	
		// 4. делится ли на 3
		if (a%3==0)
		{
			printf("Делится на 3 \n");
		}
		else
		{
			printf("Не делится на 3 \n");
		}
	
	}

	printf("Вы угадали число!");
}
