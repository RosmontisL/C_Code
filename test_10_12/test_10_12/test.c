#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//	return 0;
//}
// 11|10
//1011 - 11
//1010 - 10
//1011 - 11
//求两个整数的最小公倍数
// 两个数乘积除以最大公约数
//18 12 6 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	int temp1 = a;
//	int temp2 = b;
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", (temp1 * temp2) / b);
//	return 0;
//}
//倒置字符串
#include<string.h>
#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets_s(arr, sizeof(arr));
//	int len = strlen(arr);
//	//逆序整个字符串
//	reverse(arr, arr + len - 1);
//	//逆序每一个单词
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while ((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0');
//		    end++;
//		start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}