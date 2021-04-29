#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Calculator_v4.c
계산기 최종버전 - 함수를 사용해서 계산기 만들기 !
*/

// 함수선언 
int plus(int, int); 
int subtract(int, int); 
int multiple(int, int); 
int divide(int, int); 
void print_line(); 


// 메인
int main(void)
{
	int a, b, result; 
	char calc; 

	// 무한 반복으로 계속해서 계산기 사용 
	while (1)
	{
		printf("<숫자 0 입력시 종료>\n\n");
		printf("a값을 입력하세요 : ");
		scanf("%d", &a);
		printf("\n"); 

		if (a == 0) break;   // a에 '0' 입력시 무한반복 종료! 

		printf("연산 기호를 입력하세요 : ");
		scanf(" %c", &calc);
		printf("\n");
		printf("b값을 입력하세요 : ");
		scanf("%d", &b);
		printf("\n");


		if (a > 0 && b > 0)  // a,b 값이 양의 정수일 경우 연산 실행 
		{
			printf("계산결과 : "); 

			if (calc == '+')
			{
				result = plus(a, b);				// 함수호출
				printf("a + b = %d\n\n", result); 
			}
			else if (calc == '-')
			{
				result = subtract(a, b);			// 함수호출
				printf("a - b = %d\n\n", result); 
			}
			else if (calc == '*')
			{
				result = multiple(a, b);			// 함수호출
				printf("a x b = %d\n\n", result); 
			}
			else if (calc == '/')
			{
				result = divide(a, b);				// 함수호출 
				printf("a ÷ b = %d\n\n", result); 
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
		print_line(); 
		printf("\n"); 
	}

}

// 함수 정의 
int plus(int x, int y)
{
	int sum; 
	sum = x + y; 

	return sum; 
}

int subtract(int x, int y)
{
	int sub; 
	sub = x - y; 

	return sub; 
}

int multiple(int x, int y)
{
	int mul; 
	mul = x * y; 

	return mul; 
}

int divide(int x, int y)
{
	int div; 
	div = x / y; 

	return div; 
}

void print_line()  // 라인 만들어주는 함수 
{
	int i;						// i = 지역 변수 : 해당 함수 내에서만 사용가능 
	for ( i = 0; i < 40; i++)
	{
		printf("-"); 
	}
}