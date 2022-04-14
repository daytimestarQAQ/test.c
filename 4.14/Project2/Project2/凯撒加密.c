#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int num = 0;
	char ch;
	printf("请输入要右偏移的个数：");
	scanf("%d", &num);

	getchar();//清空缓存区的\n

	printf("请输入明码：");
		 while ((ch = getchar()) != '\n') {

			if (ch >= 'a' || ch <  'z') {
				putchar('a' + (ch -'a' + num) % 26);
				continue;
			}
			else if(ch >= 'A' || ch < 'Z') {
				putchar('A' + (ch - 'A' + num) % 26);
				continue;
			}
			

	}

	return 0;
}