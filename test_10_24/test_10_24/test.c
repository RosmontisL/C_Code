#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//strtok 切割字符串
//int main()
//{
//	char sep[] = "@.";
//	char email[] = "11783533332@qq.com.abc";
//	char cp[40] = { 0 };
//	strcpy(cp, email);
//	char* ret = NULL;
//	for (ret = strtok(cp, sep);
//		ret != NULL;
//		ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	/*printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);*/
//	return 0;
//}
//strerror
//c语言的库函数在执行失败的时候，都会设置错误码
#include<errno.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));*/
//	//errno - c语言设置的一个全局的错误码存放的变量
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	return 0;
//}
//字符分类函数
#include<ctype.h>
//int main()
//{
//	//int a = isspace(' ');//判断是否为空白字符
//	//int a = isdigit('4'); //判断是否为数字字符
//	//字符转换函数 - tolower和toupper
//	printf("%c\n",tolower('W'));
//	return 0;
//}
//memcpy - 内存拷贝- 负责拷贝两块独立空间中的数据
//重叠内存的拷贝用memmove
#include<assert.h>
void* my_memcpy(void* dest, const void* src,size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while(num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
void test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
}
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
void test2()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memmove(arr1, arr1+2, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}
int main()
{
	//test1();
	test2();
	return 0;
}

