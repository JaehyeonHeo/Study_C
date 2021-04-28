#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10; 

	if (a >= 10)
	{
		a = 1; 
	}
	else
	{
		a = -1; 
	}

	printf("aÀÇ °ª : %d", a); 
	
	return 0; 
}