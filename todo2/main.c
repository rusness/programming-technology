#include <stdio.h>

int main() {
	
	int a, b;
	
	printf("А=");
	scanf("%i",&a);	
	printf("Б=");
	scanf("%i",&b);
	
	if (a==b) {
		printf("Равны");	
	}	
	else if (a>b) {
		printf("Больше");	
	     }
	else {		
		printf("Меньше");
		}
		
}
