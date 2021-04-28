#include <stdio.h>

int main(void)
{
	int a = 1; 
	                          // do ~ while문은 무조건 한번은 실행하고 조건을 따진다. 
	do
	{
		a = a * 2; 
	} while (a < 10);

	printf("a : %d", a); 

	return 0; 
}