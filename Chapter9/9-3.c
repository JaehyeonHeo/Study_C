#include <stdio.h>	

int main(void)
{
	int a = 10, b = 15, total; 
	double avg; 
	int *pa, *pb; 
	int *pt = &total;  // 선언부분 => *pt는 데이터 값이 아니라 포인터임을 말하는 변수이다 
	double *pg = &avg; // double *pg; , pg = &avg; 두 개를 합친것임 !!!!

	pa = &a; 
	pb = &b; 

	*pt = *pa + *pb; 
	*pg = *pt / 2.0; 

	printf("두 정수의 값 : %d, %d\n", *pa, *pb); 
	printf("두 정수의 함 : %d\n", *pt); 
	printf("두 정수의 평균 : %.1lf", *pg); 

	return 0; 
}