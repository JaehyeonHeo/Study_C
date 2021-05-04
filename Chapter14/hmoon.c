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

		printf("단어를 입력하세요 : ");
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
			printf("회문입니다\n\n");
		}
		else
		{
			printf("회문이 아닙니다\n\n");
		}
	}

	return 0; 
}