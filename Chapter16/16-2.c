#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi; 
	int i, sum = 0; 

	pi = (int*)malloc(5 * sizeof(int)); 
	if (pi == NULL)
	{
		printf("메모리가 부족합니다 !"); 
		exit(1); 
	}
	printf("다섯 명의 나이를 입력하세요 : "); 
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]); 
		// 누적해서 계산하는 변수는 반드시 초기화를 해야한다!!!!
		sum += pi[i];         
	}
	printf("다섯명의 평균 나이 : %.1lf\n", (sum / 5.0)); 
	free(pi); 

	return 0; 
}