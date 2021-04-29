/* 입력이 있는 함수 */
#include <stdio.h>

void func(int, int); // 함수선언 - 함수선언에서는 변수명 생략 가능 

int main()
{
	int a, b; 
	a = 10, b = 20;
	 
	func(a, b); // 입력이 있는 함수 호출 

	return 0; 
}

void func(int aa, int ab) // 함수 정의 
{
	int res; 
	res = aa + ab; 
	printf("res : %d\n", res); 
}