#include <stdio.h>
#include <stdlib.h>


void fillandshow(int mas[], int n)

{
	int i;
	
	for (i=0; i<n; i++)
	{
		mas[i] = rand()%100;
		printf("%3d",mas[i]);	
	}	
}

int main()
{
	
	size_t n  = 4;
	size_t n1 = 6;
	int *a = malloc(n * sizeof(int));
	int *b = malloc(n1 * sizeof(int));
	
	fillandshow(a,n);
	printf("\n\n");
	fillandshow(b,n1);
	
	free(a);
	free(b);
	
	return 0;
}



