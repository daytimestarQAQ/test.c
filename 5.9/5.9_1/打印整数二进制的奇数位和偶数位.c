#define _CRT_SECURE_NO_WARNINGS
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
 
#include<stdio.h>

int main()
{
	int input = 0;
	int i = 0;
	scanf("%d", &input);
	printf("ż��λ��");

	for (i = 30; i >=0; i-=2)
	{
		printf("%d", (input >> i)&1);
	}
	printf("\n");
	printf("����λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (input >> i)&1);
	}
	return 0;
}