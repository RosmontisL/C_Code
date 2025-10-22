#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符指针
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);*/
//	//const char* p = "abcdef";//把字符串首字符a的地址赋给了p
//	//printf("%s\n", p);
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//}
//指针数组 - 是数组，是用来存放指针的数组 
//int main()
//{
//	//int* arr1[6];//存放整型指针的数组
//	//char* arr2[5];//存放字符指针的数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//p[i] -> *(p+i)
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针 - 指针 - 指向数组的指针
//int main()
//{
	//int* p1[10];//指针数组
	//int (*p2)[10];//数组指针
	//再次讨论数组名
	//数组名通常表示的都是数组首元素的地址
	//但是sizeof(数组名)，计算整个数组的大小，&数组名，取出的是整个数组的地址
	//int arr[10] = { 0 };
	//int* p = arr;
	//int (*p2)[10] = &arr;
	
	//char* arr[5] = { 0 };
	//char* (*pc)[5] = &arr;
//	return 0;
//}
void print1(int arr[3][5],int r,int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5],int r ,int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print2(arr, 3, 5);
	return 0;
}