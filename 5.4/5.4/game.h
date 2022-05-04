#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);
//打印棋盘
void displayboard(char[ROW][COL], int row, int col);
//玩家下棋
void play_more(char[ROW][COL], int row, int col);
//电脑下棋
void computer_move_easy(char board[ROW][COL], int row, int col);//困难模式
int computer_move_hard(char board[ROW][COL], int row, int col);//简单模式
//判断输赢
int judge_win(char board[ROW][COL],int row,int col);

