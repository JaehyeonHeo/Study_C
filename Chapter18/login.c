/*
	�α��� ���α׷� 
	1. id�� password �� �����ϰ� �����̸��� password.txt
	2. ����ü Login ������ id, password ����� ���� ������ ��Ű�� 
	3. Ű����� �ԷµǴ� id, password�� ���Ͽ� "�α��� �Ǿ����ϴ�/�α��ν���" ��� 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

// ����ü ����
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

	//���̵� ����� ���� ���� 
	fi = fopen("id.txt", "r");
	if (fi == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�");
		return 1;
	}
	//���̵� ������ �����ͼ� ����ü ������ ���� 
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

	// �н����� ����� ���� ����
	fp = fopen("password.txt", "r"); 
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�"); 
		return 1; 
	}
	// �н����� ������ �����ͼ� ����ü ������ ���� 
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
	// id, password �Է� 
	printf("id�� �Է��ϼ��� : "); 
	gets(putid); 
	printf("password�� �Է��ϼ��� : "); 
	gets(putpsw); 
	
	printf("\n"); 
	//����� Ȯ�� 
	if (*s1.id == *putid && *s1.password == *putpsw)
	{
		printf("<<<<<<<�α��� ���� !>>>>>>>\n"); 
	}
	else
	{
		printf("-------�α��� ���� !-------\n"); 
	}

	return 0; 
}