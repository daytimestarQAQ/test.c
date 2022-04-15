#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int ret = 0, num = 1;
	for (i = 1;i <= 10;i++) {

		for (n = 1 n <= i;n++) {

			num *= n;
		}ret += num;
	}
	printf("1!+2!+...10!=%d",ret);
	return 0;
}
