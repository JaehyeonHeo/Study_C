#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

// �Լ� ����
void print_lotto(int *pl, int); 
void input_lotto(int *pl, int); 

int main(void)
{
	int lotto[6];
	int size;
	size = sizeof(lotto) / sizeof(lotto[0]);

	input_lotto(lotto, size); //�Լ�ȣ��

	print_lotto(lotto, size); //�Լ�ȣ��
}

//�Լ�����
void input_lotto(int* pl, int size)
{
	int i;
	printf("�ζǹ�ȣ 6���� �Է��ϼ���!\n");
	for (i = 0; i < size; i++)
	{
		printf("%d��° ��ȣ : ", i+1); 
		scanf("%d", (pl + i));

		while ( pl[i] > 45 || pl[i] == pl[i - 1] || pl[i] == pl[i - 2] ||
			                  pl[i] == pl[i - 3] || pl[i] == pl[i - 4] || pl[i] == pl[i - 5])
		{
			printf("�ߺ��ưų� ������ ��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���\n"); 
			printf("%d��° ��ȣ : ", i + 1);
			scanf("%d", (pl + i)); 
		}
	}
	printf("\n"); 
}

void print_lotto(int* pl, int size)
{
	int i;

	printf("����� ��ȣ�� : "); 
	for (i = 0; i < size; i++)
	{
		printf("%d ", pl[i]);
	}
	printf("\n");
}