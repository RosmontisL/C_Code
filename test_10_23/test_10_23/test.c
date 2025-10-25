#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符函数和字符串函数
//长度不受限制说的字符串函数 strlen strcpy strcat strcmp
//int main()
//{
//	////char arr[] = "abcdef";//abcdef\0 - 6
//	//char arr[] = { 'b','i','t' };//随机数
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef"))
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}
#include<assert.h>
//1.计数器方法
//2.指针-指针
//3.递归的方式
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n= my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}
//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name,"zhangsan");
//	printf("%s\n", name);
//	return 0;
//}
//strcpy 源字符串必须以\0结尾
//会将源字符串中的\0拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(src && dest);
//    char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//strcat 字符串追加
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到目标空间的末尾\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}//拷贝字符串
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//	/*char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);*/
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//}
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	//比较两个字符串是否相等，使用strcmp
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//	return 0;
//}

//长度受限制的字符串函数 - 相对安全
//strncpy strncat strncmp
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	return 0;
//}
// KMP算法实现在一个字符串中查找子字符串效率更高
//strstr 查找子串的函数
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1=p;
		s2 = str2;
		while (*s1!='\0'&&*s2!='\0'&& * s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	
	return NULL;
}
int main()
{
	char email[] = "zpw@bitejiuyeke.com";
	char substr[] = "bitejiuyeke";
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}