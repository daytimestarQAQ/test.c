#define _CRT_SECURE_NO_WARNINGS

//验证尼科彻斯定理：任何一个大于 2 的整数的立方都可以表示成一串连续奇数的和，
//这些奇数一定是要连续的（比如 3 ^ 3 == 7 + 9 + 11）
//要求：用户输入某个整数，验证该数是否符合尼科彻斯定理，并将对应的式子打印出来
#include <stdio.h>

int main()
{
    int i, j, n, cubed, sum = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    cubed = n * n * n;
    for (i = 1; i < cubed; i += 2)
    {
        for (j = i; j < cubed; j += 2)
        {
            sum += j;
            if (sum == cubed)
            {
                if (j - i > 4)
                {
                    printf("%d = %d + %d ... + %d\n", cubed, i, i + 2, j);
                }
                else
                {
                    printf("%d = %d + %d + %d\n", cubed, i, i + 2, i + 4);
                }
                goto FINDIT;
            }
            if (sum > cubed)
            {
                sum = 0;
                break;
            }
        }
    }
FINDIT:

    return 0;
}