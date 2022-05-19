#define _CRT_SECURE_NO_WARNINGS
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include<stdio.h>

int main()
{
	int even[100]={0};
	int odd[100]={0};
	int temp = 0;
	int len1 = 0, len2 = 0;
	int i = 0;
	printf("请输入一个整数数组：");
	while (1) {
		scanf("%d", &temp);
		char x = getchar();//用于判断结尾'\n'
		//偶数
		if (temp % 2 == 0) 
			even[len1++] = temp;
		//奇数
		else 
			odd[len2++] = temp;

		if (x == '\n')
			break;
	}

	for (i = 0; i < len2; i++) {
		printf("%d ", odd[i]);
	}
	for (i = 0; i < len1; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}


