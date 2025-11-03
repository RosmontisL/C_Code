#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//枚举
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨
//3.防止了命名污染(封装)
//4.便于调试
//5.使用方便，一次可以定义多个常量
//enum Day
//{
//	//枚举常量 默认为0
//	Mon,
//	Tues,//1
//	Wed,//2
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day d = Fri;
//	/*printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);*/
//	return 0;
//}
//联合(共用体)
//联合的成员是共用一块内存空间的
//一个联合变量大小，至少是最大成员的大小
// 当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//union Un
//{
//	int a;
//	char c;
//};
//struct St
//{
//	int a;
//	char c;
//};
////共用
//int main()
//{
//	union Un u;
//	u.a = 0x11223344;
//	u.c = 0x00;
//	//printf("%d\n", sizeof(u));//4
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.a));
//	//printf("%p\n", &(u.c));
//	return 0;
//}
//判断当前计算机的大小端存储
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1是小端，返回0是大端
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//union Un
//{
//	short arr[7];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}
//动态内存管理
//malloc calloc realloc free
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int arr[10] = { 0 };
	//动态内存开辟
	int* p=(int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用内存
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}