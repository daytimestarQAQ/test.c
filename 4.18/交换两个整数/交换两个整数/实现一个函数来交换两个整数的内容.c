#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int exchange(int* x, int* y) {
	int mid = 0;
	mid = *x;
	*x = *y;
	*y = mid;
}
int main()
{
	int num1 = 0, num2 = 0;
	printf("��������������");
	scanf("%d %d", &num1, &num2);
	exchange(&num1, &num2);
	printf("�������ֵΪ��num1=%d,num2=%d", num1, num2);
	return 0;
}