#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
//
//void SeqListInit(SL* ps)
//{
//	memset(ps->a, 0, sizeof(SQDataType) * MAX_SIZE);
//	ps->size = 0;
//}
////Î²²å Í·²å Î²É¾ Í·É¾
//void SeqListPushBack(SL* ps, SQDataType x)
//{
//	if (ps->size >= MAX_SIZE)
//	{
//		printf("SeqList is Full\n");
//		return;
//	}
//	ps->a[ps->size] = x;
//	ps->size++;
//}
////////////////////////////////////////////////////////////////
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			return 1;
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}

}
//Î²²å Í·²å Î²É¾ Í·É¾
void SeqListPushBack(SL* ps, SQDataType x)
{    //ÂúÁËÒªÔöÈÝ
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);

void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}