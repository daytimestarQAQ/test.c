#define _CRT_SECURE_NO_WARNINGS = 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#define length 10

void swp(int a[], int b[])
{
	int mid = 1;
	for (int i = 0;i < length;i++)
	{
		mid = a[i];
		a[i] = b[i];
		b[i] = mid;
	}
}
#include<stdio.h>
int main()
{
	//�仯ǰ
	int a[length] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[length] = { 10,9,8,7,6,5,4,3,2,1 };
	swp(a, b);
	//�仯��
	for (int i = 0;i < length;i++)
	{
		printf("a[%d]=%d ", i, a[i]);
	}
	printf("\n");
	for (int i = 0;i < length;i++)
	{
		printf("b[%d]=%d ", i, b[i]);
	}
	return 0;
}