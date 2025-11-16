#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
// int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}
//一个数组中只有两个数字只出现一次，其他都成对出现，找出这两个数字
//void find_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//异或
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//计算ret的二进制中左右边的第几位是1
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_single_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d\n",dog1, dog2);
//	return 0;
//}
//模拟实现atoi
#include<ctype.h>
#include<limits.h>
enum Status
{
	VALID,
	INVALID
}sta = INVALID;//默认非法
int my_atoi(const char* str)
{
	assert(str);
	//空字符串
	if (*str == '\0')
	{
		return 0;
	}
	//跳过空格
	while (isspace(*str))
	{
		str++;
	}
	//+-
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		if(isdigit(*str))
		{
			//越界
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	if (*str == '\0')
	{
		sta = VALID;
	}
	return (int)ret;
}
int main()
{
	char arr[200] = "123456";
	int ret = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("非法返回:%d\n", ret);
	}
	else if (sta == VALID)
	{
		printf("合法返回:%d\n", ret);
	}
	return 0;
}