#define _CRT_SECURE_NO_WARNINGS
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include<stdio.h>
#include<assert.h>
char* left_spin(char* arr,int sz, int num) {
	assert(arr != NULL);
	int i = 0;
	char temp[10]={0};
	//保存要左旋的字符
	for (i = 0; i < num; i++) {
		temp[i] = arr[i];
	}
	for (i = 0; i < sz - num; i++) {
		arr[i] = arr[num + i];
	}
	for (i = 0; i < num; i++) {
		arr[sz -1- i] = temp[num - i - 1];
	}
	return arr;
}
int main()
{
	char arr[10]={0};
	int i = 0;
	int num = 0;
	while ((arr[i] = getchar()) != '\n') {
		i++;
	}
	printf("请输入你要左旋的个数：");
	scanf("%d", &num);
	printf("%s", left_spin(arr,i,num));
	return 0;
}
