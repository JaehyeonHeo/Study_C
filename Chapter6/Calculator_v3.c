#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Calcultor_v3
��ȣ �Է¹޴� ����
+ ���� �ݺ��ϴٰ� Ư�� Ű ������ ���� !
*/

int main(void)
{
	int a, b, c;
	char calc;

	// ���� �ݺ����� ����ؼ� ���� ��� 
	while (1)
	{
		printf("<���� 0 �Է½� ����>\n"); 
		printf("a���� �Է��ϼ��� : \n");
		scanf("%d", &a);

		if (a == 0) break;   // a�� '0' �Է½� ���ѹݺ� ����! 

		printf("���� ��ȣ�� �Է��ϼ��� : \n");
		scanf(" %c", &calc);
		printf("b���� �Է��ϼ��� : \n");
		scanf("%d", &b);

		
		if (a > 0 && b > 0)  // a,b ���� ���� ������ ��� ���� ���� 
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
				printf("�����ȣ�� +,-,*,/ �� ����ϼ���\n"); // a, b ���� �߸��� ��� 
			}
		}
		else
		{
			printf("0 ���� ū ������ �Է��ϼ���\n");
		}
	}

	return 0;
}