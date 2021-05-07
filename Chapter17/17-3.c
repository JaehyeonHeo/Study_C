#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;   // 다른 구조체를 사용하려면 순서가 중요 !!(위에서 선언된 구조체만 사용)
	int id; 
	double grade; 
};

int main()
{
	struct student yuni; 

	yuni.pf.age = 17; 
	yuni.pf.height = 164.5; 
	yuni.id = 315; 
	yuni.grade = 4.3; 

	printf("나이 : %d\n", yuni.pf.age); 
	printf("  키 : %.1lf\n", yuni.pf.height); 
	printf("학번 : %d\n", yuni.id); 
	printf("학점 : %.1lf\n", yuni.grade); 

	return 0; 
}
