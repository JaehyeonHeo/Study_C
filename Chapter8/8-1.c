#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 /*
 배열 : 같은 자료형을 가진 변수를 나란히 저장 
 */
int main(void)
{
	int ary[5]; 

	ary[0] = 10; 
	ary[1] = 20; 
	ary[2] = ary[0] + ary[1]; 
	scanf("%d", &ary[3]); 

	printf("%d\n", ary[2]); 
	printf("%d\n", ary[3]); 
	printf("%d\n", ary[4]); 

	return 0; 
}

/*
C#에서의 배열 선언 
int [] ary = new int [5]; 
ary[0] = 12; 
ary[1] = 16; 
.
.
.
*/