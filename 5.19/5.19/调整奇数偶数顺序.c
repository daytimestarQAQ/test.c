#define _CRT_SECURE_NO_WARNINGS
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#include<stdio.h>

int main()
{
	int even[100]={0};
	int odd[100]={0};
	int temp = 0;
	int len1 = 0, len2 = 0;
	int i = 0;
	printf("������һ���������飺");
	while (1) {
		scanf("%d", &temp);
		char x = getchar();//�����жϽ�β'\n'
		//ż��
		if (temp % 2 == 0) 
			even[len1++] = temp;
		//����
		else 
			odd[len2++] = temp;

		if (x == '\n')
			break;
	}

	for (i = 0; i < len2; i++) {
		printf("%d ", odd[i]);
	}
	for (i = 0; i < len1; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}


