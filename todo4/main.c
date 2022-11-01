#include <stdio.h>

int main() 
 {
	int day;
	
	printf("INPUT DAY NUMBER: ");
	scanf("%i",&day);
	
	switch (day)
	{		
		case 1:
			{
				printf("MON");
			}
			break;
		case 2:
			{
				printf("TUE");
			}
			break;
		case 3:
			{
		        printf("WED");
			}
			break;
		case 4:
			{
				printf("THU");
			}
			break;
		case 5:
			{
				printf("FRI");
			}
			break;
		case 6:
			{
				printf("SAT");
			}
			break;	
		case 7:
			{
				printf("SUN");
			}
			break;					
		default:
			{
			printf("Number day is not correct!");
			}
	
	}
		
}
