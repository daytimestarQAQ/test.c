#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int year, month;
    int tow = 0;
    ;
    while (scanf("%d %d", &year, &month) != EOF) {
        tow = 28;
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            tow = 29;
        }
        switch (month) {
        case 2:
            printf("%d\n", tow);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        }
    }
    return 0;
}