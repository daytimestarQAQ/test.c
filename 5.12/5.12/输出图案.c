#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�X��ͼ����
//����������
//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//���������
//���ÿ�����룬����á� * ����ɵ�X��ͼ����
void print(int row)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row; j++) {

			if ((i == j) || (j == (row - i + 1))) {
				printf("*");
			}
			else printf(" ");
		}printf(" \n");
	}
}
int main()
{
	int row = 0;
	int j = 1;
	while (scanf("%d", &row) != EOF) {
		print(row);
	}
	return 0;
}
