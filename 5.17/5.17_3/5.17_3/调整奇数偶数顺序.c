#define _CRT_SECURE_NO_WARNINGS
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include<stdio.h>

int main()
{
	//录入数据
	int i = 0;
	int flag = 0;
	int tmp = 0;//用于判断之前有无奇数
	int a[100] = { 0 };
	int num;
	while (1) {
		scanf("%d", &num);
		//去掉空格
		char x = getchar();

		a[i] = num;
		//输入奇数时,并记录其位置
		if (a[i] % 2 != 0 && flag == 0) {
			tmp = i;
			flag = 1;
		}

		//有奇数且录入数为偶数
		if (flag == 1 && a[i] % 2 == 0) {
			int tmp1;
			tmp1 = a[tmp];
			a[tmp] = a[i];
			a[i] = tmp1;
			flag = 0;
		}
		if (x == '\n')
			break;
		i++;
	}
	
	i = 0;
	while(a[i]!= 0)
		printf("%d ", a[i++]);
}
