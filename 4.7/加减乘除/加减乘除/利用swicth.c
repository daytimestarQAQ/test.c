#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
int main()
{
	float qian, hou;
	char ch;
	printf("请输入算式：");
	scanf("%f%c%f", &qian, &ch, &hou);

	switch (ch)
	{
	case'+':printf("%f%c%f=%f", qian, ch, hou, qian + hou);break;
	case'-':printf("%f%c%f=%f", qian, ch, hou, qian - hou);break;
	case'*':printf("%f%c%f=%f", qian, ch, hou, qian * hou);break;
	case'/':if (hou == 0)
	{
		printf("除数不能为0\n");break;
	}
		   else	printf("%f%c%f=%f", qian, ch, hou, qian / hou);break;
	
	}
	return 0;
}