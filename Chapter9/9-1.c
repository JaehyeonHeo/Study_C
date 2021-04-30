#include <stdio.h>

int main(void)
{
	int a; 
	double b; 
	char c; 
	
	printf("int형 변수의 주소 : %u\n", &a);     // 변수의 주소 : 할당된 메모리 공간의 시작 주소 !!
	printf("double형 변수의 주소 : %u\n", &b);  
	printf("char형 변수의 주소 : %u\n", &c);	//%u : 양수 출력 

	printf("char형 변수의 주소 : %p\n", &c);  // %p : 주소 (16진수 대문자로 출력)


	return 0;
}