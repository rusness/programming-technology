#include <stdio.h>


int main() {

	int n=0, min, max;
	int x;
	int sum;
	
	while (n==0) // n > 0 ������� ���� �����������, �� � ������ ��� ������ ��������� ��������� ���� �� ����� ������ ������ ������������� �����
	{	
		printf("������� ���������� �����:");
		scanf("%i",&n);
	}

	int i=1;
	min=max=n;
	
	// ����������� ���� � ��� ����� � ������������
    while (i<=n)
	{
	 	printf("������� �����: ");
		scanf("%i",&x);
		
		if (x<min)
		
			min=x;	 	
		 
		if (x>max)
		
			max=x;
		
		sum += x;	
		i++;
			
	 } 
    	
	printf("����������� ����� = %i \n",min);
	printf("������������ ����� = %i \n",max);
    printf("����� ����� = %i \n",sum);
    printf("������� �������������� = %i \n", sum/n);
}
