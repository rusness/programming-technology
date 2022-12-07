#include <stdio.h>
#include <stdlib.h>


void fillandshow(int mas[], int n)
{
	for (int i=0; i<n; i++)
	{
		mas[i] = rand()%100;
		printf("%3d",mas[i]);	
	}	
}

int main()
{
	
	int n  = 4;
	int n1 = 6;
	int a[n];
	int b[n1];
	
	fillandshow(a,n);
	printf("\n\n");
	fillandshow(b,n1);
	
	return 0;
}



