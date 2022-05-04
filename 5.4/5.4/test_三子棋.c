#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*******1.paly*********\n");
	printf("*******0.exct*********\n");
	printf("**********************\n");

}
void game()
{
	//选择模式
	int	num = choice();

	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board, ROW,COL);
	while (1)
	{
		//玩家下棋
		play_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断输赢
		int ret = judge_win(board, ROW, COL);
		if (ret == 1)
		{
			printf("你赢了！！\n");
			break;
		}
		else if (ret == -1)
		{
			printf("平局,连电脑都下不赢，菜！\n");
			break;
		}
		//电脑下棋
		printf("电脑下棋\n");
		if (num == 1)
		{
			computer_move_easy(board, ROW, COL);
			break;
		}
		
		else
			computer_move_hard(board, ROW, COL);

		displayboard(board, ROW, COL);
		//判断输赢
		ret = judge_win(board, ROW, COL);
		if (ret == 1)
		{
			printf("你失败了！！连电脑都下不赢，菜！\n");
			break;
		}
		else if (ret == -1)
		{
			printf("平局,连电脑都下不赢，菜！\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("用户请选择： ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("游戏退出");
			break;
		default:
			printf("输入错误！！\n");
		}
	} while (input);
	return 0;
}