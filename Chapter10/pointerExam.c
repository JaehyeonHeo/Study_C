#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� ����
void input_ary(int* pa, int); 
void print_ary(int* pa, int); 
void swap_ary(int* pa, int* pb); 

int main(void)
{
	int ary[10]; 
	int i; 
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);  // �迭�Է��Լ� ȣ��
	printf("�Էµ� �Լ� ��� : "); 
	print_ary(ary, size);  // �迭����Լ� ȣ��
	
	printf("�Ųٷ� �迭 : "); 
	swap_ary(ary, ary);    // �迭�����ٲٴ� �Լ� ȣ��
	print_ary(ary, size);  // �迭����Լ� ȣ��

	return 0; 
}

// �Լ� ���� 
void input_ary(int* pa, int size) //�迭�Է��Լ�
{
	int i; 

	printf("%d���� ������ �Է��ϼ��� : ", size);
	for ( i = 0; i < size; i++)
	{
		scanf("%d", &pa[i]); 
	}
}

void swap_ary(int *pa , int *pb) //�迭�����ٲٴ� �Լ�
{
	int i; 
	int temp;

	for (i = 0; i < 5; i++)
	{
		temp = pa[i]; 
		pa[i] = pb[10-i-1];
		pb[10 - i - 1] = temp;
	}
}

void print_ary(int *pa, int size) //�迭����Լ� 
{
	int i; 

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}