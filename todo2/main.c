#include <stdio.h>

int main() {
	
	int a, b;
	
	printf("À=");
	scanf("%i",&a);	
	printf("Á=");
	scanf("%i",&b);
	
	if (a==b) {
		printf("À è Á ðàâíû");	
	}	
	else if (a>b) {
		printf("À áîëüøå");	
	     }
	else {		
		printf("À ìåíüøå");
		}
	
		
}
