#define _CRT_SECURE_NO_WARNINGS = 1;
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
#include<stdio.h>

void reverse_string(char* str) 
{
	
	if (*str != '\0')
	{
		 reverse_string(str + 1);	
		 printf("%c", *str);
	}

}
int main()
{
	char ch[] = "abcdef";
	reverse_string(ch);
	return 0;
}
