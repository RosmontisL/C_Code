#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//%d 是打印有符号的整数（会有正负数）
//%u 是打印无符号的整数
//函数递归
//接受一个无符号整型值，按照顺序打印它的每一位。
//递归的两个必要条件
//1.存在限制条件，当满足这个条件时，递归不在继续
//2，每次递归调用之后越来越接近这个限制条件
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串长度
//模拟实现strlen
#include<string.h>
// int my_strlen(char str[])//参数部分写成数组形式
//int my_strlen(char* str)//参数部分写成指针形式
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//递归求解

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//利用函数递归，求解输入一个数n的阶乘
//int jiecheng(int n)
//{
//	if (n != 0)
//	{
//		return n*jiecheng(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int mul=jiecheng(n);
//	printf("%d\n", mul);
//	return 0;
//}
//递归实现
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//迭代实现
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d", ret);
//	return 0;
//}

//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55......
// 递归会有大量的重复计算，效率低
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//用迭代实现
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 2; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}