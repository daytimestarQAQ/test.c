#define _CRT_SECURE_NO_WARNINGS = 1;
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值
#include<stdio.h>

//初始化数组为全0
void init(int a[],int sz)
{
	for (int i = 0;i < sz;i++)
	{
		a[i] = 0;
	}

}
//打印数组的每个元素
void print(int a[], int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ",a[i]);
	}

}
// 数组元素的逆置
reverse(int a[], int sz)
{
	int tmp = 0;
	for (int i = 0;i < sz / 2;i++)
	{
		tmp = a[i];
		a[i] = a[sz-1-i];
		a[sz - 1 - i] = tmp;
	}

}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int sz = sizeof(a) / sizeof(a[0]);
	print(a,sz);
	putchar('\n');

	reverse(a, sz);
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');

	init(a, sz);

	for (int i = 0;i < sz;i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}