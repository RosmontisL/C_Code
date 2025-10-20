#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//显示
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------扫雷游戏-------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏-------\n");
}
//设置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1~9
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//统计雷
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (board[x + i][y + j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}
//展开空白函数
void Unfold(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y)
{
	if (mine[x][y] != '1')//该坐标不是雷
	{
		//统计mine数组中x,y坐标周围有几个雷
		int count = get_mine_count(mine, x, y);
		if (count == 0)//该坐标周围没有雷
		{
			if (show[x][y] == '*')//如果坐标没有被排查过
			{
				show[x][y] = ' ';
				Unfold(mine, show, x - 1, y - 1);//八个方向递归
				Unfold(mine, show, x - 1, y);
				Unfold(mine, show, x - 1, y + 1);
				Unfold(mine, show, x, y - 1);
				Unfold(mine, show, x, y + 1);
				Unfold(mine, show, x + 1, y - 1);
				Unfold(mine, show, x + 1, y);
				Unfold(mine, show, x + 1, y + 1);
			}
		}
		else
		{
			show[x][y] = count + '0';//转换成数字字符
		}
	}
}
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到雷的个数
	while (1)
	{
		again:
		printf("（输入0 0可标记）请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)//输入为0 0时可进行标记
		{
			printf("请输入要标记的坐标:>");
			scanf("%d %d", &x, &y);
			//判断坐标是否合法
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				show[x][y] = 'f';//标记
				DisplayBoard(show, ROW, COL);
				goto again;
			}
			else
			{
				printf("输入坐标不合法，请重新输入\n");
			}
		}
		//判断坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了，不能重复排查\n");
			}
			else
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//如果不是雷
				{
					Unfold(mine, show, x, y);//调用展开函数
					DisplayBoard(show, ROW, COL);
					int i = 0;
					int j = 0;
					for (i = 1; i <= row; i++)//每次排查后检测排查出雷的个数
					{
						for (j = 1; j <= col; j++)
						{
							if (show[i][j] == '*' || show[i][j] == 'f')
								win++;
						}
					}
					if (win == EASY_COUNT)//全部排查
					{
						printf("恭喜你，排雷成功！\n");
						break;
					}
					else
					{
						win = 0;
					}
				}
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
}


