#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
int main()
{
	char ch;
	printf("������һ����ĸ��");
	scanf("%c", &ch);
	if ('a' <=ch && ch <= 'z')
	{
		printf("���Ĵ�д��ĸΪ��%c\n", ch - 32);
	}
	else if ('A' <=ch && ch <= 'Z')
	{
		printf("����Сд��ĸΪ:%c\n", ch + 32);
	}
	else printf("�Ƿ�����");
		return 0;
}