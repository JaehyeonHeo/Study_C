#include <stdio.h>

int main(void)
{
	int i, j, k; 

	// 피라미드모양 점 찍기 
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < (2*i+1); k++)
		{
			printf("*"); 
		}
		printf("\n"); 
	}

	// 역피라미드모양 점찍기
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" "); 
		}
		for (k = 0; k < (13-2*i); k++)
		{
			printf("*"); 
		}
		printf("\n"); 
	}
	

	return 0; 
}