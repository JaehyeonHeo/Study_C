#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade; 
	
	printf("학번 입력 : "); 
	scanf("%d", &num); 

	getchar();   // 버퍼를 초기화 !!!! fflash()도 같은기능 

	printf("학점 입력 : ");  // 문자를 입력받을때는 항상 화이트스페이스에 유의 !!(버퍼에 있던 엔터값을 바로 받아버린다)
	grade = getchar();
	 
	printf("학번 : %d, 성적 : %c", num, grade); 

	return 0; 
}