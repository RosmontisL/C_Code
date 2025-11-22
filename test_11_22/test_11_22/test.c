#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//年轻人不讲5的
//int main()
//{
//    char str[1000] = { 0 };
//    scanf("%s", str);
//    int sz = sizeof(str) / sizeof(str[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if (str[i] == '5')
//        {
//            str[i] = '*';
//        }
//    }
//    printf("%s", str);
//	return 0;
//}
//斗兽棋
//int main()
//{
//	char s1[20] = { 0 };
//	char s2[20] = { 0 };
//	scanf("%s %s", s1, s2);
//	if (s1[0] == 'e' && s2[0] == 't')
//	{
//		printf("win\n");
//	}
//	else if (s1[0] == 'e' && s2[0] == 'm')
//	{
//		printf("lose\n");
//	}
//	else if (s1[0] == 't' && s2[0] == 'c')
//	{
//		printf("win\n");
//	}
//	else if (s1[0] == 't' && s2[0] == 'e')
//	{
//		printf("lose\n");
//	}
//	else if (s1[0] == 'c' && s2[0] == 'm')
//	{
//		printf("win\n");
//	}
//	else if (s1[0] == 'c' && s2[0] == 't')
//	{
//		printf("lose\n");
//	}
//	else if (s1[0] == 'm' && s2[0] == 'e')
//	{
//		printf("win\n");
//	}
//	else if (s1[0] == 'm' && s2[0] == 'c')
//	{
//		printf("lose\n");
//	}
//	else
//	{
//		printf("tie\n");
//	}
//	return 0;
//}
//添加逗号
#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char str1[1000] = { 0 };
//	char str2[1000] = { 0 };
//	sprintf(str1, "%d", n);
//	int len1 = strlen(str1);
//	int sz1 = len1 - 1;
//	int d = (len1 - 1) / 3;//逗号个数
//	int sz2 = sz1 + d;
//	int count = 0;
//	while (sz1>=0)
//	{
//		str2[sz2] = str1[sz1];
//	    sz2--;
//		sz1--;
//		count++;
//		if (count % 3 == 0&& sz2>=0)
//		{
//			str2[sz2] = ',';
//			sz2--;
//		}
//	}
//	printf("%s\n", str2);
//	return 0;
//}
//在一个字符串中，从前向后查找子串 "Bob" 第一次出现的位置
#include<ctype.h>
int main()
{
	char S[100] = { 0 };
	char str[100] = "Bob";
	int len = strlen(str);
	int count = 0;
	scanf("%s", S);
	int pos = 0;
	while (S[pos] != '\0')
	{
		if (tolower(S[pos]) == tolower(str[0]))
		{
			count = 1;
			int temp = pos + 1;
			for (int i = 1; i < len; i++)
			{
				if (S[temp]!='\0'&& tolower(S[temp]) == tolower(str[i]))
				{
					count++;
				}
				temp++;
			}
			if (count == len)
			{
				printf("%d\n", pos);
				return 0;
			}
		}
		pos++;
	}
	printf("-1\n");
	return 0;
}