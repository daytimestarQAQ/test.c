#define _CRT_SECURE_NO_WARNINGS = 1;
/*要求 A：如果 s1 > s2，输出一个正数，值是两个不同字符的差
要求 B：如果 s1 = s2，输出 0
要求 C：如果 s1 < s2，输出一个负数，值是两个不同字符的差*/
#include <stdio.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];
    int i = 0;
    unsigned int n;

    printf("请输入第一个字符串：");
    while ((str1[i++] = getchar()) != '\n')
        ;

    printf("请输入第二个字符串：");
    i = 0;
    while ((str2[i++] = getchar()) != '\n')
        ;

    printf("请输入比较的字符数：");
    scanf("%u", &n);

    for (i = 0; i < n; i++)
    {
        if (str1[i] - str2[i])
        {
            i++;
            break;
        }
    }

    printf("比较的结果是：%d\n", str1[i - 1] - str2[i - 1]);

    return 0;
}