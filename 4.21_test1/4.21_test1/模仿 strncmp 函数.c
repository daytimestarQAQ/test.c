#define _CRT_SECURE_NO_WARNINGS = 1;
/*Ҫ�� A����� s1 > s2�����һ��������ֵ��������ͬ�ַ��Ĳ�
Ҫ�� B����� s1 = s2����� 0
Ҫ�� C����� s1 < s2�����һ��������ֵ��������ͬ�ַ��Ĳ�*/
#include <stdio.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];
    int i = 0;
    unsigned int n;

    printf("�������һ���ַ�����");
    while ((str1[i++] = getchar()) != '\n')
        ;

    printf("������ڶ����ַ�����");
    i = 0;
    while ((str2[i++] = getchar()) != '\n')
        ;

    printf("������Ƚϵ��ַ�����");
    scanf("%u", &n);

    for (i = 0; i < n; i++)
    {
        if (str1[i] - str2[i])
        {
            i++;
            break;
        }
    }

    printf("�ȽϵĽ���ǣ�%d\n", str1[i - 1] - str2[i - 1]);

    return 0;
}