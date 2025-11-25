#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//三短一长选最长,三长一短选最短
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	char str[100] = { 0 };
//	char s[5] = "ABCD";
//	while (T--)
//	{
//		int i = 0;
//		int max = 0;
//		int min = 1000;
//		int len[10] = { 0 };
//		int max_pos = 0;
//		int min_pos = 0;
//		for (i = 0; i < 4; i++)
//		{
//			scanf(" %s", str);
//			len[i] = strlen(str);
//			if (len[i] > max)
//			{
//				max = len[i];
//				max_pos = i;
//			}
//			if (len[i] < min)
//			{
//				min = len[i];
//				min_pos = i;
//			}
//		}
//		int max_count = 0;//小于最长的个数
//		int min_count = 0;//大于最短的个数
//		for (i = 0; i < 4; i++)
//		{
//			if (len[i] < max)
//			{
//				max_count++;
//			}
//			if (len[i] > min)
//			{
//				min_count++;
//			}
//		}
//		if (min_count == 3 && max_count != 3)//三长一短选最短
//		{
//			printf("%c\n", s[min_pos]);
//		}
//		else if (max_count == 3 && min_count != 3)//三短一长选最长
//		{
//			printf("%c\n", s[max_pos]);
//		}
//		else
//		{
//			printf("C\n");
//		}
//	}
//	return 0;
//}
//字符串操作
int main()
{
	int n = 0;
	int m = 0;
	char s[100] = { 0 };
	scanf("%d %d", &n, &m);
	scanf(" %s", s);
	while (m--)
	{
		int l = 0;
		int r = 0;
		char c1 = 0;
		char c2 = 0;
		scanf("%d %d %c %c", &l, &r, &c1, &c2);
		int i = 0;
		for (i = l-1; i < r; i++)
		{
			if (s[i] == c1)
			{
				s[i] = c2;
			}
		}
	}
	printf("%s\n", s);
	return 0;
}