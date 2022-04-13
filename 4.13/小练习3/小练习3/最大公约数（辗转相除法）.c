#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int right=0, light=0,mid=0;
	int flag = 0;
	scanf("%d %d", &right, &light);

	if (right / light > 1|| light / right > 1) {

		if (light > right ) {
			mid = light;
			right = mid;
		}

		while (right / light > 1) {
			light *=(right / light);
		}//将左值与右值的倍数关系减小，为下一步减少运算量   将公约数从最大开始寻找

	}
	while(0==flag) {

		mid = light;
		light = right % light;
		right = mid;//余数赋值给左值，原左值赋值给右值

		if (light == 0) {
			flag = 1;
		}
	}
	printf("%d", right);
	return 0;
}