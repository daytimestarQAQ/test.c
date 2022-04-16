#define _CRT_SECURE_NO_WARNINGS = 1;
//在屏幕上输出9*9乘法口诀表
#include<stdio.h>

int main()
{
	int i = 1, n = 1;
	for (i = 1;i <= 9;i++) 
	{

		for (n = 1;n <= i;n++) 
		{			
			printf("%d*%d=%-4d",i, n, i * n);
		}
		printf("\n");
	}
	
	return 0;
}