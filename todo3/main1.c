#include <stdio.h>


int main() {
	
	int login1, psw1;
	
		
	printf("LOGIN:");
	scanf("%i",&login1);
	printf("PASSWORD:");
	scanf("%i",&psw1);
	
	if (((login1==111)&&(psw1==222))||((login1==777)&&(psw1==999))) {   
		
		printf("Correct!");
	}
	else {
		printf("Error!");
		}
	 
	}
