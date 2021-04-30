#include <stdio.h>	

int swap(int, int); 

int main(void)
{
	int a = 10, b = 20; 

	swap(a, b); 
	printf("a의 값 : %d\n b의 값 : %d", a, b); 

	return 0; 
}

int swap(int x, int y)  // pointer 사용 X
{
	int temp; 
	temp = x; 
	x = y; 
	y = temp; 

	return x, y; 
}