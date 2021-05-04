#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][4]; // 2차원 배열 선언 
	int total; 
	double avg; 
	int i, j; 

	for ( i = 0; i < 3; i++)               // 행의 배열
	{
		printf("4과목의 점수 입력 : "); 
		for ( j = 0; j < 4; j++)           // 열의 배열 
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
		printf("%d번의 총점 : %d, 평균 : %.2lf\n", i+1 , total , avg); 
	}

	return 0; 
}