#define _CRT_SECURE_NO_WARNINGS = 1;
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

#include<stdio.h>
//�ݹ�
int re_mystrlen(char* x)
{
	int count = 0;
	if (*x != '\0')
	{
		re_mystrlen(*x + 1);
		count++;
	}
	return count;
}

int main()
{
	char ch[] ="sdfsdf";

	int num1 = re_mystrlen(&ch);
	//int num2 = unre_mystrlen(&ch);

	printf("%d", num1);
	//printf("%d", num2);


	return 0;
}