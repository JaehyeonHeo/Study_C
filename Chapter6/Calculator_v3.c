#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Calcultor_v3
기호 입력받는 계산기
+ 무한 반복하다가 특정 키 값에서 종료 !
*/

int main(void)
{
	int a, b, c;
	char calc;

	// 무한 반복으로 계속해서 계산기 사용 
	while (1)
	{
		printf("<숫자 0 입력시 종료>\n"); 
		printf("a값을 입력하세요 : \n");
		scanf("%d", &a);

		if (a == 0) break;   // a에 '0' 입력시 무한반복 종료! 

		printf("연산 기호를 입력하세요 : \n");
		scanf(" %c", &calc);
		printf("b값을 입력하세요 : \n");
		scanf("%d", &b);

		
		if (a > 0 && b > 0)  // a,b 값이 양의 정수일 경우 연산 실행 
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
				printf("연산기호는 +,-,*,/ 만 사용하세요\n"); // a, b 값이 잘못된 경우 
			}
		}
		else
		{
			printf("0 보다 큰 정수만 입력하세요\n");
		}
	}

	return 0;
}