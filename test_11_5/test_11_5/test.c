#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//动态内存管理 常见错误
//1.对NULL指针的解引用
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;//
//	free(p);
//	p = NULL;
//	return 0;
//}
//2.对动态内存空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}
//4.使用free释放动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//5.对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	free(p);
//	free(p);
//	return 0;
//}
//6.动态开辟内存忘记释放(内存泄漏)
//void test()
//{
//	int* p = (int*)malloc(100);
//	//...
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return;
//
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//内存泄漏
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//str是NULL,解引用时会崩溃
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//str存放的就是动态开辟的100字节的地址
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//12 18
int main()
{
	int n = 0;
	int m = 0;
	int ret = 0;
	while (scanf("%d %d", &n, &m) == 2)
	{
		int a = n;
		int b = m;
		int c = 0;
		while (ret = a % b)
		{
			a = b;
			b = ret;//b为最大公因数
		}
		c = n * m / b;//c为最小公倍数
		printf("%d", c + b);
	}
	return 0;
}