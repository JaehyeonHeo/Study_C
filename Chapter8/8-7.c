#include <stdio.h>

int main(void)
{
	char str[5]; 

	str[0] = '0'; 
	str[1] = 'K'; 
	str[2] = '\0';			// 배열의 3번째 값에 널(null)문자 삽입 !
	printf("%s\n", str); 
	puts(str);             // puts()는 출력 후 줄바꿈,  printf()는 줄바꾸지 않음 !

	return 0; 
}
