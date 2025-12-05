#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPushFront(&sl, 6);
	SeqListPushFront(&sl, 7);
	SeqListPushFront(&sl, 8);
	SeqListPushFront(&sl, 9);
	SeqListPushFront(&sl, 10);
	
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushBack(&sl, 6);
	SeqListPrint(&sl);

	SeqListInsert(&sl, 1, 20);
	SeqListPrint(&sl);

	SeqListDelete(&sl, 1);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}
void menu()
{
	printf("*****************************");
	printf("*****************************");
	printf("*****************************");
	printf("*****************************");
	printf("*****************************");
}
int main()
{
	TestSeqList2();
	return 0;
}