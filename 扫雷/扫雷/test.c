#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*******1.paly*********\n");
	printf("*******0.exct*********\n");
	printf("**********************\n");
}
void start_game()
{
	int flag = 1;
	char show[ROWS][COLS] = { 0 };//用于展示扫雷棋盘
	char mine[ROWS][COLS] = { 0 };//用于记录扫雷信息
	//初始化棋盘
	init_board(show,ROWS,COLS,'*');
	init_board(mine,ROWS,COLS,'0');
	//打印棋盘
	print(show, ROW, COL);
	//埋雷
	set_mine(mine, ROW, COL);
	print(mine, ROW, COL);//（调试用）
	//玩家行动
	while (flag)
	{
		// flag=1 游戏继续
		// flag=0 游戏结束
		if (player_action(show, mine, ROW, COL) == 0)
			break;
		//打印棋盘
		print(show, ROW, COL);
		//判断棋盘是否翻完
		flag = judge_ogame(show,mine, ROW, COL);
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("用户请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start_game();
			break;
		case 0:
			printf("退出游戏！！\n");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (input);

}