#define _CRT_SECURE_NO_WARNINGS = 1;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("***************\n");
	printf("****1.play*****\n");
	printf("****0.exit*****\n");
	printf("***************\n");
	
}
void game() {
	int sum = 0;
	srand((unsigned int)time(NULL));//
	int guess = rand() % 100 + 1;
	
	while (1) {
		
		printf("��µ�ֵΪ��");
		scanf("%d", &sum);
		if (sum < guess) {
			printf("��С��\n");
		}
		else if (sum > guess) {
			printf("�´���\n");
		}
		else {
			printf("�¶��ˣ���\n");
			break;
		}
	}
}
int main()
{
	int  flag = 0;
	
	menu();

	do {		
		printf("�Ƿ�ʼ��Ϸ 1\\0\n");
		scanf("%d", &flag);
		if (flag != 1)break;
		game();
		
	} while (1);

	return 0;
}