#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组传参实际上传递的是数组首元素的地址
//而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//int binary_search(int arr[], int k, int sz)//形参arr看上去是数组，本质上是指针变量
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//err
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//布尔类型bool 用来表示真假
#include<stdbool.h>
//写一个函数，每调用一次这个函数，就会将num的值增加一
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//函数可以嵌套调用，但是不能嵌套定义
//链式访问
//函数不写返回类型时，默认返回类型是int
#include<string.h>
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//明确说明，main函数不需要参数
//本质上main函数是有参数的
//int main(void)
//{
//	return 0;
//}
//main函数有三个参数
//int main(int argc,char* argv[],char *envp[])
//{
//	return 0;
//}
//函数的定义和声明

//函数的声明
#include"add.h"
//int Add(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}
//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}