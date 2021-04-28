#include <stdio.h>	

int main(void)
{
	int a = 10, b = 20; 
	int c = 10, d = 20; 
	++a; 
	--b; 
	c++; 
	d--; 

	printf("a의 값 : %d\n", a); 
	printf("b의 값 : %d\n", b); 

	printf("c의 값 : %d\n", c); 
	printf("d의 값 : %d\n", d); 

}