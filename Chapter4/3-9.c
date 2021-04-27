#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	int a; 

	scanf("%d", &a);     // 주소연산자 &(앰퍼샌드) 사용 
	printf("입력된 값 : %d\n", a); 

	return 0; 
}