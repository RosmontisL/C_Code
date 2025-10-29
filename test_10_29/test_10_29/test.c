#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//自定义类型 -  结构体，枚举，联合
//结构体类型的定义和初始化
//struct Stu
//{
//	char name[20];
//	int age;
//};
//匿名结构体类型,只能使用一次
//编译器会把两个匿名结构体声明当成完全不同的两个类型
//struct 
//{
//	char name[20];
//	int age;
//}s1;
//结构体自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//struct Point
//{
//	int x;
//	int y;
//}p1 = {2,3};
//struct score
//{
//	int n;
//	char ch;
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan",18,{100,'q'} };
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//	return 0;
//}
//结构体对齐规则
//1.第一个成员在与结构体变量偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍地址处
// 对齐数= 编译器默认的一个对齐数（VS默认为8）与该成员大小的较小值
//3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//4.如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍处
//  结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

//为什么存在内存对齐
//1.平台原因（移植原因）- 不是所有的硬件平台都能访问任意地址上的任意数据的；
//  某些硬件平台只能在某些地址处取出某些特定类型的数据，否则抛出硬件异常
//2.性能原因  -  数据结构（尤其是栈）应该尽可能地在自然边界上对齐
//  原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐内存的访问只需要作次访问
//总体来说，结构体内存对齐是拿空间来换取时间的做法
//既要对齐，又要节省空间 - 让占用空间小的成员尽量集中在一起
#include<stdlib.h>
#include<stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	//struct S1 s1;
//	//struct S2 s2;
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	/*printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));*/
//	return 0;
//}

//#pragma pack(4)// 修改默认对齐数
//struct S
//{
//	int i;
//	double d;
//};
//#pragma pack()
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct S1));//6
//	return 0;
//}
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
////结构体传参，要传结构体的地址
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//位段 - 用来节省空间 - 不跨平台
//位段的类型必须是整型家族
//位段在网络
//struct A
//{
//	//4byte-32位
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	//15
//	//4byte-32位
//	int _d : 30;
//};
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	//printf("%d\n", sizeof(struct A));//8
	return 0;
}