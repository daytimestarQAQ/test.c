#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
//��д������һ���������������в��Ҿ����ĳ����

//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int n;
	printf("����������ҵĵ�ֵ��");
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
			printf("�ҵ��ˣ���ֵ���±�Ϊ��%d", mid);
			break;
		}
	}
	if (left > right) {
		printf("û�и�ֵ����");
	}
	return 0;
}