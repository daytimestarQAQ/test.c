#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
int main()
{
	char ch[7] = "wagaga";//�ַ�������ĩβ�и���/0����������Ԫ��Ӧ+1
	int i;

	printf("������������ʵ�����λ����");
	scanf("%d",&i);


	if (i >= 0 && i <= 6)
	{
		printf("��λ�ö�Ӧ��Ԫ��Ϊ��%c\n", ch[i-1]);//"-1"�����±�ӡ�0����ʼ
	}
	else printf("�Ƿ����ʣ�\n");

	return 0;
}