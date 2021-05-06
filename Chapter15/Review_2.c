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
		printf("%d번 학생의 성적 입력 : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	
	print_std(score); 

	print_sub(score); 
	
	return 0; 
}

// 개별 학생 성적,합계, 평균 출력 함수
void print_std(int (*pstd)[4])
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		int stdtotal = 0;
		double stdavg; 

		printf("%d번 학생의 성적 : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pstd[i][j]);

			stdtotal += pstd[i][j];
		}
		printf("\n");
		printf("합계 : %d ", stdtotal);
		stdavg = stdtotal / 4;
		printf("평균 : %.1lf\n", stdavg);
	}
}

// 개별 과목 성적,합계,평균 출력 함수 
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
		printf("%d번 과목의 합 : %d, 평균 : %.1lf\n", i + 1, subtotal[i], subavg[i]); 
	}
}