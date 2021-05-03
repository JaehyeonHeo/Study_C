#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch1, ch2; 

	scanf(" %c %c", &ch1, &ch2);  // scanf함수에서 문자열을 입력할때는 "화이트스페이스"에 주의 ! 

	printf("[%c%c]", ch1, ch2); 

	return 0; 
}