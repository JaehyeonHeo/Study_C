#include <stdio.h>

int main(void)
{
	int a = 20, b = 3; 
	double res; 

	res = ((double)a) / ((double)b);   // 하나만 형변환 해도 자동 형 변환 가능 !
	printf("a = %d, b = %d\n", a, b); 
	printf("a / b 의 결과 : %.1lf\n", res); 

	a = (int)res; 
	printf("(int) %.1lf의 결과 : %d\n", res, a); 
	
	return 0; 
}