#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{//strcpy
//	/*char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	strcpy(arr1,arr2);
//	printf("%s\n",arr1);*/
////memset
//	/*char arr[20] = {"hello world"};
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);*/
//	char arr[20] = { "hello world" };
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数可以交换两个整型变量的内容
//x,y是形式参数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//void Swap(int*px, int*py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
////当实参传递给形参时，形参是实参的一份临时拷贝
////此时形参占用独立的内存，修改形参不会影响实参
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a,b);
////	int c = Add(Add(a,3), b);
//	printf("%d\n", c);
//	//交换
//	printf("交换前：a=%d,b=%d\n", a, b);
//	//a和b是实参
//	Swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//写一个函数判断一个数是不是素数
//打印100~200之间的素数
#include<math.h>
//int main()
//{
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//是素数返回1
//不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//写一个函数判断一年是不是闰年
//打印1000~2000年之间的闰年
//1.能被4整除，并且不能被100整除
//2.能被400整除
//是闰年返回1
//不是闰年返回0
//int is_leap_year(int y)
//{
//	if ((y% 4 == 0) && (y% 100 != 0) || (y% 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到了，返回下标
		}
	}
	return -1;//找不到
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	//找到了，返回下标
	//找不到，返回-1
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else {
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}