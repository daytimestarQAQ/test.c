#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//��ʼ������
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
//��ӡ����
void print(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("  _________ɨ����Ϸ_________\n");
	printf("  1  2  3  4  5  6  7  8  9\n");
	printf("  ��������������������������\n");
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
//����ж�
int player_action(char show_board[ROWS][COLS], char mine_board[ROWS][COLS])
{
	int op = 0;
	int flag = 1;
	printf("����������\n1.����\n2.�����\n");
	scanf("%d", &op);
	switch (op)
	{
		//����
	case 1:
		flag = demine(show_board, mine_board, ROW, COL);
		break;
		//�����
	case 2:
		mark_mine(show_board, mine_board, ROW, COL);
		break;
	default:
		printf("����������������룡");
	}
	return flag;
}
//����
void set_mine(char mine_board[ROWS][COLS], int row, int col)
{
	int x, y;
	for (int i = 0;i < MINES; )
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine_board[x][y] == '0')
		{
			//printf("%d %d\n", x, y);�����׵����꣨���Լ���ã�
			mine_board[x][y] = '1';
			i++;
		}
	}
}
//����
int demine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("�������������׵����꣺");
	scanf("%d %d", &x, &y);
	
	while (1) {
		if (show_board[x][y] == '*') 
		{
			if (mine_board[x][y] == '1')
			{
				printf("�㱻ը���ˣ�����Ϸ����\n");
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
			printf("����Ƿ����ѱ�ռ�ã����������룺");
	}
}
//����ʱ����������
void over_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int x, int y)
{
	//�ж������Ƿ񷭹����Ƿ�Ϸ�
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
//�����
void mark_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("�������������׵����꣺");
	while (1) {
		scanf("%d %d", &x, &y);
		if (show_board[x][y] == '*') {
			show_board[x][y] = 'X';
			break;
		}
		else
			printf("����Ƿ����ѱ�ռ�ã����������룺");
		break;
	}
}
//�ж������Ƿ�ȫ������
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
	//����ȫ����ȷ���
	if (mine == MINES) {
		printf("         ��Ӯ�ˣ�����             \n");
		return 0;
	}
	//δ����ȫ����ȷ���
	else
		return 1;
}
