#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
//��ʼ������
void initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void displayboard(char[ROW][COL], int row, int col);
//�������
void play_more(char[ROW][COL], int row, int col);
//��������
void computer_move_easy(char board[ROW][COL], int row, int col);//����ģʽ
int computer_move_hard(char board[ROW][COL], int row, int col);//��ģʽ
//�ж���Ӯ
int judge_win(char board[ROW][COL],int row,int col);

