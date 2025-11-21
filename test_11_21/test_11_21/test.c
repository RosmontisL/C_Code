#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//校门外的树
//int main()
//{
//	int L = 0;
//	int M = 0;
//	int length[10000] = { 0 };
//	scanf("%d %d", &L, &M);
//	while (M--)
//	{
//		int l = 0;
//		int r = 0;
//		int i = 0;
//		scanf("%d %d", &l, &r);
//		for (i = l; i <= r; i++)
//		{
//			length[i] = 1;
//		}
//	}
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= L; i++)
//	{
//		if (length[i] == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//计算n行m列数组的和
//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			sum += arr[i][j];
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//上三角矩阵判断
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20][20] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > 0 && j < n && i > j)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	if (sum == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//矩阵转置
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[20][20] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//杨辉三角
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50][50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (i == 1 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//扫雷
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	char board1[10][10] = { 0 };
	char board2[12][12] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf(" %c", &board1[i][j]);//%c前加空格防止回车键干扰读取
		}
	}
	for (i = 1; i < n + 1; i++)
	{
		for (j = 1; j < m + 1; j++)
		{
			if (board1[i - 1][j - 1] == '*')
			{
				board2[i][j] = 1;
			}
			else
			{
				board2[i][j] = 0;
			}
		}
	}
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < m ; j++)
		{
			if (board1[i][j] == '.')
			{
				int count = 0;
				    count += board2[i + 1][j] + board2[i][j] +board2[i + 2][j] +
						    board2[i][j + 1] + board2[i + 2][j + 1] +
					        board2[i + 1][j + 2] + board2[i][j + 2] + board2[i + 2][j + 2];
				  board1[i][j] = count + '0';
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%c ", board1[i][j]);
		}
		printf("\n");
	}
	return 0;
}