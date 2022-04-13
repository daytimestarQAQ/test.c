#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0,mid;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 < num2) {
		mid = num1;
		num1 = num2;
		num2 = mid;
	}

	if (num1 < num3) {
		mid = num1;
		num1 = num3;
		num3 = mid;
	}

	if (num2 < num3) {
		mid = num2;
		num2 = num3;
		num3 = mid;
	}
	printf("%d %d %d", num1, num2, num3);

	return 0;
}