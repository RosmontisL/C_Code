#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//请你编写程序，帮助探险家完成这一倒序读取的任务
//int main()
//{
//	int arr[100] = { 1 };
//	int i = 0;
//	while (arr[i])
//	{
//		i++;
//		scanf("%d", &arr[i]);
//	}
//	i -= 1;
//	while (i)
//	{
//		printf("%d ", arr[i]);
//		i--;
//	}
//	return 0;
//}
//左侧严格小于计数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (a[j] < a[i])
//			{
//				count++;
//			}
//		}
//		b[i] = count;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//牛牛的数学作业
int main()
{
	int T = 0;
	scanf("%d", &T);
	int arr[10][100] = {0};
	int a[10] = { 0 };//极差
	double b[10] = { 0.0 };//方差
	int i= 0;
	int n = 0;
	for (i = 0; i < T; i++)
	{
		scanf("%d", &n);
		int j = 0;
		double sum1 = 0;
		int max = 0;
		int min = 100000;
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		for (j = 0; j < n; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
			sum1 += arr[i][j];
		}
		a[i] = max - min;
		double avg = sum1 / n;
		double sum2 = 0;
		for (j = 0; j < n; j++)
		{
			sum2 = sum2 + (arr[i][j] - avg) * (arr[i][j] - avg);
		}
		b[i] = sum2 / n;
	}
	for (i = 0; i < T; i++)
	{
		printf("%d %.3lf\n", a[i],b[i]);
	}
	return 0;
}