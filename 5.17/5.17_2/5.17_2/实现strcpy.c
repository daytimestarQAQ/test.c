#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<stdio.h>
char* my_strcpy(char* dest, const char* src) {
    assert(src != NULL);
    assert(dest != NULL);
    char* ret = dest;
    while (*dest++ = *src++) {
        ;
    }
    return ret;
}
int main()
{
	char str1[10] = {1,2,3,4};
	char str2[10] = "asca";
	printf("%s",my_strcpy(str1, str2));
	return 0;
}
