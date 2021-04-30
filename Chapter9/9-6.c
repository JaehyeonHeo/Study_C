#include <stdio.h>

int main(void)
{
	int a = 10; 
	int* p = &a;
	double* pd; 

	pd = p;   // p == &a
	printf("%lf\n", *pd);   // *pd는 double형의 포인터 이므로 double형의 데이터만 저장 가능!!!!

	return 0; 
}