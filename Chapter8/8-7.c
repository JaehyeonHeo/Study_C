#include <stdio.h>

int main(void)
{
	char str[5]; 

	str[0] = '0'; 
	str[1] = 'K'; 
	str[2] = '\0';			// �迭�� 3��° ���� ��(null)���� ���� !
	printf("%s\n", str); 
	puts(str);             // puts()�� ��� �� �ٹٲ�,  printf()�� �ٹٲ��� ���� !

	return 0; 
}
