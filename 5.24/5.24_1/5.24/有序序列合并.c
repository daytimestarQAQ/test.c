#define _CRT_SECURE_NO_WARNINGS
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//数据范围： 1 \le n, m \le 1000 \1≤n, m≤1000  ，
//序列中的值满足 0 \le val \le 30000 \0≤val≤30000
//输入描述：
//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。
//n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔。
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，
//即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
#include<stdio.h>

int main()
{
	int n, m;
	int i = 0, j = 0;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	i = 0;
	while (i + j < m + n) {
		if ((arr1[i] < arr2[j] && i < n) || j == m)
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	return 0;
}
