#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count; // ���ο��� ������
int total = 0;    // �ٸ� ���Ͽ��� ��� ������ �������� ���� 

int input_data(void)
{
	int pos; 

	while (1)
	{
		printf("��� �Է� : "); 
		scanf("%d", &pos); 
		if (pos < 0) break; 
		count++; 
		total += pos; 
	}

	return total; 
}