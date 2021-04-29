#include <stdio.h>	

void fruit(); 

int main(void)
{
	fruit(); 

	return 0; 
}

void fruit()  // 재귀함수 : 무한 반복되므로 종료시키는 기능 필요 !
{
	printf("apple"); 
	fruit(); 
}