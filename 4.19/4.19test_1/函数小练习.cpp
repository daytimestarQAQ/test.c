 #define _CRT_SECURE_NO_WARNINGS = 1;
//ʵ��һ���������ж�һ�����ǲ���������

//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<stdio.h>
#include<math.h>
int judge_prime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int count = 0;
	int i = 1;
	for (i = 101;i <= 200;i+=2)
	{
		if (judge_prime(i))
		{
			printf("%d ",i);
			count++;
		}
		
	}printf("\n");
	printf("��%d������\n",count);
	return 0;
}

