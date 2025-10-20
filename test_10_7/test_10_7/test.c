#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//整形提升
//int main()
//{
	//char a = 5;
	////00000000000000000000000000000101
	////00000101
	//char b = 126;
	////00000000000000000000000001111110
	////01111110
	//char c = a + b;
	////00000000000000000000000000000101 - a
	////00000000000000000000000001111110 - b
	////00000000000000000000000010000011 - c
	////10000011
	////11111111111111111111111110000011 - 补码
	////11111111111111111111111110000010
	////10000000000000000000000001111101
	//printf("%d\n", c);//-125
	/*char c = -1;*///-1是整数，32个比特位
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111-> -1补码
	//11111111 - c 符号位扩展
	//11111111111111111111111111111111
	//char c = 1;
	//printf("%u\n", sizeof(c));//1
	//printf("%u\n", sizeof(+c));//4
	//printf("%u\n", sizeof(-c));//4
	//return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//int fib(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	printf("%d\n", m);
//	return 0;
//}

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
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	int ret = max - min;
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max-min);
//	return 0;
//}
#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		/*if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}*/
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//
//		/*getchar();*/
//	}
//	return 0;
//}
//变种水仙花数
#include<math.h>
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i / k) * (i % k);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}