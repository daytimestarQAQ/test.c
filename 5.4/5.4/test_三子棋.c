#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*******1.paly*********\n");
	printf("*******0.exct*********\n");
	printf("**********************\n");

}
void game()
{
	//ѡ��ģʽ
	int	num = choice();

	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board, ROW,COL);
	while (1)
	{
		//�������
		play_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�ж���Ӯ
		int ret = judge_win(board, ROW, COL);
		if (ret == 1)
		{
			printf("��Ӯ�ˣ���\n");
			break;
		}
		else if (ret == -1)
		{
			printf("ƽ��,�����Զ��²�Ӯ���ˣ�\n");
			break;
		}
		//��������
		printf("��������\n");
		if (num == 1)
		{
			computer_move_easy(board, ROW, COL);
			break;
		}
		
		else
			computer_move_hard(board, ROW, COL);

		displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = judge_win(board, ROW, COL);
		if (ret == 1)
		{
			printf("��ʧ���ˣ��������Զ��²�Ӯ���ˣ�\n");
			break;
		}
		else if (ret == -1)
		{
			printf("ƽ��,�����Զ��²�Ӯ���ˣ�\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�û���ѡ�� ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("��Ϸ�˳�");
			break;
		default:
			printf("������󣡣�\n");
		}
	} while (input);
	return 0;
}