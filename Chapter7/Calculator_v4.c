#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Calculator_v4.c
���� �������� - �Լ��� ����ؼ� ���� ����� !
*/

// �Լ����� 
int plus(int, int); 
int subtract(int, int); 
int multiple(int, int); 
int divide(int, int); 
void print_line(); 


// ����
int main(void)
{
	int a, b, result; 
	char calc; 

	// ���� �ݺ����� ����ؼ� ���� ��� 
	while (1)
	{
		printf("<���� 0 �Է½� ����>\n\n");
		printf("a���� �Է��ϼ��� : ");
		scanf("%d", &a);
		printf("\n"); 

		if (a == 0) break;   // a�� '0' �Է½� ���ѹݺ� ����! 

		printf("���� ��ȣ�� �Է��ϼ��� : ");
		scanf(" %c", &calc);
		printf("\n");
		printf("b���� �Է��ϼ��� : ");
		scanf("%d", &b);
		printf("\n");


		if (a > 0 && b > 0)  // a,b ���� ���� ������ ��� ���� ���� 
		{
			printf("����� : "); 

			if (calc == '+')
			{
				result = plus(a, b);				// �Լ�ȣ��
				printf("a + b = %d\n\n", result); 
			}
			else if (calc == '-')
			{
				result = subtract(a, b);			// �Լ�ȣ��
				printf("a - b = %d\n\n", result); 
			}
			else if (calc == '*')
			{
				result = multiple(a, b);			// �Լ�ȣ��
				printf("a x b = %d\n\n", result); 
			}
			else if (calc == '/')
			{
				result = divide(a, b);				// �Լ�ȣ�� 
				printf("a �� b = %d\n\n", result); 
			}
			else
			{
				printf("�����ȣ�� +,-,*,/ �� ����ϼ���\n"); // a, b ���� �߸��� ��� 
			}
		}
		else
		{
			printf("0 ���� ū ������ �Է��ϼ���\n");
		}
		print_line(); 
		printf("\n"); 
	}

}

// �Լ� ���� 
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
	for ( i = 0; i < 40; i++)
	{
		printf("-"); 
	}
}