#define _CRT_SECURE_NO_WARNINGS = 1;
int main()
{
	char ch[7] = "wagaga";//字符串数组末尾有个“/0”，所以其元素应+1
	int i;
	printf("请输入你想访问的数组位数：");
	scanf("%d",&i);//"-1"数组下标从“0”开始


	if (i>=0 && i <= 6)
	{
		printf("该位置对应的元素为：%d/n", ch[i]);
	}
	else printf("非法访问！/n");

	return 0;
}