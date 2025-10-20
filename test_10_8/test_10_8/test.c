#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.指针是内存中一个最小单元的编号，也就是地址
//2.平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa是一个指针变量，用来存放地址
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//	return 0;
//}
//指针类型的意义
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a;
//	*pc = 0;
//	//指针类型决定的了指针在被解引用的时候访问几个字节
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//	printf("pc=%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//	//指针的类型决定了指针+-1操作的时候，跳过几个字节
//	//决定了指针的步长
//	//100 - 10进制
//	//0x64 - 16
//	//100 0100 - 2
//	//144 - 8
//	return 0;
//}
//int main()
//{
//	//int a = 0;
//	//int* pi = &a;
//	//float* pf = &a;
//	////int* 和float* 不能通用
//	//*pi = 100;
//	//*pf = 100.0;
//	return 0;
//}
//野指针成因
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
	//1.没有初始化
	//int* p;
	////p没有初始化，就意味着没有明确的指向
	////一个局部变量不初始化，放的是随机值：0xcccccccc
	//*p = 10;//非法访问内存了，这里的p就是也指针
	//2.数组越界访问
	//int arr[10] = { 0 };
	//int* p = arr;//&arr[0]
	//int i = 0;
	//for (i = 0; i <= 10; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//3.指针指向的空间释放
	/*int* p = test();*/
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//NULL -> 0 
//	int* p2 = NULL;
//	if (p2 != NULL)
//	{
//		*p2 = 100;
//	}
//	return 0;
//}
//指针的运算
//int main()
//{
//	//int arr[10] = { 0 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////数组下标写法
//	///*for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}*/
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	/**p = 1;
//	//	p++;*/
//	//	*(p + i) = 1;
//	//}
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针得到的是指针和指针之间元素的个数
//	//指向同一块空间的2个指针才能相减
//	return 0;
//}
#include<string.h>
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
	return 0;
}