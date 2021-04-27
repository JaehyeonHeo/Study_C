#define _CRT_SECURE_NO_WARNINGS  //컴파일 오류날시에 추가 !!
#include <stdio.h>
#include <string.h>				// strcpy() 함수 사용하기 위해 추가 


int main(void)
{
	char fruit[20] = "strawberry";   // 배열은 선언된 이후에 대입연산자로 다시 문자열을 입력할 수 없다 

	printf("%s\n", fruit); 
	strcpy(fruit, "banana");		// 배열 선언 이후에 다시 대입하기 위해 strcpy()함수 사용 
	printf("%s\n", fruit); 

	return 0; 
}