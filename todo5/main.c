#include <stdio.h>


int main() {
	
	int day;
	int month;
	int year;
	
	printf("day of birth: ");
	scanf("%i",&day);
	
	printf("month of birth: ");
	scanf("%i",&month);
	
	printf("year of birth: ");
	scanf("%i",&year);
	

	
	// определить какой год - високосный или невисокосный	
	if (year%4==0)
	{
		printf("Год високосный \n");
	}
	else
	{
		printf("Год невисокосный \n");
	}
	
	// определить год по восточному календарю
	switch ((year-3)%12)
	 {
	 	case 0:
	 		printf("Год по восточному календарю - Свинья \n");
	 		break;
	 	case 1:
	 		printf("Год по восточному календарю - Мышь\n");
	 		break;
	 	case 2:
	 		printf("Год по восточному календарю - Корова \n");
	 		break;	 
	 	case 3:
	 		printf("Год по восточному календарю - Тигр \n");
	 		break;	 
	 	case 4:
	 		printf("Год по восточному календарю - Заяц \n");
	 		break;	
	 	case 5:
	 		printf("Год по восточному календарю - Дракон \n");
	 		break;	
	 	case 6:
	 		printf("Год по восточному календарю - Змея \n");
	 		break;				 			 		 		
	 	case 7:
	 		printf("Год по восточному календарю - Лошадь \n");
	 		break;		 		
	 	case 8:
	 		printf("Год по восточному календарю - Овца \n");
	 		break;		 		
	 	case 9:
	 		printf("Год по восточному календарю - Обезьяна \n");
	 		break;	
	 	case 10:
	 		printf("Год по восточному календарю - Петух \n");
	 		break;	
	 	case 11:
	 		printf("Год по восточному календарю - Собака \n");
	 		break;		 		
			 			 	 		
		default:
			printf("Проверьте год рождения! \n");	 	
	 }
	   
	// Знак зодика - условие залания: следующий знак в диапозоне с 21 дня текущего месяца по 20 дня следующего месяца
	if ((month==12&&day>21)||(month==1&&day<20)) {
			printf("Знак зодиака - Козерог");
		}
	else if ((month==1&&day>21)||(month==2&&day<20)) {
			printf("Знак зодиака - Водолей");
		}
	else if ((month==2&&day>21)||(month==3&&day<20)) {
			printf("Знак зодиака - Рыбы");			
		}  			  
	else if ((month==3&&day>21)||(month==4&&day<20)) {
			printf("Знак зодиака - Овен");			
		}  
	else if ((month==4&&day>21)||(month==5&&day<20)) {
			printf("Знак зодиака - Телец");			
	}  	
	else if ((month==5&&day>21)||(month==6&&day<20)) {
			printf("Знак зодиака - Близнецы");			
	}  
	else if ((month==6&&day>21)||(month==7&&day<20)) {
			printf("Знак зодиака - Рак");			
	}  
	else if ((month==7&&day>21)||(month==8&&day<20)) {
			printf("Знак зодиака - Лев");			
	}  
	else if ((month==8&&day>21)||(month==9&&day<20)) {
			printf("Знак зодиака - Дева");			
	} 
	else if ((month==9&&day>21)||(month==10&&day<20)) {
			printf("Знак зодиака - Весы");			
	} 
	else if ((month==10&&day>21)||(month==11&&day<20)) {
			printf("Знак зодиака - Скорпион");			
	}  
	else if ((month==11&&day>21)||(month==12&&day<20)) {
			printf("Знак зодиака - Стрелец");			
	} 		 	 		
	else {
		printf("По введным данным определить знак зодиака невозможно! \n");
		printf("проверьте введеные данные!");
	}
}
