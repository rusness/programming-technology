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
	

	
	// ���������� ����� ��� - ���������� ��� ������������	
	if (year%4==0)
	{
		printf("��� ���������� \n");
	}
	else
	{
		printf("��� ������������ \n");
	}
	
	// ���������� ��� �� ���������� ���������
	switch ((year-3)%12)
	 {
	 	case 0:
	 		printf("��� �� ���������� ��������� - ������ \n");
	 		break;
	 	case 1:
	 		printf("��� �� ���������� ��������� - ����\n");
	 		break;
	 	case 2:
	 		printf("��� �� ���������� ��������� - ������ \n");
	 		break;	 
	 	case 3:
	 		printf("��� �� ���������� ��������� - ���� \n");
	 		break;	 
	 	case 4:
	 		printf("��� �� ���������� ��������� - ���� \n");
	 		break;	
	 	case 5:
	 		printf("��� �� ���������� ��������� - ������ \n");
	 		break;	
	 	case 6:
	 		printf("��� �� ���������� ��������� - ���� \n");
	 		break;				 			 		 		
	 	case 7:
	 		printf("��� �� ���������� ��������� - ������ \n");
	 		break;		 		
	 	case 8:
	 		printf("��� �� ���������� ��������� - ���� \n");
	 		break;		 		
	 	case 9:
	 		printf("��� �� ���������� ��������� - �������� \n");
	 		break;	
	 	case 10:
	 		printf("��� �� ���������� ��������� - ����� \n");
	 		break;	
	 	case 11:
	 		printf("��� �� ���������� ��������� - ������ \n");
	 		break;		 		
			 			 	 		
		default:
			printf("��������� ��� ��������! \n");	 	
	 }
	   
	// ���� ������ - ������� �������: ��������� ���� � ��������� � 21 ��� �������� ������ �� 20 ��� ���������� ������
	if ((month==12&&day>21)||(month==1&&day<20)) {
			printf("���� ������� - �������");
		}
	else if ((month==1&&day>21)||(month==2&&day<20)) {
			printf("���� ������� - �������");
		}
	else if ((month==2&&day>21)||(month==3&&day<20)) {
			printf("���� ������� - ����");			
		}  			  
	else if ((month==3&&day>21)||(month==4&&day<20)) {
			printf("���� ������� - ����");			
		}  
	else if ((month==4&&day>21)||(month==5&&day<20)) {
			printf("���� ������� - �����");			
	}  	
	else if ((month==5&&day>21)||(month==6&&day<20)) {
			printf("���� ������� - ��������");			
	}  
	else if ((month==6&&day>21)||(month==7&&day<20)) {
			printf("���� ������� - ���");			
	}  
	else if ((month==7&&day>21)||(month==8&&day<20)) {
			printf("���� ������� - ���");			
	}  
	else if ((month==8&&day>21)||(month==9&&day<20)) {
			printf("���� ������� - ����");			
	} 
	else if ((month==9&&day>21)||(month==10&&day<20)) {
			printf("���� ������� - ����");			
	} 
	else if ((month==10&&day>21)||(month==11&&day<20)) {
			printf("���� ������� - ��������");			
	}  
	else if ((month==11&&day>21)||(month==12&&day<20)) {
			printf("���� ������� - �������");			
	} 		 	 		
	else {
		printf("�� ������� ������ ���������� ���� ������� ����������! \n");
		printf("��������� �������� ������!");
	}
}
