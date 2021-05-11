/*
	로그인 프로그램 
	1. id와 password 를 저장하고 파일이름은 password.txt
	2. 구조체 Login 변수에 id, password 멤버에 각각 저장을 시키고 
	3. 키보드로 입력되는 id, password를 비교하여 "로그인 되었습니다/로그인실패" 출력 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

// 구조체 선언
struct Login
{
	char id[20]; 
	char password[20]; 
};

int main(void)
{
	FILE* fi, * fp;

	struct Login s1;
	s1.id;
	s1.password;
	int res; 

	//아이디 저장된 파일 열기 
	fi = fopen("id.txt", "r");
	if (fi == NULL)
	{
		printf("파일이 열리지 않았습니다");
		return 1;
	}
	//아이디 데이터 가져와서 구조체 변수에 저장 
	while (1)
	{
		res = fscanf(fi, "%s", s1.id);
		if (res == EOF)
		{
			break;
		}
		fprintf(fi, "%s", s1.id);
	}
	fclose(fi); 

	// 패스워드 저장된 파일 열기
	fp = fopen("password.txt", "r"); 
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다"); 
		return 1; 
	}
	// 패스워드 데이터 가져와서 구조체 변수에 저장 
	while (1)
	{
		res = fscanf(fp, "%s", s1.password); 
		if (res == EOF)
		{
			break; 
		}
		fprintf(fp, "%s", s1.password);
	}
	fclose(fp); 

	char putid[20]; 
	char putpsw[20]; 
	// id, password 입력 
	printf("id를 입력하세요 : "); 
	gets(putid); 
	printf("password를 입력하세요 : "); 
	gets(putpsw); 
	
	printf("\n"); 
	//결과값 확인 
	if (*s1.id == *putid && *s1.password == *putpsw)
	{
		printf("<<<<<<<로그인 성공 !>>>>>>>\n"); 
	}
	else
	{
		printf("-------로그인 실패 !-------\n"); 
	}

	return 0; 
}