#define _CRT_SECURE_NO_WARNINGS
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#include<stdio.h>

int main()
{
	//¼������
	int i = 0;
	int flag = 0;
	int tmp = 0;//�����ж�֮ǰ��������
	int a[100] = { 0 };
	int num;
	while (1) {
		scanf("%d", &num);
		//ȥ���ո�
		char x = getchar();

		a[i] = num;
		//��������ʱ,����¼��λ��
		if (a[i] % 2 != 0 && flag == 0) {
			tmp = i;
			flag = 1;
		}

		//��������¼����Ϊż��
		if (flag == 1 && a[i] % 2 == 0) {
			int tmp1;
			tmp1 = a[tmp];
			a[tmp] = a[i];
			a[i] = tmp1;
			flag = 0;
		}
		if (x == '\n')
			break;
		i++;
	}
	
	i = 0;
	while(a[i]!= 0)
		printf("%d ", a[i++]);
}
