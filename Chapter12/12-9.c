#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree"; 

	strncpy(str, "apple\0-pie", 6); // �ι��ڸ� ������ �޺κ��� ����� ! 

	printf("%s\n", str); 

	return 0; 
}