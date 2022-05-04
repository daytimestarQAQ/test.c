#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

//选择模式
int choice()
{
	int num = 0;
	printf("1.简单模式\n");
	printf("2.困难模式\n");
	while (1)
	{
		scanf("%d", &num);
		//判断是否合法输入
		if (num != 1 && num != 2)
		{
			printf("非法输入，请重新输入\n");
		}
		else 
			return num;
	}
}
//初始化棋盘
void initboard(char board[ROW][COL],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void displayboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
	//打印数据行	
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
	//打印分割行	
		if(i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}	
}
//玩家下棋
void play_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("玩家请输入下棋坐标：（格式：行坐标 列坐标)\n");
		scanf("%d %d", &x, &y);
		//判断是否合法坐标和是否占用
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			x = x - 1;
			y = y - 1;
			if (board[x][y] == ' ')
			{
				board[x][y] = '*';
				break;
			}
			else
				printf("该坐标已占用\n");
		}
		else
			printf("非法输入，请重新输入\n");
	}
}

//电脑下棋（智能下）
int computer_move_hard(char board[ROW][COL], int row, int col)
{
	//判断有无2连情况
	int i = 0;
	int j = 0;
	int kongge = 0;
	int x = 0;
	int y = 0;
	int num1 = 0;
	int num2 = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '#')
				num1++;
			else if (board[i][j] == '*')
				num2++;
			//记录空位
			else
			{
				x = i;
				y = j;
				kongge++;
			}

		}
		if (kongge == 1 && (num1 == 2 || num2 == 2))
		{
			board[x][y] = '#';
			return 0;
		}
		kongge = 0;
		num1 = 0;
		num2 = 0;
	}
	kongge = 0;
	x = 0;
	y = 0;
	num1 = 0;
	num2 = 0;
	//判断列
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == '#')
				num1++;
			else if (board[i][j] == '*')
				num2++;
			else
			{
				x = i;
				y = j;
				kongge++;
			}
		}
		if (kongge == 1 && (num1 == 2 || num2 == 2))
		{
			board[x][y] = '#';
			return 0;
		}
		kongge = 0;
		num1 = 0;
		num2 = 0;
	}
	kongge = 0;
	x = 0;
	y = 0;
	num1 = 0;
	num2 = 0;
	//判断主对角线
	for (i = 0, j = 0; i < row; i++, j++)
	{		
		if (board[i][j] == '#')
			num1++;
		else if (board[i][j] == '*')
			num2++;
		else
		{
			x = i;
			y = j;
			kongge++;
		}
	}
	if (kongge == 1 && (num1 == 2 || num2 == 2))
	{
		board[x][y] = '#';
		return 0;

	}
	kongge = 0;
	x = 0;
	y = 0;
	num1 = 0;
	num2 = 0;
	//判断副对角线
	for (j = 2, i = 0; i < row; i++, j--)
	{
	
		if (board[i][j] == '#')
			num1++;
		else if (board[i][j] == '*')
			num2++;
		else
		{
			x = i;
			y = j;
			kongge++;
		}
	}
	if (kongge == 1 && (num1 == 2 || num2 == 2))
	{
		board[x][y] = '#';
		return 0;
	}
	//无2连情况
	if (board[1][1] == ' ')
		board[1][1] = '#';

	else if (board[0][0] == ' ')
		board[0][0] = '#';

	else if (board[0][col] == ' ')
		board[0][col] = '#';

	else if (board[row][0] == ' ')
		board[0][0] = '#';

	else if (board[row][col] == ' ')
		board[row][col] = '#';
	else
		computer_move_easy(board,row,col);
	return 0;
}

//电脑下棋（随机下棋）
void computer_move_easy(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//0~2
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断输赢
int judge_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				count++;
			}			
		}
		if (board[i][j-1] != ' '&& count == row - 1)
			return 1;
		count = 0;		
	}
	count = 0;
	//判断列
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i][j] != ' ')
			{
				count++;
			}
		}
		if (board[i-1][j] != ' ' && count== col - 1)
			return 1;	
		count = 0;
	}
	count = 0;
	//判断主对角线
	for (i = 0,j = 0; i < row - 1; i++ ,j++)
	{
		if (board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ')
		{
			count++;
		}
	}
	if (board[i--][j--] != ' ' && count == row - 1)
		return 1;
	count = 0;
	//判断副对角线
	for (i = 0,j = 2; i < row - 1 ; i++,j--)
	{
		if (board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
		{
			count++;
		}
	}
	if (board[i-1][j+1] != ' ' && count == row - 1)
		return 1;
	count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if(board[i][j]==' ')
			count++;
		}
	}

	if (count == 0)
		return -1;

	return 0;
}