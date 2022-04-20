#define _CRT_SECURE_NO_WARNINGS = 1;
//写一个生命计算器，要求用户输入生日，显示他在这个世界上活了多少天？
#include<stdbool.h>
#include<stdio.h>

int j_year(int y)
{
	//闰年
	(y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? 366 : 365;
}
int num_days(int y, int m, int d)
{
	int num = d;
	for (int i = 1; i < m - 1; i++)
	{
		switch (i)
		{
		case 1:num += 31;break;
		case 2:if (j_year(y) == 366)
		{
			num += 29;break;
		}
			  else num += 28;break;
		case 3:num += 31;break;
		case 4:num += 30;break;
		case 5:num += 31;break;
		case 6:num += 30;break;
		case 7:num += 31;break;
		case 8:num += 31;break;
		case 9:num += 30;break;
		case 10:num += 31;break;
		case 11:num += 30;break;
		case 12:num += 31;break;

		}
	}return num;
}
int main()
{
	int birth_year = 1;
	int birth_month = 1;
	int birth_day = 1;
	int to_year = 1;
	int to_month = 1;
	int to_day = 1;
	int day = 0;
	printf("请输入你的生日：");
	scanf("%4d%2d%2d", &birth_year,&birth_month,&birth_day);
	printf("请输入今天的日期：");
	scanf("%4d%2d%2d", &to_year, &to_month, &to_day);
	

	//计算去除出生当年与今年的天数
	for (int i = birth_year + 1;i < to_year;i++)
	{
		day += j_year(i);
		
	}
	//计算从开年到某一日期的天数
	day = day + num_days(to_year,to_month,to_day) + j_year(birth_year) - num_days(birth_year,birth_month, birth_day);
	printf("%d", day);
	return 0;
}