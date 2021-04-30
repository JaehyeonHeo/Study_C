#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;  // pa 포인터가 가르키는 데이터 값을 못바꾸게 저장 
	int* const pb = &b;  // pb 포인터가 가르키는 주소 값을 못바꾸게 저장 

	// *pa = b; --> Error , *pa는 const값이므로 바꿀 수 없음 !
	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	

	return 0;
}