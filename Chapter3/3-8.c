#include <stdio.h>

int main(void)
{
	int income = 0; 
	double tax; 
	const double tax_rate = 0.12;     // const는 사용과 동시에 값을 초기화 해야한다!!!!
	//tax_rate = 0.15;   const로 상수화 시켰기 때문에 값을 바꿀수 없다! 

	income = 456; 
	tax = income * tax_rate; 
	printf("세금은 : %.1lf입니다.\n", tax); 

	return 0; 
}