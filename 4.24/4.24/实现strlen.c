#define _CRT_SECURE_NO_WARNINGS = 1;
//递归和非递归分别实现strlen

#include<stdio.h>
//递归
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