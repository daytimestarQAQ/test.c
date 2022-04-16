#define _CRT_SECURE_NO_WARNINGS = 1;
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include<stdio.h>


int main()
{
	int i = 1;
	float ret = 0.0f;
	for (i = 1;i <= 100;i++) {
		if (i % 2 == 0) {
			ret = -1.0 / i + ret;
		}
		else {
			ret = 1.0 / i + ret;
		}
	}
	printf("1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 = %f", ret);
	return 0;
}