#include <stdio.h>	
// if�� Ȱ�� 
int main(void)
{
	int a = 20; 
	int b = 0; 

	if (a > 0)      // �߰�ȣ�� ��� ������ �� ���� �̻��϶��� �ݵ�� ���!!!!
	{
		b = a; 
	}

	printf("a : %d, b : %d\n", a, b); 

	return 0; 
}