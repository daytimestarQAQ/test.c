#define _CRT_SECURE_NO_WARNINGS

#include"game.c"
void menu()
{
	printf("***********************\n");
	printf("*****  1.play  ********\n");
	printf("*****  0.exct  ********\n");
	printf("***********************\n");
}
void start_game()
{
	char show_board[ROWS][COLS] = { 0 };//用于展示玩家的棋盘

	char mine_board[ROWS][COLS] = { 0 };//用于系统判断与生成的棋盘

	////初始化棋盘
	//init_board(show_board,ROW,COL,'*');
	//init_board(mine_board,ROWS,COLS,'0');

	////打印棋盘
	//print_board(show_board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请用户选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start_game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！！\n");
			break;
		}
	} while (input);

}