#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;  // pa �����Ͱ� ����Ű�� ������ ���� ���ٲٰ� ���� 
	int* const pb = &b;  // pb �����Ͱ� ����Ű�� �ּ� ���� ���ٲٰ� ���� 

	// *pa = b; --> Error , *pa�� const���̹Ƿ� �ٲ� �� ���� !
	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a �� : %d\n", *pa);

	

	return 0;
}