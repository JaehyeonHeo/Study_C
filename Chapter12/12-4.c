#include <stdio.h>

int main(void)
{
	char str[80]; 

	printf("������ ���Ե� ���ڿ� �Է� : "); 
	gets(str);   // ���鵵 ����ϴ� ���ڿ� ����Լ� ! gets()
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str); 

	return 0; 
}