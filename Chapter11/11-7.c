#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade; 
	
	printf("�й� �Է� : "); 
	scanf("%d", &num); 

	getchar();   // ���۸� �ʱ�ȭ !!!! fflash()�� ������� 

	printf("���� �Է� : ");  // ���ڸ� �Է¹������� �׻� ȭ��Ʈ�����̽��� ���� !!(���ۿ� �ִ� ���Ͱ��� �ٷ� �޾ƹ�����)
	grade = getchar();
	 
	printf("�й� : %d, ���� : %c", num, grade); 

	return 0; 
}