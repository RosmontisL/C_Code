#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}
void game()//实现游戏
{
	int board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//显示棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		ret=CheckWin(board, ROW, COL);//判断玩家是否赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);//电脑下棋
		ret=CheckWin(board, ROW, COL);//判断电脑是否赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == 'O')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'X')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数的起点
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//进入游戏
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}