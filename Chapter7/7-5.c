#include <stdio.h>	

void fruit(); 

int main(void)
{
	fruit(); 

	return 0; 
}

void fruit()  // ����Լ� : ���� �ݺ��ǹǷ� �����Ű�� ��� �ʿ� !
{
	printf("apple"); 
	fruit(); 
}