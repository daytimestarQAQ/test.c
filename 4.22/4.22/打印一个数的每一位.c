#define _CRT_SECURE_NO_WARNINGS = 1;
//�ݹ� ��ʽʵ�ִ�ӡһ��������ÿһλ

#include<stdio.h>
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d  ",x % 10);
}
int main()
{
	int num = 0;
	printf("������һ��������");
	scanf("%d", &num);

	print(num);

	return 0;
}