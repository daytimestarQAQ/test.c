#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<stdlib.h>
//�����ֽڣ�ֱ����width�����ֽ�ȫ�������꣩
void Swap(char* buffer1, char* buffer2,int sz) {
	char temp;
	for (int i = 0; i < sz; i++) {
		temp = *(buffer1+i);
		*(buffer1 + i) = *(buffer2+i);
		*(buffer2 + i) = temp;
	}
}
int cmp(const void* x,const void* y) {
	return (*(int*)x) - (*(int*)y);
}

void my_qsort_buddle(void* base,int num,int width,int (*fun)(const void* x,const void* y)) {
	int i = 0, j = 0;
	int flag = 1;
	//����
	for (i = 0; i <num  - 1; i++) { 
		flag = 1;
		for (j = 0; j < num - i - 1; j++) {
			//�ж��Ƿ񽻻�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)) {
				//����
				Swap(((char*)base + j * width), ((char*)base + (j + 1) * width), width);
				flag = 0;
			}
		}
		//�Ƿ��Ѿ�����
		if (flag)
			break;
	}
}
int main()
{

	
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort_buddle(arr, sz, sizeof(arr[0]), cmp);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}