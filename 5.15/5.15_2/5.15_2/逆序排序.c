#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char a;
    char str[10000];
    gets(str);
    int sz = strlen(str);
    for (i = 0; i < sz / 2; i++) {
        a = str[i];
        str[i] = str[sz - 1 - i];
        str[sz - 1 - i] = a;
    }
    printf("%s", str);
    return 0;
}