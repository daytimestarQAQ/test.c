#define _CRT_SECURE_NO_WARNINGS
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//
//例如：
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number。
#include<stdio.h>

int main()
{
    int i = 10000;
    int num = 0;
    int mod = 10000;
    for (i = 10000; i <= 99999; i++)
    {
        num = 0;
        mod = 10000;
        while (mod / 10)
        {
            num = (i / mod) * (i % mod) + num;
            mod = mod / 10;
        }
        if (num == i)
            printf("%d ", i);
    }
    return 0;
}