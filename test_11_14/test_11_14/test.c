#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//预定义符号
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s line:%d date:%s time:%s %d\n",
//		__FILE__,
//		__LINE__,
//		__DATE__,
//		__TIME__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#define 定义宏 宏不能递归 字符串内容不会被替换
//#define SQUARE(X) ((X)*(X))
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int r = SQUARE(5+1);
//	int ret = 10*DOUBLE(3);
//	printf("%d\n", r);
//	printf("%d\n", ret);
//	return 0;
//}
// # - 把参数插入到字符串
//#define PRINT(N) printf("the value of "#N" is %d\n", N)
//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//int main()
//{
//	int a = 10;
//	PRINT(a,"%d");
//	//printf("the value of a is %d\n", a);
//	float b=3.14f;
//	PRINT(b,"%lf");
//	//printf("the value of b is %d\n", b);
//	return 0;
//}
// ## - 可以把位于它两边的符号合成一个符号
//#define CAT(Class,Num) Class##Num
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class, 106));
//	return 0;
//}
//带副作用的宏
//#define MAX(x,y) ((x>y)?(x):(y))
//int main()
//{
//	//int m = MAX(2, 3);
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);
//	printf("%d\n", m);
//	printf("a=%d b=%d\n", a, b); 
//	return 0;
//}
//宏和函数
//宏比函数在程序的规模和速度方面更胜一筹，宏的类型是无关的
//宏会使程序长度增加，宏不能调试，宏不够严谨，宏可能带来运算符优先级的问题
//#define MAX(x,y) ((x>y)?(x):(y)) 计算
//int Max(int x, int y)//函数调用 计算 函数返回
//{
//	return (x > y ? x : y);
//}
#include<stdlib.h>
//#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
//int main()
//{
//	//malloc(40);
//	//malloc(10, int);
//	int* p = MALLOC(10, int);
//	return 0;
//}
//#undef - 用于移除一个宏定义
//条件编译
//#define M 6
//int main()
//{
//#if 0
//	printf("hehe\n");
//#endif
//#if M<5
//	printf("hehe\n");
//#elif M==5
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}
//判断符号是否定义
#define MAX 100
int main()
{
#ifdef MAX
	printf("max\n");
#endif
#ifndef MAX
	printf("max\n");
#endif

	return 0;
}
//int main()
//{
//#if defined(MAX)
//	printf("max\n");
//#endif
//#if !defined(MAX)
//	printf("max\n");
//#endif
//	return 0;
//}