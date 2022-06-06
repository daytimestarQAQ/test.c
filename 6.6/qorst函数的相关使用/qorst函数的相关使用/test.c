#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//比较整形
int cmp_int(const void* buffer1, const void* buffer2) {
	return (*(int*)buffer1) - (*(int*)buffer2);
}
struct stu
{
	char name[10];
	int age;
};
//比较名字
int cmp_stu_name(const void* buffer1, const void* buffer2) {
	return strcmp(((struct stu*)buffer1)->name, ((struct stu*)buffer2)->name);
}
//比较年龄
int cmp_stu_age(const void* buffer1, const void* buffer2) {
	return ((struct stu*)buffer1)->age - ((struct stu*)buffer2)->age;
}


int main()
{

	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	qsort(arr, 11, sizeof(arr[0]), cmp_int);
	
	

	struct stu s[] = { {"zhangshan",19},{"lisi",21},{"wangwu",18} };

	int sz = sizeof(s) / sizeof(s[0]);
	//排序名字
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
	
	//排序年龄
	qsort(s, sz, sizeof(s[0]), cmp_stu_age);


	return 0;
}
