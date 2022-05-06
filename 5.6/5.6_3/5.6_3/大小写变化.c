#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char input;
    while ((input = getchar()) != EOF)
    {

        if ('a' <= input && 'z' >= input)
        {
            printf("%c\n", input - 32);
        }
        else if ('A' <= input && 'Z' >= input)
        {
            printf("%c\n", input + 32);
        }
    }


    return 0;
}