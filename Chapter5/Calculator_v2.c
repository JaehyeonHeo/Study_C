#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Calcultor_v2 
��ȣ �Է¹޴� ���� 
*/
int main(void)
{
	int a, b, c; 
	char calc;

	printf("a���� �Է��ϼ��� : \n"); 
	scanf("%d", &a); 
	printf("���� ��ȣ�� �Է��ϼ��� : \n"); 
	scanf(" %c", &calc); 
	printf("b���� �Է��ϼ��� : \n"); 
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
			printf("�����ȣ�� +,-,*,/ �� ����ϼ���\n");
		}
	}
	else
	{
		printf("0 ���� ū ������ �Է��ϼ���\n"); 
	}
	

	return 0; 
}