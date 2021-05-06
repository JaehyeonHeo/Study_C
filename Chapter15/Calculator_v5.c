#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Calculator_v5.c
���� �������� - �Լ��� ����ؼ� ���� ����� !
�Լ� �����͸� ����ؼ� �����
*/

// �Լ����� 

void func(int (*fp)(int, int));
int plus(int, int);
int subtract(int, int);
int multiple(int, int);
int divide(int, int);

void print_line();


// ����
int main(void)
{
	char calc;

	printf("���ϴ� ���� ��ȣ�� �Է��ϼ���( +, -, *, / ) : ");
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
		printf("�����ȣ�� +,-,*,/ �� ����ϼ���\n"); // a, b ���� �߸��� ��� 
	}

}

// �Լ� ���� 
void func(int (*fp)(int, int))
{
	int a, b, result;

	printf("a���� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("\n");

	printf("b���� �Է��ϼ��� : ");
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

void print_line()  // ���� ������ִ� �Լ� 
{
	int i;						// i = ���� ���� : �ش� �Լ� �������� ��밡�� 
	for (i = 0; i < 40; i++)
	{
		printf("-");
	}
}