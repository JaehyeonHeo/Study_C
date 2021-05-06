#include <stdio.h>

void swap_ptr(int** ppa, int** ppb); 

int main(void)
{
	int a = 1; 
	int b = 2; 
	int* pa = &a; 
	int* pb = &b; 


	printf("a -> %d, b -> %d\n", *pa, *pb); 

	swap_ptr(&pa, &pb); 

	printf("a -> %d, b -> %d\n", *pa, *pb); 

	return 0; 
}

void swap_ptr(int** ppa, int** ppb)
{
	int* pt; 
	pt = *ppa; 
	*ppa = *ppb; 
	*ppb = pt; 
}