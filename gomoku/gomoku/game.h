#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10//棋盘大小
#define COL 10
//初始化棋盘的声明
void InitBoard(int board[ROW][COL], int row, int col);
//显示棋盘的声明
void DisplayBoard(int board[ROW][COL], int row, int col);
//玩家下棋的声明
void PlayerMove(int board[ROW][COL], int row, int col);
//电脑下棋的声明
void ComputerMove(int board[ROW][COL], int row, int col);
//判断输赢的声明
char CheckWin(int board[ROW][COL], int row, int col);