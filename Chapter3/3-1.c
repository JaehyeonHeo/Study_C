#include <stdio.h>  //표준입출력 함수 사용 선언 

int main(void)
{
	int a;		  // 자료형 + 변수명 으로 선언 !!
	int b, c;     // 동일한 자료형인 경우, 한줄에 선언 가능!!
	double da; 
	char ch; 

	a = 10; 
	b = a; 
	c = a + 20; 
	da = 3.5; 
	ch = 'A'; 

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b); 
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da); 
	printf("변수 ch의 값 : %c\n", ch); 

	// 자료형의 크기 알아보기 sizeof()  
	printf("char 크기 : %d Byte\n", sizeof(char)); 
	printf("int 크기 : %d Byte\n", sizeof(int)); 
	printf("double 크기 : %d Byte\n", sizeof(double)); 
	printf("float 크기 : %d Byte", sizeof(float)); 

	return 0;
}