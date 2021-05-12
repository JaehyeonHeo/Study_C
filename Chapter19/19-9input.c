#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count; // 메인에서 가져옴
int total = 0;    // 다른 파일에서 사용 가능한 전역변수 선언 

int input_data(void)
{
	int pos; 

	while (1)
	{
		printf("양수 입력 : "); 
		scanf("%d", &pos); 
		if (pos < 0) break; 
		count++; 
		total += pos; 
	}

	return total; 
}