#include <stdio.h>	

int main(void)
{
	int a = 10, b = 15, total; 
	double avg; 
	int *pa, *pb; 
	int *pt = &total;  // ����κ� => *pt�� ������ ���� �ƴ϶� ���������� ���ϴ� �����̴� 
	double *pg = &avg; // double *pg; , pg = &avg; �� ���� ��ģ���� !!!!

	pa = &a; 
	pb = &b; 

	*pt = *pa + *pb; 
	*pg = *pt / 2.0; 

	printf("�� ������ �� : %d, %d\n", *pa, *pb); 
	printf("�� ������ �� : %d\n", *pt); 
	printf("�� ������ ��� : %.1lf", *pg); 

	return 0; 
}