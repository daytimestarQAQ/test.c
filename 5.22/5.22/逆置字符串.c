#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
void reversal(char* left,char* right) {
	char temp = NULL;
	while (left < right) {
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
char* f_end(char* start) {
	int count = 0;
	char* ch = start;
	while (1) {
		if (*start == '\0')//������ַ���ĩβ����δ����'\n'
			break;
		else if (*start == ' ')
			break;
		count++;
		start++;
	}
	return ch + count;
}
int main()
{
	char ch[100] = {0};
	printf("������һ���ַ�����");
	gets(ch);
	//���������ַ���
	reversal(ch,ch + strlen(ch) - 1);
	//���򵥸�����
	char* start = ch;
	while (*(start - 1) != '\0')
	{
		char* end = f_end(start);
		reversal(start, end - 1);//���صĵ�ַָ��ո�
		start = end + 1;//����м�Ŀո�
	}
	printf("%s", ch);
	return 0;
}