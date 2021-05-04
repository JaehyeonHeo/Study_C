#include <stdio.h>	

void add_ten(int* pa);  // 포인터를 사용할때는 함수 선언에 포인터 표시 ! 

int main(void)
{
	int a = 10; 

	add_ten(&a); 
	printf("a : %d\n", a); 

	return 0; 
}

void add_ten(int *pa)
{
	*pa = *pa + 10; 
}