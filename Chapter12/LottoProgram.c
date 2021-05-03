#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

// 함수 선언
void print_lotto(int *pl, int); 
void input_lotto(int *pl, int); 

int main(void)
{
	int lotto[6];
	int size;
	size = sizeof(lotto) / sizeof(lotto[0]);

	input_lotto(lotto, size); //함수호출

	print_lotto(lotto, size); //함수호출
}

//함수정의
void input_lotto(int* pl, int size)
{
	int i;
	printf("로또번호 6개를 입력하세요!\n");
	for (i = 0; i < size; i++)
	{
		printf("%d번째 번호 : ", i+1); 
		scanf("%d", (pl + i));

		while ( pl[i] > 45 || pl[i] == pl[i - 1] || pl[i] == pl[i - 2] ||
			                  pl[i] == pl[i - 3] || pl[i] == pl[i - 4] || pl[i] == pl[i - 5])
		{
			printf("중복됐거나 범위를 벗어난 번호입니다. 다시 입력하세요\n"); 
			printf("%d번째 번호 : ", i + 1);
			scanf("%d", (pl + i)); 
		}
	}
	printf("\n"); 
}

void print_lotto(int* pl, int size)
{
	int i;

	printf("추출된 번호는 : "); 
	for (i = 0; i < size; i++)
	{
		printf("%d ", pl[i]);
	}
	printf("\n");
}