#define _CRT_SECURE_NO_WARNINGS
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，
//则153是一个“水仙花数”。
#include<stdio.h>
#include<math.h>
int weishu(int i) {
	int count = 1;
	while (i / 10 != 0) {
		count++;
		i = i / 10;
	}
	return count;
}
int water_fower(int i,int n) {
	if (i / 10 != 0) 
		return water_fower(i / 10, n) + (int)pow(i % 10, n);
	else
		return (int)pow(i, n);
}
int main()
{
	int n = 0;

	for (int i = 0; i <= 100000; i++) {
		n = weishu(i);
		if (water_fower(i, n) == i) {
			printf("%d ", i);
		}
		//if (i / 100 == 0)
		//	printf("\n");
	}
	return 0;
}
