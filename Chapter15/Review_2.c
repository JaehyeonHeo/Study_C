#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

void print_std(int(*pstd)[4]);
void print_sub(int(*psub)[4]); 

int main(void)
{
	int score[5][4];
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ���� �Է� : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	
	print_std(score); 

	print_sub(score); 
	
	return 0; 
}

// ���� �л� ����,�հ�, ��� ��� �Լ�
void print_std(int (*pstd)[4])
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		int stdtotal = 0;
		double stdavg; 

		printf("%d�� �л��� ���� : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pstd[i][j]);

			stdtotal += pstd[i][j];
		}
		printf("\n");
		printf("�հ� : %d ", stdtotal);
		stdavg = stdtotal / 4;
		printf("��� : %.1lf\n", stdavg);
	}
}

// ���� ���� ����,�հ�,��� ��� �Լ� 
void print_sub(int (*psub)[4])
{
	int subtotal[4];
	double subavg[4];
	int i, j; 

	for (i = 0; i < 4; i++)
	{
		subtotal[i] = 0;
		for (j = 0; j < 5; j++)
		{
			subtotal[i] += psub[j][i];
		}
		subavg[i] = subtotal[i] / 5;
		printf("%d�� ������ �� : %d, ��� : %.1lf\n", i + 1, subtotal[i], subavg[i]); 
	}
}