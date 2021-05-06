#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Calculator_v5.c
계산기 최종버전 - 함수를 사용해서 계산기 만들기 !
함수 포인터를 사용해서 만들기
*/

// 함수선언 

void func(int (*fp)(int, int));
int plus(int, int);
int subtract(int, int);
int multiple(int, int);
int divide(int, int);

void print_line();


// 메인
int main(void)
{
	char calc;

	printf("원하는 연산 기호를 입력하세요( +, -, *, / ) : ");
	scanf(" %c", &calc);
	printf("\n");

	if (calc == '+')
	{
		func(plus);
	}
	else if (calc == '-')
	{
		func(subtract);
	}
	else if (calc == '*')
	{
		func(multiple);
	}
	else if (calc == '/')
	{
		func(divide);
	}
	else
	{
		printf("연산기호는 +,-,*,/ 만 사용하세요\n"); // a, b 값이 잘못된 경우 
	}

}

// 함수 정의 
void func(int (*fp)(int, int))
{
	int a, b, result;

	printf("a값을 입력하세요 : ");
	scanf("%d", &a);
	printf("\n");

	printf("b값을 입력하세요 : ");
	scanf("%d", &b);
	printf("\n");

	result = fp(a, b);
	printf("%d\n\n", result);
}

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
	for (i = 0; i < 40; i++)
	{
		printf("-");
	}
}