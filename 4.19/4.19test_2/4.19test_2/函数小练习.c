#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
#include<stdbool.h>

bool judeg_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		return true;
	}
	else return false;
}
int main()
{
	int year = 0;

	printf("������һ����ݣ�");
	scanf("%d", &year);
	if (judeg_year(year))
	{
		printf("%d������", year);
	}
	else printf("��������");
	return 0;
}