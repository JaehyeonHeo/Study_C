#include <stdio.h>

int main(void)
{
	int i; 
	int sum = 0; 

	for (i = 1; i <= 10; i++)
	{
		sum += i; 
		if (sum > 30) break; 
	}

	printf("누적값 : %d\n", sum); 
	printf("마지막으로 더한 값 : %d", i); 

	return 0; 
}