#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][4]; // 2���� �迭 ���� 
	int total; 
	double avg; 
	int i, j; 

	for ( i = 0; i < 3; i++)               // ���� �迭
	{
		printf("4������ ���� �Է� : "); 
		for ( j = 0; j < 4; j++)           // ���� �迭 
		{
			scanf("%d", &score[i][j]); 
		}
	}

	for ( i = 0; i < 3; i++)
	{
		total = 0; 
		for ( j = 0; j < 4; j++)
		{
			total += score[i][j]; 
		}
		avg = total / 4.0;
		printf("%d���� ���� : %d, ��� : %.2lf\n", i+1 , total , avg); 
	}

	return 0; 
}