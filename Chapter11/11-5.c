#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	int res; 
	char ch; 

	while (1)
	{
		res = scanf("%c", &ch); 
		if (res == -1) break;      // -1 값을 넣으려면 ctrl + z 를 두번 
		printf("%d", ch); 
	}
	return 0; 
}
