#define _CRT_SECURE_NO_WARNINGS
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#include<stdio.h>

int main()
{
    //����һ
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
    //������
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