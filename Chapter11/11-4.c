#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	char ch; 
	int i; 

	for ( i = 0; i < 3; i++)   // �ݺ��� �����ϴ� ���� ���ۿ� tiger��� ���ڿ� ���� �� �ϳ��� ��� !!
	{
		scanf("%c", &ch);   // tiger �Է��ϱ� !!
		printf("%c", ch); 
	}

	return 0; 
}