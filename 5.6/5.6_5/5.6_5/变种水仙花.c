#define _CRT_SECURE_NO_WARNINGS
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//
//���磺
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//��� 5λ���е����� Lily Number��
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