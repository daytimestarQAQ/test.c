#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>

int main()
{
	int right=0, light=0,mid=0;
	int flag = 0;
	scanf("%d %d", &right, &light);

	
	while(0==flag) {

		mid = light;
		light = right % light;
		right = mid;//������ֵ����ֵ��ԭ��ֵ��ֵ����ֵ

		if (light == 0) {
			flag = 1;
		}
	}
	printf("%d", right);
	return 0;
}