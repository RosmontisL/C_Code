#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}
void game()//ʵ����Ϸ
{
	int board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ʾ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		ret=CheckWin(board, ROW, COL);//�ж�����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);//��������
		ret=CheckWin(board, ROW, COL);//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == 'O')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'X')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��������������
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//������Ϸ
			break;
		case 0:
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}