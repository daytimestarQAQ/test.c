#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。
void print(int row)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row; j++) {

			if ((i == j) || (j == (row - i + 1))) {
				printf("*");
			}
			else printf(" ");
		}printf(" \n");
	}
}
int main()
{
	int row = 0;
	int j = 1;
	while (scanf("%d", &row) != EOF) {
		print(row);
	}
	return 0;
}
