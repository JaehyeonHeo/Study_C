#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언
void input_ary(int* pa, int); 
void print_ary(int* pa, int); 
void swap_ary(int* pa, int* pb); 

int main(void)
{
	int ary[10]; 
	int i; 
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);  // 배열입력함수 호출
	printf("입력된 함수 출력 : "); 
	print_ary(ary, size);  // 배열출력함수 호출
	
	printf("거꾸로 배열 : "); 
	swap_ary(ary, ary);    // 배열순서바꾸는 함수 호출
	print_ary(ary, size);  // 배열출력함수 호출

	return 0; 
}

// 함수 정의 
void input_ary(int* pa, int size) //배열입력함수
{
	int i; 

	printf("%d개의 정수를 입력하세요 : ", size);
	for ( i = 0; i < size; i++)
	{
		scanf("%d", &pa[i]); 
	}
}

void swap_ary(int *pa , int *pb) //배열순서바꾸는 함수
{
	int i; 
	int temp;

	for (i = 0; i < 5; i++)
	{
		temp = pa[i]; 
		pa[i] = pb[10-i-1];
		pb[10 - i - 1] = temp;
	}
}

void print_ary(int *pa, int size) //배열출력함수 
{
	int i; 

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}