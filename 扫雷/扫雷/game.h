#pragma once
#include<stdio.h>
#include<time.h>

#define MINES 1//�׵�����

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//��ʼ������
void init_board(char board[ROWS][COLS], int rows,int cols,char set);
//��ӡ����
void print(char board[ROWS][COLS], int row, int col);
//����
void set_mine(char mine_board[ROWS][COLS], int row, int col);
//����ж�
int player_action(char show_board[ROWS][COLS], char mine_board[ROWS][COLS]);
//����
int demine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col);
//�����
void mark_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col);
//�ж������Ƿ�ȫ������
int judge_ogame(char show_board[ROWS][COLS],char mine_board[ROWS][COLS], int row, int col);
//���׷�����
void over_mine(char show_board[ROWS][COLS], char mine_board[ROWS][COLS], int x, int y);




