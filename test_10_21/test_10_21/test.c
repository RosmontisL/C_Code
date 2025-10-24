#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 整个数组
	//printf("%d\n", sizeof(a+0));//4,8 a是首元素地址
	//printf("%d\n", sizeof(*a));//4
	////*a中的a是数组首元素地址，*a就是对首元素的地址解引用，找到的是首元素
	//printf("%d\n", sizeof(a+1));//4,8
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4,8 &a取出的是数组的地址
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a+1));//4,8
	//printf("%d\n", sizeof(&a[0]));//4,8
	//printf("%d\n", sizeof(&a[0]+1));//4,8

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4,8
	//printf("%d\n", sizeof(*arr));//1
	////*arr就是数组的首元素地址，大小是1字节
	////*arr --> arr[0]
	////*(arr+0) --> arr[0]
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4,8
	//printf("%d\n", sizeof(&arr+1));//4,8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr+0));//随机值
	////printf("%d\n", strlen(*arr));//--> strlen('a') -->strlen(97) -- 野指针
	////printf("%d\n", strlen(arr[1]));//
	//printf("%d\n", strlen(&arr));//随机值 
	//printf("%d\n", strlen(&arr+1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	//char arr[] = "abcdef"; 
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4,8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4,8
	//printf("%d\n", sizeof(&arr + 1));//4,8
	//printf("%d\n", sizeof(&arr[0] + 1));//4,8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值 
	//printf("%d\n", strlen(&arr[0] + 1));//5

	char* p = "abcdef"; 
	printf("%d\n", sizeof(p));//4,8
	printf("%d\n", sizeof(p + 1));//4,8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4,8
	printf("%d\n", sizeof(&p + 1));//4,8
	printf("%d\n", sizeof(&p[0] + 1));//4,8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}