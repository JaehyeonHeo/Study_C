#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ü ����
struct employee
{
	int id;
	char* name;
	int salary;
}; 

// �Լ� ����
void insert_member(struct employee* pm); 

int main(void)
{
	struct employee member[5]; 
	struct employee * pm = &member[5];
	int i; 
	int sum =0; 
	int avg; 

	insert_member(member); // �Լ� ȣ��

	for ( i = 0; i < 5; i++)
	{
		printf("id : %d, �̸� : %s, �޿� : %d\n",
			member[i].id, member[i].name,  member[i].salary); 
	}

	printf("----------------------------------------------------------\n"); 

	for ( i = 0; i < 5; i++)
	{
		sum += member[i].salary; 
	}
	avg = sum / 5; 
	
	printf("�޿� �Ѿ� : %d ����, �޿� ��� : %d ����\n", sum, avg); 
}

// �Լ� ���� 
void insert_member(struct employee *pm)
{
	int i; 

	for (i = 0; i < 5; i++)
	{
		char temp[20] = "";

		printf("%d�� ����� id�Է� : ", i + 1);
		scanf("%d", &(pm+i)->id);
		
		printf("%d�� ����� �̸� �Է� : ", i + 1);
		scanf("%s",temp);
		(pm + i)->name = (char*)malloc(strlen(temp) + 1);
		strcpy((pm + i)->name, temp); 

		printf("%d�� ����� �޿� �Է� : ", i + 1);
		scanf("%d", &(pm + i)->salary);
		printf("\n"); 
	}
}