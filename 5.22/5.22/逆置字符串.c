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
		if (*start == '\0')//如果是字符串末尾，则未计入'\n'
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
	printf("请输入一串字符串：");
	gets(ch);
	//逆序整个字符串
	reversal(ch,ch + strlen(ch) - 1);
	//逆序单个单词
	char* start = ch;
	while (*(start - 1) != '\0')
	{
		char* end = f_end(start);
		reversal(start, end - 1);//返回的地址指向空格
		start = end + 1;//跨过中间的空格
	}
	printf("%s", ch);
	return 0;
}