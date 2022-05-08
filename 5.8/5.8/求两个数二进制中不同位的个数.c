#define _CRT_SECURE_NO_WARNINGS
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#include<stdio.h>

int main()
{
    //方法一
    {

        int num1, num2, i;
        int count = 0;
        scanf("%d %d", &num1, &num2);
        for (i = 0; i < 32; i++)
        {
            if (((num1 >> i) & 1) != ((num2 >> i) & 1))
            {
                count++;
            }
        }
        printf("%d", count);
        return 0;
    }
    //方法二
    {
            int a = 0;
        int b = 0;
        int c = 0;
        int count = 0;
        scanf("%d%d", &a, &b);
        c = a ^ b;
        while (c)
        {
            if (c % 2)
                count++;
            c = c >> 1;
        }
        printf("%d", count);
        return 0;
    }
}