#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

// 함수 선언
void input_ary(double *pa, int);  // 함수 선언에서 포인터 정의 필수 !! 
double find_max(double *pa, int); 

int main(void)
{
	double ary[5]; 
	double max; 
	int size = sizeof(ary) / sizeof(ary[0]); 
	
	input_ary(ary, size);         // 함수 호출 
	max = find_max(ary, size);    // 함수 호출 
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0; 
}

// 함수 정의 
void input_ary(double *pa, int size)
{
	int i; 

	printf("%d개의 실수 값 입력 : ", size); 
	for ( i = 0; i < size; i++)
	{
		scanf("%lf", pa + i); 
	}
}

double find_max(double *pa, int size)
{
	double max; 
	int i; 

	max = pa[0]; 
	for ( i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i]; 
	}

	return max; 
}