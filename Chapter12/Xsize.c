#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �ҹ��ڸ� ������ �빮�ڷ� ��� 

int main(void)
{
	char str[20]; 
	char* ps = str; 
	int i; 

	printf("�ܾ� �Է� : "); 
	gets(str); 

	for ( i = 0; i < strlen(str); i++)
	{
		ps[i] = ps[i] - ('a' - 'A'); 
	}

	printf("�빮�ڷ� ��ȯ : "); 
	puts(str); 


	return 0; 
}