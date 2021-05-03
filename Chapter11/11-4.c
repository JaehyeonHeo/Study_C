#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	char ch; 
	int i; 

	for ( i = 0; i < 3; i++)   // 반복문 실행하는 동안 버퍼에 tiger라는 문자열 저장 후 하나씩 출력 !!
	{
		scanf("%c", &ch);   // tiger 입력하기 !!
		printf("%c", ch); 
	}

	return 0; 
}