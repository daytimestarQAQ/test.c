#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*******1.paly*********\n");
	printf("*******0.exct*********\n");
	printf("**********************\n");
}
void start_game()
{
	int flag = 1;
	char show[ROWS][COLS] = { 0 };//����չʾɨ������
	char mine[ROWS][COLS] = { 0 };//���ڼ�¼ɨ����Ϣ
	//��ʼ������
	init_board(show,ROWS,COLS,'*');
	init_board(mine,ROWS,COLS,'0');
	//��ӡ����
	print(show, ROW, COL);
	//����
	set_mine(mine, ROW, COL);
	print(mine, ROW, COL);//�������ã�
	//����ж�
	while (flag)
	{
		// flag=1 ��Ϸ����
		// flag=0 ��Ϸ����
		if (player_action(show, mine, ROW, COL) == 0)
			break;
		//��ӡ����
		print(show, ROW, COL);
		//�ж������Ƿ���
		flag = judge_ogame(show,mine, ROW, COL);
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�û���ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start_game();
			break;
		case 0:
			printf("�˳���Ϸ����\n");
			break;
		default:
			printf("����������������룺");
			break;
		}
	} while (input);

}