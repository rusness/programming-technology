#include <stdio.h>

// ������� �����

int main() {
	
	int a = 9;
	
	while (a!=7)
	
	{
		printf("������� �����: ");
		scanf("%i",&a);
		
		// 1. ������ ��� ������ 7
		if (a<7) 
		{
			printf("������ \n");		
		}
		else if (a>7)
		{
			printf("������ \n");
		}
	
		// 2. ������ ��� ������ 10
		if (a<10) 
		{
			printf("������ 10\n");		
		}
		else if (a>10)
		{
			printf("������ 10\n");
		}
	
		// 3. ������� �� �� 2
		if (a%2==0)
		{
			printf("������� �� 2 \n");
		}
		else
		{
			printf("�� ������� �� 2 \n");
		}
	
		// 4. ������� �� �� 3
		if (a%3==0)
		{
			printf("������� �� 3 \n");
		}
		else
		{
			printf("�� ������� �� 3 \n");
		}
	
	}

	printf("�� ������� �����!");
}
