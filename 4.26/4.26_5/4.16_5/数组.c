#define _CRT_SECURE_NO_WARNINGS = 1;
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ
#include<stdio.h>

//��ʼ������Ϊȫ0
void init(int a[],int sz)
{
	for (int i = 0;i < sz;i++)
	{
		a[i] = 0;
	}

}
//��ӡ�����ÿ��Ԫ��
void print(int a[], int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ",a[i]);
	}

}
// ����Ԫ�ص�����
reverse(int a[], int sz)
{
	int tmp = 0;
	for (int i = 0;i < sz / 2;i++)
	{
		tmp = a[i];
		a[i] = a[sz-1-i];
		a[sz - 1 - i] = tmp;
	}

}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int sz = sizeof(a) / sizeof(a[0]);
	print(a,sz);
	putchar('\n');

	reverse(a, sz);
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');

	init(a, sz);

	for (int i = 0;i < sz;i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}