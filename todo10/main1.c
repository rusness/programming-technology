#include <stdio.h>



int main() {
	
	int n;
	
	printf("������� ���������� ��������� �������: ");
	scanf("%i",&n);
	
	int cell[n];
	
	for (int i=0;i<n;i++)
	{
		scanf("%i",&cell[i]);
	}
	
	for (int i=0;i<n;i++)
	{
		printf("%2i",cell[i]);
	}
	
	
}
