#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int find(int x, int y,int arr[3][3], int num, int* row, int* col) {
	int i = 0;
	int j = y - 1;
	while (i <= x - 1 && j >= 0) {
		if (arr[i][j] < num) {
			i++;
			(*row)++;
		}
		else if(arr[i][j] > num)
		{
			j--;
			(*col)--;
		}
		else
		return 1;
	}
	return 0;
}
int main()
{
	int col = 2, row = 0;
	int num;
	printf("请输入想查找的数：");
	scanf("%d", &num);
	int arr[3][3] = {	{1,2,3},
						{2,3,4},
						{3,5,6} };
	if (find(3, 3,arr,num, &row, &col))
		printf("找到了！行下标为：%d,列下标为：%d", row, col);
	else
		printf("没找到！");
	return 0;
}
