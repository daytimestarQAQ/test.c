#pragma once
#include<stdio.h>

//��Ϸ����Ϊ9��9
#define ROW 9
#define COL 9 

//�жϸ�����Χ�׵�������ΧΪ�Ź�������һȦ���̷�ֹԽ�����
#define ROWS ROW + 2 
#define COLS COL + 2 



//��ʼ������
void init_board(char board[ROWS][COLS], int rows, int cols ,char set);

//��ӡ����
void print_board(char board[ROW][COL], int row, int col);

