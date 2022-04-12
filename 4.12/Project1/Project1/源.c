#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
#include<math.h>
int main()
{
    float r = 0;
    double pi = 3.1415926;
    scanf("%f", &r);

    printf("%.3f", 4.0 / 3.0 * pi * pow(r, 3));
    return 0;
}