#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//��ʼ������
void InitBoard(int board[ROW][COL], int row, int col)
{ 
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//��ʾ��������
void DisplayBoard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//��ʾÿ��
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" ---");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("| %c ", board[i][j]);
		}
		printf("|\n");
		if (i == row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf(" ---");
			}
			printf("\n");
		}
	}
}
//�������
void PlayerMove(int board[ROW][COL], int row, int col)
{
	printf("�������\n");
	int x=0;
	int y=0;
	printf("����������:>");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж����������Ƿ�Ϸ�
	{
		if (board[x - 1][y - 1] == ' ')//�ж�����λ���Ƿ�Ϊ��
		{
			board[x - 1][y - 1] = 'O';
		}
		else
		{
			printf("����λ�ñ�ռ�ã�����������\n");
		}
	}
	else
	{
		printf("���겻�Ϸ�������������\n");
	}
}
//��������
void ComputerMove(int board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int x = rand() % 10;//����0~9�������
	int y = rand() % 10;
	if (board[x][y] == ' ')
	{
		board[x][y] = 'X';
	}
}
//�ж������Ƿ�����
//���˷���1
//δ������0
int CheckFull(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
//�ж���Ӯ
//����O---���Ӯ
//����X---����Ӯ
//����Q---ƽ��
//����C---����
char CheckWin(int board[ROW][COL], int row, int col)
{
	//��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j <= col - 5; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3] && board[i][j + 3] == board[i][j + 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//��
	for (i = 0; i <= row-5; i++)
	{
		int j = 0;
		for (j = 0; j < col ; j++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 2][j] == board[i + 3][j] && board[i + 3][j] == board[i + 4][j] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//���Խ���
	for (i = 0; i <= row-5; i++)
	{
		int j = 0;
		for (j = 0; j <= col-5; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3] && board[i + 3][j + 3] == board[i + 4][j + 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//���Խ���
	for (i = 0; i <=row-5; i++)
	{
		int j = 0;
		for (j = col-1; j >=col-6; j--)
		{
			if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] == board[i + 3][j - 3] && board[i + 3][j - 3] == board[i + 4][j - 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//û����Ӯ��ƽ��
	if (CheckFull(board, ROW, COL))
	{
		return 'Q';
	}
	//������Ϸ
	return 'C';
}