#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	int score[5][4]; 
	int total; 
	double avg; 

	int subtotal[4];
	double subavg[4]; 

	int i, j; 

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ���� �Է� : ", i+1);
		for ( j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]); 
		}
	}

	for ( i = 0; i < 5; i++)
	{
		total = 0;

		printf("%d�� �л��� ���� : ", i+1); 
		for ( j = 0; j < 4; j++)
		{
			printf("%5d", score[i][j]); 
			 
			total += score[i][j]; 
		}
		printf("\n"); 
		printf("�հ� : %d ", total); 
		avg = total / 4; 
		printf("��� : %.1lf\n", avg); 
	}

	for ( j = 0; j < 4; j++)
	{
		subtotal[j] = 0; 
		for ( i = 0; i < 5; i++)
		{
			subtotal[j] += score[i][j];
		}
		subavg[j] = subtotal[j] / 5;
		printf("%d�� ������ �� : %d, ��� : %.1lf\n", j+1, subtotal[j], subavg[j]); 
	}
}