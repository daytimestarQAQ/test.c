#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>


int max(int x, int y)
{
    if (x > y)return x;
    else return y;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);


    printf("%d", max(a, max(b, max(c, d))));
    return 0;
}