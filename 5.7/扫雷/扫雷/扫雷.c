#define _CRT_SECURE_NO_WARNINGS

#include"game.c"
void menu()
{
	printf("***********************\n");
	printf("*****  1.play  ********\n");
	printf("*****  0.exct  ********\n");
	printf("***********************\n");
}
void start_game()
{
	char show_board[ROWS][COLS] = { 0 };//����չʾ��ҵ�����

	char mine_board[ROWS][COLS] = { 0 };//����ϵͳ�ж������ɵ�����

	////��ʼ������
	//init_board(show_board,ROW,COL,'*');
	//init_board(mine_board,ROWS,COLS,'0');

	////��ӡ����
	//print_board(show_board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("���û�ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start_game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡��\n");
			break;
		}
	} while (input);

}