#define _CRT_SECURE_NO_WARNINGS = 1;

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

#include<stdio.h>
int My_pow(int x, int y)
{
	if (y > 1)
	{
		return My_pow(x, y - 1) * x;
	}
	else
		return x;
}

int main()
{
	int n = 0;
	int k = 0;
	printf("���������������ָ����");
	scanf("%d %d", &n, &k);
	int ret = My_pow(n, k);
	printf("%d", ret);
	return 0;
}