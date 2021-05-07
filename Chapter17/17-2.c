#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20]; 
	int age; 
	double height; 
	char* intro; 
};

int main()
{
	struct profile yuni; 

	strcpy(yuni.name, "서하윤");  // 문자열 복사후 저장 
	yuni.age = 17; 
	yuni.height = 164.5; 

	yuni.intro = (char*)malloc(80); // 메모리 동적 할당 ! => heap영역에 저장 
	printf("자기소개 : "); 
	gets(yuni.intro); 

	printf("이름 : %s\n", yuni.name); 
	printf("나이 : %d\n", yuni.age); 
	printf("키 : %.1lf\n", yuni.height); 
	printf("자기소개 : %s\n", yuni.intro); 
	free(yuni.intro); 

	return 0; 
}