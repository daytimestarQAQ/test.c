#define _CRT_SECURE_NO_WARNINGS
//����������ʱ������������������������
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
