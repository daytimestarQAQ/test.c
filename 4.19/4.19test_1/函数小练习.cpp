 #define _CRT_SECURE_NO_WARNINGS = 1;
//实现一个函数，判断一个数是不是素数。

//利用上面实现的函数打印100到200之间的素数。
#include<stdio.h>
#include<math.h>
int judge_prime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int count = 0;
	int i = 1;
	for (i = 101;i <= 200;i+=2)
	{
		if (judge_prime(i))
		{
			printf("%d ",i);
			count++;
		}
		
	}printf("\n");
	printf("有%d个素数\n",count);
	return 0;
}

