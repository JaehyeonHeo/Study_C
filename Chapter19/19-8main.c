#include <stdio.h>

void input_data(int*, int*); 
double average(int, int); 

int main(void)
{
	int a, b; 
	double avg; 

	input_data(&a, &b); 

	avg = average(a, b); 

	printf("�� ���� ��� : %.1lf", avg); 
}

