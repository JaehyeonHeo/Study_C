#include <stdio.h>	

int main(void)
{
	int a = 10;    // 단일변수 
	int* pa = &a;  // 단일포인터
	printf("%p %p\n", &a, pa); 
	printf("================================\n"); 

	int ary1[2] = { 1,2 }; 
	int (* pary1) = ary1;    
	// 다른타입의 포인터에 넣을 수는 있지만 
	// 배열을 가리키는 포인터는 괄호를 쓴다 !!
	printf("%p %p\n", ary1, pary1);   
	printf("%p %p\n", ary1 + 1, pary1 + 1); // 주소값이 달라지므로 같은 타입의 포인터를 사용해야한다 
	printf("================================\n");
	char ary2[2] = { 'a','b' }; 
	char* pary2 = ary2; // 괄호를 안쳐도 된다 -> 1차원 배열 
	printf("%p %p\n", ary2, pary2); 
	printf("%p %p\n", ary2 + 1, pary2 + 1); 
	printf("================================\n");
	int ary3[2][2] = { {1,2}, {3,4} }; 
	int (* pary3)[2] = ary3;   // 배열 포인터를 사용해야 같은 주소값 사용가능 !
	printf("%p %p\n", ary3, pary3); 
	printf("%p %p\n", ary3 + 1, pary3 + 1); 
	printf("================================\n");
	char* ary4[2] = { "hi", "good" }; //포인터배열 
	char** pary4 = ary4; 
	printf("%p %p\n", ary4, pary4); 
	printf("%p %p\n", ary4 + 1, pary4 + 1); 
	 

	return 0; 
}