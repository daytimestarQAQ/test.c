#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 1024

int main()
{
    char str1[2 * MAX]; // ȷ�����Ӻ�Խ��
    char str2[MAX];

    char* target1 = str1;
    char* target2 = str2;

    char ch;
    int n;

    printf("�������һ���ַ�����");
    fgets(str1, MAX, stdin);

    printf("������ڶ����ַ�����");
    fgets(str2, MAX, stdin);

    printf("��������Ҫ���ӵ��ַ�������");
    scanf("%d", &n);

    // ��ָ��ָ�� str1 ��ĩβ��
    while (*target1++ != '\0')
        ;
    // ����ϣ�� str1 ���ߵ� '\0' �� '\n' �������ǵ�
    target1 -= 2;

    while (n--)
    {
        ch = *target1++ = *target2++;
        if (ch == '\0')
        {
            break;
        }
        if ((int)ch < 0)
        {
            *target1++ = *target2++;
            *target1++ = *target2++;
        }
    }

    *target1 = '\0';

    printf("���Ӻ�Ľ���ǣ�%s\n", str1);

    return 0;
}
