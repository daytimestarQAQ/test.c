#define _CRT_SECURE_NO_WARNINGS
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���


#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("����Ǯ��");
	scanf("%d", &money);
	//����һ
	/*total = money;
	empty = money;
	while (empty > 1) {
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}*/
	//������
	total = 2 * money - 1;
	printf("������%dƿ\n",total);
	return 0;
}