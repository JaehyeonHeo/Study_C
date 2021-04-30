#include <stdio.h>	

int main(void)
{
	int i; 
	int ary[5] = { 10,20,30,40,50 }; 
	int size = sizeof(ary) / sizeof(ary[0]);

	for ( i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]); 
	}

	for ( i = size-1; i >= 0; i--)    // 4에서 시작, 0이 될때까지 1씩 감소하는 변수 i
	{
		printf("ary[%d] = %d\n", i, ary[i]); 
	}

	return 0; 
}