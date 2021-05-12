#include <stdio.h>

int input_data(void); 
double average(void); 
void print_data(double); 

// 전역변수 선언 
int count = 0; 
static int total = 0;  // 다른 파일에서 사용할 수 없음!(static)

int main(void)
{
	double avg; 

	total = input_data(); 
	avg = average(); 
	print_data(avg); 

	return 0; 
}

void print_data(double avg)
{
	printf("입력한 양수의 개수 : %d\n", count); // count, total은 전역변수 !
	printf("전체 합과 평균 : %d, %.1lf\n", total, avg); 
}