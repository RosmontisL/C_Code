#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//动态顺序表
typedef int SQDataType;

typedef struct SeqList
{
	SQDataType* a;
	int size;    //有效数据个数
	int capacity;//容量
}SL;
//增删查改
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);