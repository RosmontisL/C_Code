#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//动态内存管理
//calloc 初始化为0 calloc=malloc+memset
//int main()
//{
//	//开辟10个整型空间
//	int* p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc(要调整的内存地址，调整之后的大小)
int main()
{
	int* p = (int*)malloc(40);
	if (p = NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用，1,2,3,4,5,6,7,8,9,10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr=(int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	realloc(NULL, 40);//malloc(40)
	return 0;
}