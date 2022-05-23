#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d\n", &n, &m);
    int i, j, arr[2000];
    int tmp;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = n; i < n + m; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i < n + m; i++)
    {
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
