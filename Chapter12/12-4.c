#include <stdio.h>

int main(void)
{
	char str[80]; 

	printf("공백이 포함된 문자열 입력 : "); 
	gets(str);   // 공백도 출력하는 문자열 출력함수 ! gets()
	printf("입력한 문자열은 %s입니다.", str); 

	return 0; 
}