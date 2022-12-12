#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool is_Square(int n)
{    
    for (int i = 1; i*i <= n; i++)
        if (i*i==n) 
		return true;
    return false;
}

void is_Square(int n, bool&k)
{    
    for (int i = 1; i*i <= n; i++)
        if (i*i==n)
		 {
		 	k=true;
		 	return;
		 }
    k=false;
}
 
void is_Square(int n, bool*k)
{    
    for (int i = 1; i*i <= n; i++)
        if (i*i==n) 
		{
			*k=true;
			return;
		}
    *k=false;
}

int main()
{
	setlocale(LC_ALL, "Russian");
    
	int n1, n2, n3, v;
	bool rez; // результат
	
	printf("n1 = ");
	scanf("%d",&n1);
	printf("n2 = ");
	scanf("%d",&n2);
	printf("n3 = ");
	scanf("%d",&n3);
		
	// обычный вызов
	if (is_Square(n1))
		v ++;
	if (is_Square(n2))
		v ++;
	if (is_Square(n3))
		v ++;		
	printf("1. Из введенных чисел имееются - %d\n", v);	

	// через указатель
	v=0;
    is_Square(n1, rez); 
	if(rez) v++;
    is_Square(n2, rez);
	if(rez) v++;
    is_Square(n3, rez);
	if(rez) v++;
	printf("2. Из введенных чисел имееются - %d\n", v);	
	
	// через ссылку
	v=0;
    is_Square(n1, &rez); 
	if(rez) v++;
    is_Square(n2, &rez);
	if(rez) v++;
    is_Square(n3, &rez);
	if(rez) v++;
	printf("3. Из введенных чисел имееются - %d\n", v);	
	
	return 0;
}
