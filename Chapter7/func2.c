#include <stdio.h>

void func(); // <함수 선언(원형)>

int main()
{
	func();   // func <함수 호출> 

	return 0;
}

void func()  // 입력과 출력이 없는 <함수 정의> 
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res : %d", res);
}