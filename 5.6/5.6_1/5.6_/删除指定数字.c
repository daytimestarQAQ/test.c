#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num = 0;
    int i = 0, j = 0;
    int delet = 0;
    //输入数组个数
    scanf("%d", &num);
    int a[50];
    //录入整数
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    //输入删除值
    scanf("%d", &delet);

    for (i = 0; i < num; i++)
    {
        if (a[i] != delet)//确定被操作值的坐标
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}