#include <stdio.h>	

int main(void)
{
	int a;
	int *pa;   // * : 포인터임을 나타내는 기호 

	pa = &a;   // pa에 a의 주소 저장 
	*pa = 10;  // * : 연산자(데이터값을 구하는)

	printf("포인터로 a 값 출력 : %d\n", *pa); 
	printf("변수명으로 a 값 출력 : %d\n", a); 

	printf("a의 주소 : %p\n", pa); 

	return 0;
}