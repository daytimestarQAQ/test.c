#define _CRT_SECURE_NO_WARNINGS
//不允许创建临时变量，交换两个整数的内容
#include<stdio.h>
void exchange(int* num1,int* num2)
{
	int tmp = *num1 ^ *num2;
	*num1 = tmp ^ *num1;
	*num2 = tmp ^ *num2;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d",&num1,&num2);
	exchange(&num1, &num2);
	printf("%d %d", num1, num2);

	return 0;
}
