#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20]; 
	char address[50]; 
	int age; 

	printf("�̸��� �Է��ϼ��� : "); 
	scanf("%s", &name); 
	printf("�ּҸ� �Է��ϼ��� : "); 
	scanf("%s", &address); 
	printf("���̸� �Է��ϼ��� : "); 
	scanf("%d", &age); 
	printf("�̸��� %s�̰� \n �ּҴ� %s�Դϴ�\n ���̴� %d�Դϴ�", name, address, age); 

	return 0; 
}