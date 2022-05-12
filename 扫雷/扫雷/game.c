#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void print(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("  _________扫雷游戏_________\n");
	printf("  1  2  3  4  5  6  7  8  9\n");
	printf("  —————————————\n");
	for (i = 1; i < row + 1; i++)
	{
		printf("%d|", i);
		for (j = 1; j < col + 1; j++)
		{
			printf("%c  ", board[i][j]);
		}
		printf("\n");
	}

}
//玩家行动
int player_action(char show_board[ROWS][COLS], char mine_board[ROWS][COLS])
{
	int op = 0;
	int flag = 1;
	printf("请输入你想\n1.排雷\n2.标记雷\n");
	scanf("%d", &op);
	switch (op)
	{
		//排雷
	case 1:
		flag = demine(show_board, mine_board, ROW, COL);
		break;
		//标记雷
	case 2:
		mark_mine(show_board, mine_board, ROW, COL);
		break;
	default:
		printf("输入错误，请重新输入！");
	}
	return flag;
}
//埋雷
void set_mine(char mine_board[ROWS][COLS], int row, int col)
{
	int x, y;
	for (int i = 0;i < MINES; )
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine_board[x][y] == '0')
		{
			//printf("%d %d\n", x, y);生成雷的坐标（调试检查用）
			mine_board[x][y] = '1';
			i++;
		}
	}
}
//排雷
int demine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("请输入你想排雷的坐标：");
	scanf("%d %d", &x, &y);
	
	while (1) {
		if (show_board[x][y] == '*') 
		{
			if (mine_board[x][y] == '1')
			{
				printf("你被炸死了！！游戏结束\n");
				return 0;
			}
			else if (mine_board[x][y] == '0')
			{
				over_mine(show_board, mine_board, x, y);
				return 1;
			}

			break;
		}
		else
			printf("坐标非法或已被占用，请重新输入：");
	}
}
//排雷时连续翻格子
void over_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int x, int y)
{
	//判断坐标是否翻过与是否合法
	if (show_board[x][y] != ' ' && (x >= 1 && y >= 1 && x <= ROW && y <= COL)) {
		char num = '0';
		int i, j;
		for (i = -1;i <= 1;i++) {
			for (j = -1;j <= 1; j++) {
				num = mine_board[x + i][y + j] + num - '0';
			}
		}

		if (num == '0' )
		{
			show_board[x][y] = ' ';
			for (i = -1;i <= 1;i++) {
				for (j = -1;j <= 1; j++) {
					over_mine(show_board, mine_board, x + i, y + j);
				}
			}
		}
		else if (num != '0') {
			show_board[x][y] = num;
		}
	}	
}
//标记雷
void mark_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("请输入你想标记雷的坐标：");
	while (1) {
		scanf("%d %d", &x, &y);
		if (show_board[x][y] == '*') {
			show_board[x][y] = 'X';
			break;
		}
		else
			printf("坐标非法或已被占用，请重新输入：");
		break;
	}
}
//判断棋盘是否全部翻开
int judge_ogame(char show_board[ROWS][COLS],char mine_board[ROWS][COLS], int row, int col) {
	int i, j;
	int mine = 0;
	for (i = 1; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			if (show_board[i][j] == '*') {
				return 1;
			}
			if (mine_board[i][j] == '1') {
				if (show_board[i][j] == 'X') {
					mine++;
				}
			}
		}
	}
	//将雷全部真确标记
	if (mine == MINES) {
		printf("         你赢了！！！             \n");
		return 0;
	}
	//未将雷全部真确标记
	else
		return 1;
}
