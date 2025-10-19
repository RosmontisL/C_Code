#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int is_prime(int n)
//{
//	for (int i = 2; i <=sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//void mul(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}
//实现一个函数来交换两个整数的内容
//void Swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//递归方式实现打印一个整数的每一位 123
//void print(int n)
//{
//	if (n>9)
//	{
//	   print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//递归和非递归分别实现求n的阶乘
//int fac(int n)
//{
//	if (n != 1)
//	{
//		return n * fac(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("%d", ret);
//	return 0;
//}
//strlen的模拟（递归实现)
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//字符串逆序（递归实现）
void reverse_string(char* string)
{
	int len = strlen(string);
	if (len <= 1)
	{
		return;
	}
	char temp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	reverse_string(string + 1);
	*(string + len - 1) = temp;
	*(string + len) = '\0';
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
