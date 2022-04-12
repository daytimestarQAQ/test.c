#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1;i <= 100;i++) {

		if (i % 2 == 1) {
			printf("是奇数");
		}
		else printf("不是奇数");
	}
	return 0;
}