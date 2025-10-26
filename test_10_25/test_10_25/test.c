#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//内存比较函数 - memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}
//memset - 内存设置函数
//int main()
//{
//	//char arr[] = "hello bit";
//	//memset(arr, 'x', 5);
//	//memset(arr + 6, 'x', 3);
//	//printf("%s\n", arr);
//	return 0;
//}
#include<math.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		int bit = n % 10;
//		bit %= 2;
//		ret += bit * pow(10, i);
//		i++;
//		n /= 10;
//	}
//	printf("%d\n", ret);
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k < i + 1; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
// return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	double price = 0;
//	int month = 0;
//	int day = 0;
//	int ticket = 0;
//	scanf("%lf %d %d %d", &price, &month, &day, &ticket);
//	if (month == 11 && day == 11)
//	{
//		price = price * 0.7 - ticket * 50;
//	}
//	else if (month == 12 && day == 12)
//	{
//		price = price * 0.8 - ticket * 50;
//	}
//	if (price < 0.0)
//		printf("%.2lf\n", 0);
//	else
//	    printf("%.2lf\n", price);  
//	return 0;
//}
int main()
{
	/*unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf( "%d %d", a + b, c);
	return 0;*/
	unsigned int a = 0x1234;//00 00 12 34
	//小端 34 12 00 00
	//低地址         高地址
	//大端 00 00 12 34
	unsigned char b = *(unsigned char*)&a;
}