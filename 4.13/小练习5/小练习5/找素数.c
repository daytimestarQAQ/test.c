#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0,n=0;
	int flag = 0;
	for (i = 100;i <= 200;i++) {
		flag = 0;
		for (n=2;n <= pow(i,1/2);n++) {
			if (i % n == 0) {
				flag = 1;break;
			}

		}if (flag == 0)printf("%dÊÇËØÊý\n", i);

	}
	return 0;
}