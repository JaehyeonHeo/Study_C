#include <stdio.h>

void swap(int, int); 

int main(void)
{
	int a = 10, b = 20; 

	swap(&a, &b); 
	printf("a : %d, b : %d\n", a, b); 


	return 0; 
}

void swap(int* pa, int* pb)
{
	int temp; 

	temp = *pa;    // *pa = a 
	*pa = *pb; 
	*pb = temp; 
}