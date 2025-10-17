#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化棋盘
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
//显示整个棋盘
void DisplayBoard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//显示每行
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
//玩家下棋
void PlayerMove(int board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");
	int x=0;
	int y=0;
	printf("请输入坐标:>");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)//判断输入坐标是否合法
	{
		if (board[x - 1][y - 1] == ' ')//判断棋盘位置是否为空
		{
			board[x - 1][y - 1] = 'O';
		}
		else
		{
			printf("棋盘位置被占用，请重新输入\n");
		}
	}
	else
	{
		printf("坐标不合法，请重新输入\n");
	}
}
//电脑下棋
void ComputerMove(int board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x = rand() % 10;//产生0~9的随机数
	int y = rand() % 10;
	if (board[x][y] == ' ')
	{
		board[x][y] = 'X';
	}
}
//判断棋盘是否满了
//满了返回1
//未满返回0
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
//判断输赢
//返回O---玩家赢
//返回X---电脑赢
//返回Q---平局
//返回C---继续
char CheckWin(int board[ROW][COL], int row, int col)
{
	//行
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
	//列
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
	//正对角线
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
	//反对角线
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
	//没有人赢，平局
	if (CheckFull(board, ROW, COL))
	{
		return 'Q';
	}
	//继续游戏
	return 'C';
}