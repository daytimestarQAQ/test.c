#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
//编写代码在一个整形有序数组中查找具体的某个数

//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int n;
	printf("请输入想查找的的值：");
	scanf("%d", &n);
	while (left <= right) {
		int mid = (right + left) / 2;

		if (arr[mid] < n) {
			left = mid + 1;
		}
		else if (arr[mid] > n) {
			right = mid - 1;
		}
		else {
			printf("找到了，该值的下标为：%d", mid);
			break;
		}
	}
	if (left > right) {
		printf("没有该值！！");
	}
	return 0;
}