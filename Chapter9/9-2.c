#include <stdio.h>	

int main(void)
{
	int a;
	int *pa;   // * : ���������� ��Ÿ���� ��ȣ 

	pa = &a;   // pa�� a�� �ּ� ���� 
	*pa = 10;  // * : ������(�����Ͱ��� ���ϴ�)

	printf("�����ͷ� a �� ��� : %d\n", *pa); 
	printf("���������� a �� ��� : %d\n", a); 

	printf("a�� �ּ� : %p\n", pa); 

	return 0;
}