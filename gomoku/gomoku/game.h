#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10//���̴�С
#define COL 10
//��ʼ�����̵�����
void InitBoard(int board[ROW][COL], int row, int col);
//��ʾ���̵�����
void DisplayBoard(int board[ROW][COL], int row, int col);
//������������
void PlayerMove(int board[ROW][COL], int row, int col);
//�������������
void ComputerMove(int board[ROW][COL], int row, int col);
//�ж���Ӯ������
char CheckWin(int board[ROW][COL], int row, int col);