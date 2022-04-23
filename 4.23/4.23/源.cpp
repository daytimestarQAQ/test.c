#define _CRT_SECURE_NO_WARNINGS = 1;
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
#include<stdio.h>

int recursive_(int n)
{
	if (n > 1)
	{
		return n * recursive_(n - 1);
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int un_recursive(int n)
{ 
	int ret = 1;
	for (int i = 1;i <= n;i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main()
{

	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	printf("递归方式所求值为：%d\n",recursive_(num) );
	printf("非递归方式所求值为：%d\n", un_recursive(num));

	return 0;

}