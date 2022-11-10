#include <stdio.h>


int main() {

	int n=0, min, max;
	int x;
	int sum;
	
	while (n==0) // n > 0 деление ноль недопустимо, да и вообще нет смысла выполн€ть программу пока не будут ввдено колчво целочсиленных чисел
	{	
		printf("¬ведите количество чисел:");
		scanf("%i",&n);
	}

	int i=1;
	min=max=n;
	
	// определение макс и мин числа и суммирование
    while (i<=n)
	{
	 	printf("¬ведите число: ");
		scanf("%i",&x);
		
		if (x<min)
		
			min=x;	 	
		 
		if (x>max)
		
			max=x;
		
		sum += x;	
		i++;
			
	 } 
    	
	printf("минимальное число = %i \n",min);
	printf("максимальное число = %i \n",max);
    printf("сумма чисел = %i \n",sum);
    printf("среднее арифмитическое = %i \n", sum/n);
}
