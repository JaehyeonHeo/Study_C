#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

// �Լ� ����
void input_ary(double *pa, int);  // �Լ� ���𿡼� ������ ���� �ʼ� !! 
double find_max(double *pa, int); 

int main(void)
{
	double ary[5]; 
	double max; 
	int size = sizeof(ary) / sizeof(ary[0]); 
	
	input_ary(ary, size);         // �Լ� ȣ�� 
	max = find_max(ary, size);    // �Լ� ȣ�� 
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0; 
}

// �Լ� ���� 
void input_ary(double *pa, int size)
{
	int i; 

	printf("%d���� �Ǽ� �� �Է� : ", size); 
	for ( i = 0; i < size; i++)
	{
		scanf("%lf", pa + i); 
	}
}

double find_max(double *pa, int size)
{
	double max; 
	int i; 

	max = pa[0]; 
	for ( i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i]; 
	}

	return max; 
}