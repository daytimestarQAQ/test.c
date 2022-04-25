#define _CRT_SECURE_NO_WARNINGS = 1;
//递归和非递归分别实现strlen

#include<stdio.h>
//递归
int re_mystrlen(char* arr)
{
	if (*arr != '\0')
		return re_mystrlen(arr + 1)+1;		
	else 
		return 0;
}
int unre_mystrlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}

int main()
{
	char ch[] ="sdfsdf";

	int num1 = re_mystrlen(ch);
	int num2 = unre_mystrlen(ch);

	printf("%d\n", num1);
	printf("%d\n", num2);


	return 0;
}