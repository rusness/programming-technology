#include <stdio.h>

int main() {
	
	int a, b;
	
	printf("a=");
	scanf("%i",&a);	
	printf("b=");
	scanf("%i",&b);
	
	if (a==b) {
		printf("A и B равны");	
	}	
	else if (a>b) {
		printf("A больше");	
	     }
	else {		
		printf("A меньше");
		}
}
