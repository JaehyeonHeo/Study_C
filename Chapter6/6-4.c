#include <stdio.h>

int main(void)
{
	int i, j, k; 

	// �Ƕ�̵��� �� ��� 
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < (2*i+1); k++)
		{
			printf("*"); 
		}
		printf("\n"); 
	}

	// ���Ƕ�̵��� �����
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" "); 
		}
		for (k = 0; k < (13-2*i); k++)
		{
			printf("*"); 
		}
		printf("\n"); 
	}
	

	return 0; 
}