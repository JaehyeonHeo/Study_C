#include <stdio.h>

int main(void)
{
	int a = 1; 
	                          // do ~ while���� ������ �ѹ��� �����ϰ� ������ ������. 
	do
	{
		a = a * 2; 
	} while (a < 10);

	printf("a : %d", a); 

	return 0; 
}