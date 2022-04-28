#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int arr[] = { 1,5,9,6,8,6,4,2,3,4,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int tmp = 0;
	for (int j = 0;j < sz - 1 ; j++)
	{
		for (int i = 0;i < sz - 1 - j;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (int i = 0;i < sz;i++)
	{
		printf("%d", arr[i]);

	}
	return 0;
}