#include <stdio.h>

int main(void)
{
	int score[2][3][4] = {
		{{72,80,95,60}, {68,98,83,90}, {75,72,85,92}},
		{{66,85,54,88}, {95,92,88,54}, {78,65,98,78}}
	}; 

	int i, j, k; 

	for ( i = 0; i < 2; i++)  // ��(��)
	{
		printf("%d�� ����...\n", i + 1); 
		for ( j = 0; j < 3; j++)			// ��(�л�)
		{
			for ( k = 0; k < 4; k++)        // ��(����)
			{
				printf("%5d", score[i][j][k]); 
			}
			printf("\n"); 
		}
		printf("\n"); 
	}

	return 0; 
}