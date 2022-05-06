#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            printf("\n");
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            printf("%c is an alphabet.", ch);
        else
            printf("%c is not an alphabet.", ch);

    }
    return 0;
}