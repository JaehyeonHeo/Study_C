#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	int a ; 
	char b; 

	printf("�����ϳ��� �Է��ϼ��� : "); 
	scanf("%d", &a);						
	// �������� �Է��ϰ� ���� �ϸ� ���ۿ� ���Ͱ� ����ȴ� �׷��� �ؿ� scanf���� ���͸� �ٷ� �޾ƹ��� => ����ֱ� or getchar()

	printf("�����ϳ��� �Է��ϼ��� : "); 
	scanf(" %c", &b); 
	printf("�Է��Ͻ� ���ڴ� %d, \n�Է��Ͻ� ���ڴ� %c �Դϴ�", a, b); 

	return 0; 
}