#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
        for (int i = 0;i < 32;i++)
        {
            if (n & 1 == 1) {
                count++;
            }
            n = n >> 1;
        }
    printf("二进制中1的个数:%d",count);
	return 0;
}