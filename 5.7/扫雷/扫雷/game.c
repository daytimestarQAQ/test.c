#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//≥ı ºªØ∆Â≈Ã
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

//¥Ú”°∆Â≈Ã
void print_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%c", board[i][j]);
		}
	}

}

