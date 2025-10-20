#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写一个函数返回参数二进制中 1 的个数
//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//{
//    int count = 0;
//    while (n)
//    {
//        if ((n % 2) == 1)
//        {
//            count++;
//        }
//        n /= 2;
//    }
//    return count;
//}
//int count_num_of_1(int n)
//{
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int count_num_of_1(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}
//判断一个数是不是2的n次方
//2^1
//10
//2^2
//100
//2^3
//1000
//if ((n & (n - 1)) == 0)
//{
//
//}
//int main()
//{/*
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);*/
//	//010110 - 22
//	//100001 - 33
//
//    int num = 0;
//    int count = 0;
//    scanf("%d", &num);
//    int n = count_num_of_1(num);
//  /*  for (int i = 0; i < 32; i++)
//    {
//        if ((n & 1) == 1)
//        {
//            count++;
//            n = n >> 1;
//        }
//    }*/
//    printf("%d", n);
//	return 0;
//}
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//相同为0，相异为1
//	int ret = m ^ n;
//	while (ret)
//	{
//		//统计ret中二进制位1的个数
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	//10
//	//00000000000000000000000000001010
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//获取奇数位数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//int i;
////全局变量，静态变量都是放在静态区
////不初始化的时候，默认会被初始化为0
////局部变量，是放在栈区，不初始化，默认值是随机值
//int main()
//{
//    i--;
//    //sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n)==1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if ((i + j) == (n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
int is_leep_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,31,31 };
	while (scanf("%d %d",&y,&m)==2)
	{
		int d = days[m];
		if ((is_leep_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}