#include <stdio.h>	
// if문 활용 
int main(void)
{
	int a = 20; 
	int b = 0; 

	if (a > 0)      // 중괄호는 없어도 되지만 두 문장 이상일때는 반드시 사용!!!!
	{
		b = a; 
	}

	printf("a : %d, b : %d\n", a, b); 

	return 0; 
}