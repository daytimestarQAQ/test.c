#pragma once
#include<stdio.h>
#include<time.h>

#define MINES 1//雷的数量

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//初始化棋盘
void init_board(char board[ROWS][COLS], int rows,int cols,char set);
//打印棋盘
void print(char board[ROWS][COLS], int row, int col);
//埋雷
void set_mine(char mine_board[ROWS][COLS], int row, int col);
//玩家行动
int player_action(char show_board[ROWS][COLS], char mine_board[ROWS][COLS]);
//排雷
int demine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col);
//标记雷
void mark_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col);
//判断棋盘是否全部翻开
int judge_ogame(char show_board[ROWS][COLS],char mine_board[ROWS][COLS], int row, int col);
//排雷翻格子
void over_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int x, int y);




