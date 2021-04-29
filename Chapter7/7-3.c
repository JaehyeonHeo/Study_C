#include <stdio.h>

void print_char(char, int); 

int main(void)
{
	print_char('@', 5); 

	return 0; 
}

void print_char(char ch, int count)
{
	int i; 
	
	for ( i = 0; i < count; i++)
	{
		printf("%c", ch); 
	}
	//return;   // 리턴문만 쓰고 실제 전달하는 값이 없으므로 리턴값이 없는것과 같음 !! 안쓰는게 좋음 
}