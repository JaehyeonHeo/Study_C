#include <stdio.h>

int main(void)
{
	int a; 
	double b; 
	char c; 
	
	printf("int�� ������ �ּ� : %u\n", &a);     // ������ �ּ� : �Ҵ�� �޸� ������ ���� �ּ� !!
	printf("double�� ������ �ּ� : %u\n", &b);  
	printf("char�� ������ �ּ� : %u\n", &c);	//%u : ��� ��� 

	printf("char�� ������ �ּ� : %p\n", &c);  // %p : �ּ� (16���� �빮�ڷ� ���)


	return 0;
}