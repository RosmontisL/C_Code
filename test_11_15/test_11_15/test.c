#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//offsetof宏的实现
#include<stdlib.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#define OFFSETOF(type,m_name)  (size_t)&(((type*)0)->m_name)
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	/*printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));*/
//	return 0;
//}
//箭形图案
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{//上n行
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//下n+1行
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//公务员考试
//int main()
//{
//	int score = 0;
//	int count = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	while (scanf("%d", &score) == 1)
//	{
//		count++;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//		sum += score;
//		if (count == 7)
//		{
//			sum = sum - max - min;
//			printf("%.2f\n", sum / 5.0);
//			count = 0;
//			max = 0;
//			min = 100;
//			sum = 0;
//		}
//	}
//	return 0;
//}
#include<string.h>
int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}
