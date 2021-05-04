#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear"; 
	char str2[80] = "peach"; 

	printf("사전에 나중에 나오는 과일 이름 : "); 

	// strcmp() 사전 순서 비교함수 : str1이 str2보다 먼저이면 -1, 나중이면 1 반환 !
	// 대소문자가 일치해야 비교가능 !!!!
	if (strcmp(str1, str2) > 0)  
	{
		printf("%s\n", str1); 
	}
	else
	{
		printf("%s\n", str2); 
	}

	// strncmp() 비교할 문자 개수를 3번째 인수로 지정!
	if (strncmp(str1, str2, 3) == 0)
	{
		printf("3번째 자리까지 문자열의 순서가 같음\n"); 
	}
	else
	{
		printf("문자열의 순서가 다름"); 
	}

	return 0; 
}