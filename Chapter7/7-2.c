#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(); 

int main(void)
{
	int result; 

	result = get_num(); 
	printf("반환값 : %d\n", result); 
	return 0; 
}

int get_num()
{
	int num; 

	printf("양수 입력 : "); 
	scanf("%d", &num); 

	return num; 
}