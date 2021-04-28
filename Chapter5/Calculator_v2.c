#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Calcultor_v2 
기호 입력받는 계산기 
*/
int main(void)
{
	int a, b, c; 
	char calc;

	printf("a값을 입력하세요 : \n"); 
	scanf("%d", &a); 
	printf("연산 기호를 입력하세요 : \n"); 
	scanf(" %c", &calc); 
	printf("b값을 입력하세요 : \n"); 
	scanf("%d", &b); 
	
	if (a > 0 && b > 0)
	{
		if (calc == '+')
		{
			c = a + b;
			printf("a %c b = %d\n", calc, c);
		}
		else if (calc == '-')
		{
			c = a - b;
			printf("a %c b = %d\n", calc, c);
		}
		else if (calc == '*')
		{
			c = a * b;
			printf("a %c b = %d\n", calc, c);
		}
		else if (calc == '/')
		{
			c = a / b;
			printf("a %c b = %d\n", calc, c);
		}
		else
		{
			printf("연산기호는 +,-,*,/ 만 사용하세요\n");
		}
	}
	else
	{
		printf("0 보다 큰 정수만 입력하세요\n"); 
	}
	

	return 0; 
}