#include <stdio.h>

int main(void)
{
	int a = 10; 
	int* p = &a;
	double* pd; 

	pd = p;   // p == &a
	printf("%lf\n", *pd);   // *pd�� double���� ������ �̹Ƿ� double���� �����͸� ���� ����!!!!

	return 0; 
}