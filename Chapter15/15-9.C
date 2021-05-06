#include <stdio.h>

int main()
{
	int a = 10; 
	double b = 3.5; 
	void* p;     // void 포인터 !!

	p = &a; 
	printf("a : %d\n", *(int*)p);   // 데이터를 읽어올때 포인터의 형식을 지정!! 

	p = &b; 
	printf("b : %.1lf\n", *(double*)p); 

	return 0; 
}