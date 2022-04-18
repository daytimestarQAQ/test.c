#define _CRT_SECURE_NO_WARNINGS = 1;
//需求：实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#include<stdio.h>

printf_biaoge(int x) {

	for (int i = 1;i <= x;i++) {
		for (int n = 1;n <= i;n++) {
			printf("%d*%d=%-4d", i, n, i * n);
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	printf("请输入你想打印的乘法口诀表的行列数：");
	scanf("%d", &num);
	printf_biaoge(num);
	return 0;
}