#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char animal[5][20]; // 2���� char�迭 
	int i; 
	int count; 

	count = sizeof(animal) / sizeof(animal[0]); 

	for ( i = 0; i < 5; i++)  // �� �࿡ ���ڿ� �Է� 
	{
		scanf("%s", animal[i]); 
	}

	for ( i = 0; i < 5; i++)  // �� ���� ���ڿ� ��� 
	{
		printf("%s ", animal[i]); 
	}

	return 0; 
}