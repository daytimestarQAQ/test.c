#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b || b == c || a == c) {
                if (b != c || b != a || a != c)
                    printf("Isosceles triangle!\n");
                else
                    printf("Equilateral triangle!\n");
            }
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }

    return 0;
}
