#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char animal[5][20]; // 2차원 char배열 
	int i; 
	int count; 

	count = sizeof(animal) / sizeof(animal[0]); 

	for ( i = 0; i < 5; i++)  // 각 행에 문자열 입력 
	{
		scanf("%s", animal[i]); 
	}

	for ( i = 0; i < 5; i++)  // 각 행의 문자열 출력 
	{
		printf("%s ", animal[i]); 
	}

	return 0; 
}