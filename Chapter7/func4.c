#include <stdio.h>

int func(int, int);  // 함수 선언

int main()
{
	int a = 10, b = 20; 
	int result; 

	result = func(a, b);              // 함수 호출
	printf("result : %d\n", result); 

	return 0; 
}

int func(int aa, int ab)    // 함수 정의 
{
	int res = aa + ab;     // res는 지역변수 ! 전역 변수는 모든 곳에서 사용 가능하지만 전역변수는 함수 내에서만 사용

	return res; 
}