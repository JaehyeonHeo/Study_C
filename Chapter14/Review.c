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
		printf("%d번 학생의 성적 입력 : ", i+1);
		for ( j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]); 
		}
	}

	for ( i = 0; i < 5; i++)
	{
		total = 0;

		printf("%d번 학생의 성적 : ", i+1); 
		for ( j = 0; j < 4; j++)
		{
			printf("%5d", score[i][j]); 
			 
			total += score[i][j]; 
		}
		printf("\n"); 
		printf("합계 : %d ", total); 
		avg = total / 4; 
		printf("평균 : %.1lf\n", avg); 
	}

	for ( j = 0; j < 4; j++)
	{
		subtotal[j] = 0; 
		for ( i = 0; i < 5; i++)
		{
			subtotal[j] += score[i][j];
		}
		subavg[j] = subtotal[j] / 5;
		printf("%d번 과목의 합 : %d, 평균 : %.1lf\n", j+1, subtotal[j], subavg[j]); 
	}
}