#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch1, ch2; 

	scanf(" %c %c", &ch1, &ch2);  // scanf�Լ����� ���ڿ��� �Է��Ҷ��� "ȭ��Ʈ�����̽�"�� ���� ! 

	printf("[%c%c]", ch1, ch2); 

	return 0; 
}