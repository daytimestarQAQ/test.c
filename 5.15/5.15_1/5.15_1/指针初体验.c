#define _CRT_SECURE_NO_WARNINGS
//ʹ��ָ���ӡ��������
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* pa = arr;
	for (int i = 0; i < 9; i++) {
		printf("%d ", *(pa + i));
	}

	return 0;
}
