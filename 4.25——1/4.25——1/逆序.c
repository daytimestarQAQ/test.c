#define _CRT_SECURE_NO_WARNINGS = 1;
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
#include<stdio.h>
#include<string>

void reverse_string(char* str)
{
	int tmp = *str;
	int len = strlen(str);

	*str = *(str + len - 1);//�����һ��Ԫ�طŵ���һ����
	*(str + len - 1) = '\0';//�������ڶ���Ԫ�ر�Ϊ'\0'
	//������Ϊ������һ��Ԫ�غ����һ��Ԫ��Ϊ�ݹ����С��λ���ݹ�

	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
		//���һ�������һ��Ԫ���滻λ��һ��
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