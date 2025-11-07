#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n)==1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n ; j++)
//			{
//				if (i > 0 && i < n-1 && j>0 && j<n-1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//柔性数组
//结构体中最后一个元素允许是未知大小的数组，这就叫做（柔性数组）成员
//结构中的柔性数组成员前必须至少一个其他成员
//sizeof返回值不包含柔性数组的内存
//包含柔性数组成员的结构用malloc函数进行内存动态的分配，分配的内存应该大于结构的大小
//以适应柔性数组的预期大小
//typedef struct st_type
//{
//	int n;
//	int arr[];//柔性数组成员
//}type_a;
//int main()
//{
//	/*int sz = sizeof(struct st_type);
//	printf("%d\n", sz);*/
//	//柔性数组的使用
//	 struct st_type* ps=(struct st_type*)malloc(sizeof(struct st_type) + 40);
//	 if (ps == NULL)
//	 {
//		 return 1;
//	 }
//	 ps->n = 100;
//	 int i = 0;
//	 for (i = 0; i < 10; i++)
//	 {
//		 ps->arr[i] = i;
//	 }
//	 for (i = 0; i < 10; i++)
//	 {
//		 printf("%d ", ps->arr[i]);
//	 }
//	 struct st_type* ptr=(struct st_type*)realloc(ps, sizeof(struct st_type) + 80);
//	 if (ptr != NULL)
//	 {
//		 ps = ptr;
//		 ptr = NULL;
//	 }
//	 free(ps);
//	 ps = NULL;
//	return 0;
//}// 方便内存释放，有利于访问速度，连续的内存有益于减少内存碎片
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps=(struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//扩容
	int* ptr = (int*)realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		return 1;
	}
	ps = ptr;
	ptr = NULL;
	free(ps->arr);
	free(ps);
	ps = NULL;
	return 0;
}