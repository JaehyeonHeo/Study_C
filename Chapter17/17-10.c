#include <stdio.h>

union student
{
	int num;
	double grade;
};

struct student1
{
	int num;
	double grade;
};

int main()
{
	union student s1 = { 315 }; 
	struct student1 s2; 

	printf("학번 : %d\n", s1.num); 

	s1.grade = 4.4; 
	printf("학점 : %.1lf\n", s1.grade); 

	printf("학번 : %d\n", s1.num); 

	printf("%d\n", sizeof(s1));  // 8 : 공용체 --> 가장 큰 변수의 크기만큼만 메모리 할당
	printf("%d\n", sizeof(s2));  //16 : 구조체 --> 멤버의 크기를 다 합친만큼 메모리 할당 

	return 0; 
}