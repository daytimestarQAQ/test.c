#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int num = 0;
	char ch;
	printf("������Ҫ��ƫ�Ƶĸ�����");
	scanf("%d", &num);

	getchar();//��ջ�������\n

	printf("���������룺");
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