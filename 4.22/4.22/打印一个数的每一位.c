#define _CRT_SECURE_NO_WARNINGS = 1;
//递归 方式实现打印一个整数的每一位

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
	printf("请输入一个整数：");
	scanf("%d", &num);

	print(num);

	return 0;
}