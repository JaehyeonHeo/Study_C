#include <stdio.h>  //ǥ������� �Լ� ��� ���� 

int main(void)
{
	int a;		  // �ڷ��� + ������ ���� ���� !!
	int b, c;     // ������ �ڷ����� ���, ���ٿ� ���� ����!!
	double da; 
	char ch; 

	a = 10; 
	b = a; 
	c = a + 20; 
	da = 3.5; 
	ch = 'A'; 

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b); 
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da); 
	printf("���� ch�� �� : %c\n", ch); 

	// �ڷ����� ũ�� �˾ƺ��� sizeof()  
	printf("char ũ�� : %d Byte\n", sizeof(char)); 
	printf("int ũ�� : %d Byte\n", sizeof(int)); 
	printf("double ũ�� : %d Byte\n", sizeof(double)); 
	printf("float ũ�� : %d Byte", sizeof(float)); 

	return 0;
}