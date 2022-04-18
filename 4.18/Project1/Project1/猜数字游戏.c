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
		
		printf("你猜的值为：");
		scanf("%d", &sum);
		if (sum < guess) {
			printf("猜小了\n");
		}
		else if (sum > guess) {
			printf("猜大了\n");
		}
		else {
			printf("猜对了！！\n");
			break;
		}
	}
}
int main()
{
	int  flag = 0;
	
	menu();

	do {		
		printf("是否开始游戏 1\\0\n");
		scanf("%d", &flag);
		if (flag != 1)break;
		game();
		
	} while (1);

	return 0;
}