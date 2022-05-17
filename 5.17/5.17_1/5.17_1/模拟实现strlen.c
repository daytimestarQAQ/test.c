#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* ch) {

	if (*ch != '\0') {
		return my_strlen(ch + 1) + 1;
	}
	else
		return 0;
}

int main()
{
	char ch[100];
	printf("ÇëÊäÈëÒ»´®×Ö·û´®£º");
	scanf("%s", &ch);
	int ret = my_strlen(&ch);
	printf("%d",ret);
	return 0;
}