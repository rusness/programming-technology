#include <stdio.h>



int main() {

	int m[100];
	int n;
	
	printf("������� ���������� ���������: ");
	scanf("%i",&n);
	
	for (int i=0;i<n;i++)
	{
		scanf("%i",&m[i]);
	}
	
	int min, max;
	int sum = 0;
	
	min=max=m[0];
	
	for (int i=0;i<n;i++)
	{
		if (m[i]<min)
		{
		min = m[i];
		}
		
	
	
		if (m[i]>max)
		{
		max = m[i];
		}
	sum+=m[i];	
	}
	
	float c = (float)sum/(float)n;
	
	printf("������������ ����� %i\n",max);
	printf("����������� ����� %i\n",min);
	printf("����� ��������� %i\n",sum);
	printf("������� �������������� %f",c);


}
