#include <stdio.h>

void input_data(int* pa, int* pb)
{
	printf("�� ������ �Է� �ϼ��� : ");
	scanf("%d %d", pa, pb);
}

double average(int x, int y)
{
	int avgf;
	avgf = (x + y) / 2.0;

	return avgf;
}