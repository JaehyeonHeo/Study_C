#include <stdio.h>

int func(int, int);  // �Լ� ����

int main()
{
	int a = 10, b = 20; 
	int result; 

	result = func(a, b);              // �Լ� ȣ��
	printf("result : %d\n", result); 

	return 0; 
}

int func(int aa, int ab)    // �Լ� ���� 
{
	int res = aa + ab;     // res�� �������� ! ���� ������ ��� ������ ��� ���������� ���������� �Լ� �������� ���

	return res; 
}