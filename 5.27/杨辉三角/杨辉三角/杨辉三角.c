#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
//�������δ�
void copy_int(int* a,int* b,int sz) {
	int i = 0;
	assert(a != NULL);
	assert(b != NULL);
	for (i = 0; i < sz; i++) {
		*(a+i) = *(b+i);
	}
}

int main()
{
	int row_num;
	//��λ��Ϊ 1
	int row[100] = { 1 };
	int temp[100] = { 1 };

	int i, j;
	//int a, b, c;
	printf("�����������ӡ������ǵ�������");
	scanf("%d", &row_num);

	for (i = 0; i < row_num; i++) {
		//�ӵڶ�λ��ʼ����һλΪ1�����ù�
		for (j = 0; j <= i; j++) {

			//����һλ�����һλ
			if (j < i && j != 0)
				temp[j] = row[j - 1] + row[j];

			//ĩλΪ1
			else if (i == j && i != 0)
				temp[j] = 1;

			printf("%d ", temp[j]);
		}
		//�޸�ԭ���飬�����´�ѭ��
		copy_int(row, temp, j);
		printf("\n");
	}
	return 0;
}
