#include <stdio.h>

int main() {
	
	int a, b;
	
	printf("А=");
	scanf("%i",&a);	
	printf("Б=");
	scanf("%i",&b);
	
	if (a==b) {
		printf("А и Б равны");	
	}	
	else if (a>b) {
		printf("А больше");	
	     }
	else {		
		printf("А меньше");
		}
		
}
