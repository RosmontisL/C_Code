#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{               //0 1 2 3 4
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0x11223344;//00010001001000100011001110001000
//    char* pc = (char*)&a;//10001000
//    *pc = 0;//00010001001000100011001100000000
//    printf("%x\n", a);//0x11223300
//    return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//int Sn(int n)
//{
//	int ret = n;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		ret= ret * 10 + n;
//		sum = sum + ret;
//	}
//	sum += n;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//三角形判断
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d",&a,&b,&c)==3)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral trangle!");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("isosceles trangle!");
//			}
//			else
//			{
//				printf("Ordinary trangle!");
//			}
//		}
//		else
//		{
//			printf("Not a trangle!");
//		}
//	}
//	return 0;
//}
//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)
//		{
//			n++;
//			temp /= 10;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//		    printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line -1- i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//1 3 4 7
int main()
{
	int money = 0;
	scanf("%d", &money);
	//int total = money;
	//int empty = money;
	////置换
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	//printf("%d", total);
	if (money > 0)
		printf("%d", 2 * money - 1);
	else
		printf("%d", 0);
	return 0;
}