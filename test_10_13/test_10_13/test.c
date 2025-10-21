#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void test(int a[])
//{
//
//}
//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);*/
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
#include<assert.h>
//为了实现链式访问，返回char*
//strcpy函数返回的是目标空间的起始地址
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//断言
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "XXXXXXXXXXXX";
	char arr2[] =   "hello bit";
	char* p = NULL;
	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
//int main()
//{
//	/*int num = 10;
//	num = 20;
//	printf("%d\n", num);*/
//	const int num = 10;
//	//num = 20;
//	//const修饰指针变量
//	//1.const放在*的左边
//	//意思是p指向的对象不能通过p来改变了,但是p本身的值是可以改变的
//	//2.const放在*的右边
//	//意思是p指向的对象能通过p来改变,但是p本身的值不可以修改
//	int* const p = &num;
//	*p = 0;
//	//const int* p = &num;
//	// int const* p
//	//*p = 20;
//	printf("%d\n", num);
//	return 0;
//}