#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	FILE* fp; 
	int age; 
	char name[20]; 

	fp = fopen("a.txt", "r"); 

	fscanf(fp, "%d", &age); 
	while (fgetc(fp) != '\n') { } // 개행 문자 없애기 !
	
	fgets(name, sizeof(name), fp); 
	//fscanf(fp, "%s", name); 

	printf("나이 : %d, 이름 : %s", age, name); 
	fclose(fp); 

	return 0; 
}