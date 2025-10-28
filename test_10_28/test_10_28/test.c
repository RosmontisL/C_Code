#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//¾ØÕó×ªÖÃ
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
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
//ÉÏÈý½Ç¾ØÕóÅÐ¶Ï
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if ( arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//ÓÐÐòÐòÁÐÅÐ¶Ï
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag = 1;
//	i = 0;
//	while (n--)
//	{
//		if (arr[i] < arr[i + 1])//ÉýÐò
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (arr[i] > arr[i + 1])
//				{
//					flag = 0;
//					goto end;
//				}
//			}
//			goto end;
//		}
//		else if (arr[i] > arr[i + 1])//½µÐò
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (arr[i] < arr[i + 1])
//				{
//					flag = 0;
//					goto end;
//				}
//			}
//			goto end;
//		}
//		else {
//			i++;
//		}
//	}
//	end:
//	if (flag == 1)
//	{
//		printf("sorted\n");
//	}
//	else
//		printf("unsorted\n");
//	return 0;
//}

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if (arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
			else
			{
				;
			}
		}
	}
	if (flag1 + flag2 <= 1)
		printf("sorted\n");
	else
		printf("unsorted\n");
	return 0;
}