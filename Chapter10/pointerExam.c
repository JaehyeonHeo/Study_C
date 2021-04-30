#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa); 
void print_ary(int* pa); 
void swap_ary(int* pa, int* pb); 


int main(void)
{
	int ary[10]; 
	int i; 
	int size = sizeof(ary) / sizeof(ary[0]); 
	 
	input_ary(ary); 
	print_ary(ary); 
	
	swap_ary(ary, ary); 
	print_ary(ary); 

	return 0; 
}

void input_ary(int* pa)
{
	int i; 

	printf("10개의 정수를 입력하세요 : ");
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", *(pa+i)); 
	}
}

void swap_ary(int *pa , int *pb)
{
	int i; 
	int temp;
	int size; 
	size = sizeof(pa) / sizeof(pa + 1);

	for (i = 0; i < 5; i++)
	{
		temp = pa[i]; 
		pa[i] = pb[size-i-1];
		pb[size - i - 1] = temp;
	}
}

void print_ary(int *pa)
{
	int i; 

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(pa + i));
	}
	printf("\n");
}