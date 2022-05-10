#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
int main()
{
	char ch;
	printf("请输入一个字母：");
	scanf("%c", &ch);
	if ('a' <=ch && ch <= 'z')
	{
		printf("它的大写字母为：%c\n", ch - 32);
	}
	else if ('A' <=ch && ch <= 'Z')
	{
		printf("它的小写字母为:%c\n", ch + 32);
	}
	else printf("非法输入");
		return 0;
}