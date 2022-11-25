#include <stdio.h>


int main() {
	
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
	
	
    // вывод до
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%10d",m[i][j]);
		}		
	printf("\n\n");		
	}		
	
	// инверсия массива 
	
	for (int i=0;i<r-1;i++) 
	{
        for (int j=i+1;j<r;j++) 
		{
			int tmp = m[i][j];	
        	m[i][j]=m[j][i];
       		m[j][i]=tmp;
       	}   
	}
  

	printf("\n\n\n\n");
	for (int i=0;i<r;i++) 
	{
        for (int j=0;j<c;j++) 
		{
        printf("%10d",m[i][j]);
        }        
    printf("\n\n");    
   }

	return 0;
}
