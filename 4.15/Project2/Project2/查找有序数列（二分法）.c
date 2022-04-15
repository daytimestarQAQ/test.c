#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	int n = 0;

	printf("请输入查找的值：");
	scanf("%d", &n);

	while (left <= right) {
		
		
		int mid = (left + right) / 2;

		if (arr[mid] > n) {
			right = mid - 1;
		}

		else if (arr[mid] < n) {
			left = mid + 1;
		}


		else {
			printf("找到了，对应下标为：%d\n", mid);
			break;
		}
	}

	if (left > right) {
		printf("该数列未有该值\n");
		
	}

	return 0;
}