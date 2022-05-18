#define _CRT_SECURE_NO_WARNINGS
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。


#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("多少钱：");
	scanf("%d", &money);
	//方法一
	/*total = money;
	empty = money;
	while (empty > 1) {
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}*/
	//方法二
	total = 2 * money - 1;
	printf("可以买%d瓶\n",total);
	return 0;
}