#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
int main()
{
	int a, b, c;
	int mid = 0;
	printf("������3������");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		mid = a;
		a = b;
		b = mid;
	}
	if (a > c)
	{
		mid = a;
		a = c;
		c = mid;
	}
	//��ʱa��ֵ��С�������b��cδ֪��

	if (b > c)
	{
		mid = c;
		c = b;
		b = mid;
	}
	
	printf("%d<%d<%d", a, b, c);
	return 0;
}