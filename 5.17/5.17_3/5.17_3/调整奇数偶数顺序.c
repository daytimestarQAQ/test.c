#define _CRT_SECURE_NO_WARNINGS
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//解法：1.录入数据，无视奇数，直到遇到第一个偶数，记录该偶数位置，进入下一步
//		2.继续录入数据，遇见偶数，长度加一，直到遇见奇数，然后插入之前偶数记录的位置，并将后续数组顺序后移
#include<stdio.h>

int main()
{
	//录入数据
	int i = 0;
	int flag = 0;
	int temp = 0, temp2 = 0;
	int len = 0;
	int a[100] = { 0 };
	int num;
	while (1) {
		scanf("%d", &num);
		//去掉空格
		char x = getchar();
		a[i] = num;
		//碰到偶数
		if (num % 2 == 0) {
			temp = i;
			flag = 1;
		}
		//有记录的偶数，且碰见了奇数
		//并插入奇数到记录的偶数前
		if (num % 2 != 0 && flag == 1) {
			for (int n = temp; n <= i - 1; n++) {
				a[n + 1] = a[n];
			}



			len = 0;
			flag = 0;
		}
		//记录中间有几个偶数
		else if (num % 2 == 0) {
			len++;
		}


		if (x == '\n')
			break;
		i++;
	}
	
	i = 0;
	while(a[i]!= 0)
		printf("%d ", a[i++]);
}
