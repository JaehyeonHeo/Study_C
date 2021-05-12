#include <stdio.h>
#define SUM(a, b) (a + b)  // 메크로 함수
#define MUL(a, b) (a * b)  // 메크로 함수는 사용 자제 
#define test(a) (a * 10)

int main(void)
{
	int a = 10, b = 20; 
	int x = 30, y = 40; 
	int res; 

	printf("a + b = %d\n", SUM(a, b)); 
	printf("x + y = %d\n", SUM(x, y)); 
	res = 30 / MUL(2, 5); 
	printf("res : %d\n", res); 
	printf("test(10) : %d", test((a+10))); 

	return 0; 
}