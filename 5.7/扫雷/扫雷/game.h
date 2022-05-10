#pragma once
#include<stdio.h>

//游戏棋盘为9×9
#define ROW 9
#define COL 9 

//判断格子周围雷的数量范围为九宫格，扩大一圈棋盘防止越界访问
#define ROWS ROW + 2 
#define COLS COL + 2 



//初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols ,char set);

//打印棋盘
void print_board(char board[ROW][COL], int row, int col);

