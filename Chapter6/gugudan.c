#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, i;

	printf("���ϴ� ������ �Է� : ");
	scanf("%d", &a);

	if (a >= 2 && a <= 9)
	{
		for (i = 1; i < 10; i++)
		{
			printf("%d X %d = %d\n", a, i, a * i);
		}
	}
	else
	{
		printf("2 ~ 9������ ���� �Է��ϼ���"); 
	}

	return 0; 
}