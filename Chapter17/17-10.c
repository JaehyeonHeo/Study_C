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

	printf("�й� : %d\n", s1.num); 

	s1.grade = 4.4; 
	printf("���� : %.1lf\n", s1.grade); 

	printf("�й� : %d\n", s1.num); 

	printf("%d\n", sizeof(s1));  // 8 : ����ü --> ���� ū ������ ũ�⸸ŭ�� �޸� �Ҵ�
	printf("%d\n", sizeof(s2));  //16 : ����ü --> ����� ũ�⸦ �� ��ģ��ŭ �޸� �Ҵ� 

	return 0; 
}