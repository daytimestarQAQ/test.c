#define _CRT_SECURE_NO_WARNINGS
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。


#include<stdio.h>
int qishui_number(int a) {
	if (a >= 1) {
		return qishui_number(a / 2) + a;
	}
	else
	return 0;
}
int main()
{
	int money= 0;
	printf("多少钱：");
	scanf("%d", &money);
	int num = qishui_number(money);
	printf("可以买%d瓶\n",num);
	return 0;
}