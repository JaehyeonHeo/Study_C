#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	int a ; 
	char b; 

	printf("정수하나를 입력하세요 : "); 
	scanf("%d", &a);						
	// 정수값을 입력하고 엔터 하면 버퍼에 엔터가 저장된다 그래서 밑에 scanf에서 엔터를 바로 받아버림 => 공백넣기 or getchar()

	printf("문자하나를 입력하세요 : "); 
	scanf(" %c", &b); 
	printf("입력하신 숫자는 %d, \n입력하신 문자는 %c 입니다", a, b); 

	return 0; 
}