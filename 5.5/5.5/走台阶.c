#define _CRT_SECURE_NO_WARNINGS
//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//����������
//�������һ������n(1 �� n �� 30)
//���������
//���һ����������С���ֿ����ߵķ�������

#include<stdio.h>
int main()
{
	//����֪����Ϊһ��쳲���ϵ�������ҳ�ֵΪ��1 �� 2
	int a = 1;
	int b = 2;
	int c = 0;
	int input = 0;
	int i = 0;
	scanf("%d", &input);
	for (i = 0; i < input - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}