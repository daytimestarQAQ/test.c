#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num = 0;
    int i = 0, j = 0;
    int delet = 0;
    //�����������
    scanf("%d", &num);
    int a[50];
    //¼������
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    //����ɾ��ֵ
    scanf("%d", &delet);

    for (i = 0; i < num; i++)
    {
        if (a[i] != delet)//ȷ��������ֵ������
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}