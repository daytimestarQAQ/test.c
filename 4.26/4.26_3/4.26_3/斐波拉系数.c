#define _CRT_SECURE_NO_WARNINGS = 1;
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//�ݹ�
int re_get_aw(int n)
{
	if (n > 2)
	{
		return re_get_aw(n - 1) + re_get_aw(n - 2);
	}
	else 
		return 1;
}
//����
int unre_get_aw(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = n;i>2;i--)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

#include<stdio.h>
int main()
{
	int num = 0;
	printf("����������ĵڼ���쳲���ϵ����");
	scanf("%d", &num);
	int ret1 = re_get_aw(num);
	int ret2 = unre_get_aw(num);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}