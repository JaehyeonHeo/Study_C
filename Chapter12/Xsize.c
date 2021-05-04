#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 소문자를 넣으면 대문자로 출력 

int main(void)
{
	char str[20]; 
	char* ps = str; 
	int i; 

	printf("단어 입력 : "); 
	gets(str); 

	for ( i = 0; i < strlen(str); i++)
	{
		ps[i] = ps[i] - ('a' - 'A'); 
	}

	printf("대문자로 변환 : "); 
	puts(str); 


	return 0; 
}