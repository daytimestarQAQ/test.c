#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int sp_add(int a) {
	if (!(a / 100000)) {
		return sp_add(10 * a + 2) + a;
	}
	else return 0;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = sp_add(num);
	printf("%d", ret);
	return 0;
}