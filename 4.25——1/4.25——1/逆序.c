#define _CRT_SECURE_NO_WARNINGS = 1;
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
#include<stdio.h>
#include<string>

void reverse_string(char* str)
{
	int tmp = *str;
	int len = strlen(str);

	*str = *(str + len - 1);//将最后一个元素放到第一个上
	*(str + len - 1) = '\0';//将倒数第二个元素变为'\0'
	//上两步为：将第一个元素和最后一个元素为递归的最小单位来递归

	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
		//最后一步将最后一个元素替换位第一个
	}
	*(str + len - 1) = tmp;


}
int main()
{
	char ch[] = "abcdef";
	reverse_string(ch);
	printf("%s", ch);
	return 0;
}