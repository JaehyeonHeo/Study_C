#include <stdio.h>

void add_ten(int); 

int main(void)
{
	int a = 10; 

	add_ten(a);             // a���� �����ؼ� �Լ��� ���� !
	printf("a : %d\n", a);  // a�� ���� �״�� ���� �޸𸮿� �ִ� ���� ��� ! 

	return 0;
}

void add_ten(int a)  // ���� �����ؼ� �����ϴ� ��� 
{
	a = a + 10; 
}

// main������ a���̶� �Լ�add_ten()������ a���� ���� �ٸ� �޸�(stack)�� ����ȴ�. 