#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
  Calculator_v1.c

  Created : 2021-04-28
  Author : ������
*/
int main(void)
{
	int a, b; 
	int sum; 
	int sub;
	int mul; 
	int divi; 

	printf("�� ��(a,b)�� �Է��ϼ��� : "); 
	scanf("%d, %d", &a, &b); 
	
	sum = a + b; 
	printf("a + b = %d\n", sum); 
	sub = a - b; 
	printf("a - b = %d\n", sub); 
	mul = a * b; 
	printf("a * b = %d\n", mul);
	divi = a / b; 
	printf("a / b = %d\n", divi); 

	return 0; 
}