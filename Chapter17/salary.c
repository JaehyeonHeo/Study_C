#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체 선언
struct employee
{
	int id;
	char* name;
	int salary;
}; 

// 함수 선언
void insert_member(struct employee* pm); 

int main(void)
{
	struct employee member[5]; 
	struct employee * pm = &member[5];
	int i; 
	int sum =0; 
	int avg; 

	insert_member(member); // 함수 호출

	for ( i = 0; i < 5; i++)
	{
		printf("id : %d, 이름 : %s, 급여 : %d\n",
			member[i].id, member[i].name,  member[i].salary); 
	}

	printf("----------------------------------------------------------\n"); 

	for ( i = 0; i < 5; i++)
	{
		sum += member[i].salary; 
	}
	avg = sum / 5; 
	
	printf("급여 총액 : %d 만원, 급여 평균 : %d 만원\n", sum, avg); 
}

// 함수 정의 
void insert_member(struct employee *pm)
{
	int i; 

	for (i = 0; i < 5; i++)
	{
		char temp[20] = "";

		printf("%d번 사원의 id입력 : ", i + 1);
		scanf("%d", &(pm+i)->id);
		
		printf("%d번 사원의 이름 입력 : ", i + 1);
		scanf("%s",temp);
		(pm + i)->name = (char*)malloc(strlen(temp) + 1);
		strcpy((pm + i)->name, temp); 

		printf("%d번 사원의 급여 입력 : ", i + 1);
		scanf("%d", &(pm + i)->salary);
		printf("\n"); 
	}
}