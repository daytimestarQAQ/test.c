#define _CRT_SECURE_NO_WARNINGS = 1;
int main()
{
	char ch[7] = "wagaga";//�ַ�������ĩβ�и���/0����������Ԫ��Ӧ+1
	int i;
	printf("������������ʵ�����λ����");
	scanf("%d",&i);//"-1"�����±�ӡ�0����ʼ


	if (i>=0 && i <= 6)
	{
		printf("��λ�ö�Ӧ��Ԫ��Ϊ��%d/n", ch[i]);
	}
	else printf("�Ƿ����ʣ�/n");

	return 0;
}