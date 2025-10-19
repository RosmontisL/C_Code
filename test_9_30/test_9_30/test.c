#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组是一组相同类型元素的集合
//一维数组
//int main()
//{   //不完全初始化，剩余的元素默认初始化为0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3 };
//	char ch1[10] = { 'a','b','c' };
//	//a b c 0 0 0 0 0 0 0 
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// []--下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	//打印数组每个元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//二维数组
//int main()
//{
	/*int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
	int arr1[3][4] = { {1,2},{3,4},{5,6} };
	int arr2[][4] = { 1,2,3,4,5,6 };*/
	//二维数组的行可以省略，列不能省略
	/*int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
	//	}
	//}
//	return 0;
//}
//数组越界
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//数组作为函数参数
//冒泡排序
//数组传参时，形参有两种写法
//1.数组  2.指针
//void bubble_sort(int arr[],int sz)
//{
//	//趟数
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//交换
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{   //把数组的数据排成升序
//	int arr[] = { 9,8,5,3,6,7,4,1,2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序的算法
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//数组名确实能表示首元素的地址，但有两个例外
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("------------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	/*int n = sizeof(arr);
//	printf("%d\n", n);*/
//	return 0;
//}
//二维数组的数组名
int main()
{
	int arr[3][4] = { 0 };
	printf("%zu\n", sizeof(arr) / sizeof(arr[0]));//行数
	printf("%zu\n", sizeof(arr[0]) / sizeof(arr[0][0]));//列数
	//int sz = sizeof(arr);
	//printf("%d\n", sz);
	//printf("%p\n",arr);//二维数组的数组名也表示数组首元素的地址
	//printf("%p\n",arr+1);
	return 0;
}
