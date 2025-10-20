#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9//设置棋盘大小
#define COL 9

#define ROWS ROW+2//防止数组越界
#define COLS COL+2

#define EASY_COUNT 10//设置雷的个数
//初始化声明
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);
//设置雷的声明
void SetMine(char board[ROWS][COLS], int row, int col);
//排查雷的声明
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
