#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
//复制整形串
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
	//首位设为 1
	int row[100] = { 1 };
	int temp[100] = { 1 };

	int i, j;
	//int a, b, c;
	printf("请输入你想打印杨辉三角的行数：");
	scanf("%d", &row_num);

	for (i = 0; i < row_num; i++) {
		//从第二位开始，第一位为1，不用管
		for (j = 0; j <= i; j++) {

			//除第一位与最后一位
			if (j < i && j != 0)
				temp[j] = row[j - 1] + row[j];

			//末位为1
			else if (i == j && i != 0)
				temp[j] = 1;

			printf("%d ", temp[j]);
		}
		//修改原数组，方便下次循环
		copy_int(row, temp, j);
		printf("\n");
	}
	return 0;
}
