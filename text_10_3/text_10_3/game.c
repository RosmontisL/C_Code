#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//��ʼ��
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
//��ʾ
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------ɨ����Ϸ-------\n");
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
	printf("-------ɨ����Ϸ-------\n");
}
//������
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
//ͳ����
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
//չ���հ׺���
void Unfold(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y)
{
	if (mine[x][y] != '1')//�����겻����
	{
		//ͳ��mine������x,y������Χ�м�����
		int count = get_mine_count(mine, x, y);
		if (count == 0)//��������Χû����
		{
			if (show[x][y] == '*')//�������û�б��Ų��
			{
				show[x][y] = ' ';
				Unfold(mine, show, x - 1, y - 1);//�˸�����ݹ�
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
			show[x][y] = count + '0';//ת���������ַ�
		}
	}
}
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//�ҵ��׵ĸ���
	while (1)
	{
		again:
		printf("������0 0�ɱ�ǣ�������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)//����Ϊ0 0ʱ�ɽ��б��
		{
			printf("������Ҫ��ǵ�����:>");
			scanf("%d %d", &x, &y);
			//�ж������Ƿ�Ϸ�
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				show[x][y] = 'f';//���
				DisplayBoard(show, ROW, COL);
				goto again;
			}
			else
			{
				printf("�������겻�Ϸ�������������\n");
			}
		}
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�����걻�Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				//�������
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//���������
				{
					Unfold(mine, show, x, y);//����չ������
					DisplayBoard(show, ROW, COL);
					int i = 0;
					int j = 0;
					for (i = 1; i <= row; i++)//ÿ���Ų�����Ų���׵ĸ���
					{
						for (j = 1; j <= col; j++)
						{
							if (show[i][j] == '*' || show[i][j] == 'f')
								win++;
						}
					}
					if (win == EASY_COUNT)//ȫ���Ų�
					{
						printf("��ϲ�㣬���׳ɹ���\n");
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
			printf("�������겻�Ϸ�������������\n");
		}
	}
}


