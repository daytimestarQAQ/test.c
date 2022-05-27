#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int row_num;
	int row[1000][1000];
	printf("请输入你想打印杨辉三角的行数：");
	scanf("%d", &row_num);
	row[0][0] = 1;

	return 0;
}
