#define _CRT_SECURE_NO_WARNINGS = 1;
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
#include<stdio.h>

int recursive_(int n)
{
	if (n > 1)
	{
		return n * recursive_(n - 1);
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int un_recursive(int n)
{ 
	int ret = 1;
	for (int i = 1;i <= n;i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main()
{

	int num = 0;
	printf("������һ������");
	scanf("%d", &num);
	printf("�ݹ鷽ʽ����ֵΪ��%d\n",recursive_(num) );
	printf("�ǵݹ鷽ʽ����ֵΪ��%d\n", un_recursive(num));

	return 0;

}