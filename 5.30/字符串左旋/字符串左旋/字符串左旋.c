#define _CRT_SECURE_NO_WARNINGS
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include<stdio.h>
#include<assert.h>
char* left_spin(char* arr,int sz, int num) {
	assert(arr != NULL);
	int i = 0;
	char temp[10]={0};
	//����Ҫ�������ַ�
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
	printf("��������Ҫ�����ĸ�����");
	scanf("%d", &num);
	printf("%s", left_spin(arr,i,num));
	return 0;
}
