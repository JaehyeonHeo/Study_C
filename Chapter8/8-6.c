#include <stdio.h>

int main(void)
{
	char str[80]; 
	printf("���ڿ� �Է� : "); 
	gets(str);							// gets() : ���ڿ� �Է�, getchar() : ���� �Է� <-> scanf()�� ���� �ٸ� 
	puts("�Էµ� ���ڿ� ��� : "); 
	puts(str);							// puts() : ���ڿ� ���, putchar() : ���� ���  <-> printf()�ʹ� ���� �ٸ�

	return 0; 
}