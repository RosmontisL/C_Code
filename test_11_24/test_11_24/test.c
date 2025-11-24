#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//输出一个字符串，表示对s中每个字符向后错位n次后得到的密码字符串
//int main()
//{
//	int n = 0;
//	char s[100] = { 0 };
//	char psd[100] = { 0 };
//	scanf("%d", &n);
//	scanf(" %s", s);
//	int len = strlen(s);
//	int i = 0;
//	while (len--) {
//		if (s[i] + n > 'z') {
//			psd[i] = (s[i] - 'a' + n) % 26 + 'a';
//		}
//		else {
//			psd[i] = s[i] + n;
//		}
//		i++;
//	}
//	printf("%s\n", psd);
//	return 0;
//}
//将所有正整数依次拼接得到一个字符串，求第n个字符为多少
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int k = 1;//位数
//	int start = 1;
//	int count = 9;
//	while (n>count)
//	{
//		n -= count;//有n个字符在k位数中
//		k++;
//		start *= 10;
//		count = 9 * k * start;
//	}
//	int num = start + (n - 1) / k;//n所在的数字
//	int pos = (n - 1) % k + 1;//求在数字的第几位
//	int div = pow(10, k - pos);
//	ret = (num / div) % 10;
//	printf("%d\n", ret);
//	return 0;
//}
//输出只保留每个组成单词的首字母，并将首字母大写后再连接在一起
#include<ctype.h>
//int main()
//{
//	char str[1000] = { 0 };
//	char s[100] = { 0 };
//	scanf("%[^\n]s", str);
//	int len = strlen(str);
//	int pos = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		s[0] = toupper(str[0]);
//		if (isspace(str[i]))
//		{
//			i++;
//			pos++;
//			s[pos] = toupper(str[i]);
//		}
//	}
//	printf("%s", s);
//	return 0;
//}
