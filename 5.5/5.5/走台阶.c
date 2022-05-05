#define _CRT_SECURE_NO_WARNINGS
//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//输入描述：
//输入包含一个整数n(1 ≤ n ≤ 30)
//输出描述：
//输出一个整数，即小乐乐可以走的方法数。

#include<stdio.h>
int main()
{
	//由题知该题为一个斐波拉系数问题且初值为：1 和 2
	int a = 1;
	int b = 2;
	int c = 0;
	int input = 0;
	int i = 0;
	scanf("%d", &input);
	for (i = 0; i < input - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}