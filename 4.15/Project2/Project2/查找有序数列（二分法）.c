#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	int n = 0;

	printf("��������ҵ�ֵ��");
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
			printf("�ҵ��ˣ���Ӧ�±�Ϊ��%d\n", mid);
			break;
		}
	}

	if (left > right) {
		printf("������δ�и�ֵ\n");
		
	}

	return 0;
}