#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印1~10
//int main()
//{
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		printf("hehe\n");
	}*/
	//for循环的判断部分省略意味着判断会恒成立
	/*for (;;)
	{
		printf("hehe\n");
	}*/
	/*int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("hehe\n");
		}
	}*/

	//do while
	/*int i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}*/

//计算n的阶乘

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算1!+2!+3!+......+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	/*for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}*/
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//在一个有序数组中查找某个数字n(二分查找)
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
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
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}