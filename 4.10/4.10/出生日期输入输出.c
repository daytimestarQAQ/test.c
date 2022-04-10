#define _CRT_SECURE_NO_WARNINGS = 1
#include<stdio.h>
int main()
{
    int year = 0, month = 0, date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);
    printf("year=%04d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);


    return 0;
}