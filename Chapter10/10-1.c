#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[3]; 
	int i; 

	*(ary + 0) = 10; 
	*(ary + 1) = 20; 

	printf("����° �迭 �� �Է� : "); 
	scanf("%d", ary + 2); 

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i)); 
	}

	return 0; 
}