#define _CRT_SECURE_NO_WARNINGS = 1;
//����ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>

printf_biaoge(int x) {

	for (int i = 1;i <= x;i++) {
		for (int n = 1;n <= i;n++) {
			printf("%d*%d=%-4d", i, n, i * n);
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	printf("�����������ӡ�ĳ˷��ھ������������");
	scanf("%d", &num);
	printf_biaoge(num);
	return 0;
}