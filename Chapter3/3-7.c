#define _CRT_SECURE_NO_WARNINGS  //������ �������ÿ� �߰� !!
#include <stdio.h>
#include <string.h>				// strcpy() �Լ� ����ϱ� ���� �߰� 


int main(void)
{
	char fruit[20] = "strawberry";   // �迭�� ����� ���Ŀ� ���Կ����ڷ� �ٽ� ���ڿ��� �Է��� �� ���� 

	printf("%s\n", fruit); 
	strcpy(fruit, "banana");		// �迭 ���� ���Ŀ� �ٽ� �����ϱ� ���� strcpy()�Լ� ��� 
	printf("%s\n", fruit); 

	return 0; 
}