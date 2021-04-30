#include <stdio.h>

int main(void)
{
	char str[80]; 
	printf("문자열 입력 : "); 
	gets(str);							// gets() : 문자열 입력, getchar() : 문자 입력 <-> scanf()와 조금 다름 
	puts("입력된 문자열 출력 : "); 
	puts(str);							// puts() : 문자열 출력, putchar() : 문자 출력  <-> printf()와는 조금 다름

	return 0; 
}