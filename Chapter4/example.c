#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20]; 
	char address[50]; 
	int age; 

	printf("이름을 입력하세요 : "); 
	scanf("%s", &name); 
	printf("주소를 입력하세요 : "); 
	scanf("%s", &address); 
	printf("나이를 입력하세요 : "); 
	scanf("%d", &age); 
	printf("이름은 %s이고 \n 주소는 %s입니다\n 나이는 %d입니다", name, address, age); 

	return 0; 
}