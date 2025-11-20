#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组计数维护
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n = 0;
//		int k = 0;
//		int S = 0;
//		int cnt = 0;
//		int a[50] = { 0 };
//		scanf("%d %d", &n,&k);
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (a[i] >= k)
//			{
//				S += a[i];
//			}
//			if (a[i] == 0 && S >= 1)
//			{
//				S--;
//				cnt++;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}
//试计算在区间1到n的所有整数中x共出现了多少次
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int count = 0;
//	scanf("%d %d", &n, &x);
//	int arr[10000] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//		tmp = arr[i];
//		while (tmp)
//		{
//			if (tmp % 10 == x)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//约瑟夫环
int main()
{
	int n = 0;
	int k = 0;
	int m = 0;
	scanf("%d %d %d", &n, &k, &m);
	int i = 0;
	int people[100] = { 0 };
	int num_count = 0;//报数计数
	int num_pos = k;//从编号为k的人开始报数
	int people_count = n;//队中剩余人数
	while (people_count > 1)
	{
		if (people[num_pos] == 0)//0为在队
		{
			num_count++;//报数从1到m
			if (num_count == m)//报到m时出队
			{
				people[num_pos] = 1;//1为出队
				people_count--;
				num_count = 0;//重新报数
			}
		}
		num_pos = (num_pos + 1) % n;//循环移动到下一个人
	}
	for (i = 0; i < n ; i++)
	{
		if (people[i] == 0)//只剩一个人在队
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}