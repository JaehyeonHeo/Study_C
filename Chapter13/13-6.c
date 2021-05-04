#include <stdio.h>

void add_ten(int); 

int main(void)
{
	int a = 10; 

	add_ten(a);             // a값을 복사해서 함수로 전달 !
	printf("a : %d\n", a);  // a의 값은 그대로 원래 메모리에 있던 값이 출력 ! 

	return 0;
}

void add_ten(int a)  // 값을 복사해서 전달하는 방법 
{
	a = a + 10; 
}

// main에서의 a값이랑 함수add_ten()에서의 a값은 서로 다른 메모리(stack)에 저장된다. 