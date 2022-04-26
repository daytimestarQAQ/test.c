#define _CRT_SECURE_NO_WARNINGS = 1;
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//递归
int re_get_aw(int n)
{
	if (n > 2)
	{
		return re_get_aw(n - 1) + re_get_aw(n - 2);
	}
	else 
		return 1;
}
//迭代
int unre_get_aw(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = n;i>2;i--)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

#include<stdio.h>
int main()
{
	int num = 0;
	printf("请输入所求的第几个斐波拉系数：");
	scanf("%d", &num);
	int ret1 = re_get_aw(num);
	int ret2 = unre_get_aw(num);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}