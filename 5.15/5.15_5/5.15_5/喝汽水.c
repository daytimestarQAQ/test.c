#define _CRT_SECURE_NO_WARNINGS
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���


#include<stdio.h>
int qishui_number(int a) {
	if (a >= 1) {
		return qishui_number(a / 2) + a;
	}
	else
	return 0;
}
int main()
{
	int money= 0;
	printf("����Ǯ��");
	scanf("%d", &money);
	int num = qishui_number(money);
	printf("������%dƿ\n",num);
	return 0;
}