#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	while (1)
	{
		char word[80];
		int n;
		int i;
		int count = 0;

		printf("�ܾ �Է��ϼ��� : ");
		gets(word);
		printf("\n");

		n = strlen(word);
		if (n == 1)	break;

		for (i = 0; i < n / 2; i++)
		{
			if (word[i] == word[(n - 1) - i])
			{
				count++;
			}
			else break;
		}

		if (count == n / 2)
		{
			printf("ȸ���Դϴ�\n\n");
		}
		else
		{
			printf("ȸ���� �ƴմϴ�\n\n");
		}
	}

	return 0; 
}