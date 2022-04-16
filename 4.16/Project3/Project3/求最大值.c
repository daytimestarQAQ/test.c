#define _CRT_SECURE_NO_WARNINGS = 1;
//求10 个整数中最大值
#include<stdio.h>

int main()
{
	int a[10] = { 2,3,1,7,9,5,88,45,89,32 };
	int i = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int max =a[0];
	for (i = 1; i < sz - 1; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("max = %d\n",max);
	return 0;
}