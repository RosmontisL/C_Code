#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ַ��������ַ�������
//���Ȳ�������˵���ַ������� strlen strcpy strcat strcmp
//int main()
//{
//	////char arr[] = "abcdef";//abcdef\0 - 6
//	//char arr[] = { 'b','i','t' };//�����
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef"))
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}
#include<assert.h>
//1.����������
//2.ָ��-ָ��
//3.�ݹ�ķ�ʽ
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
//strcpy Դ�ַ���������\0��β
//�ὫԴ�ַ����е�\0������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
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
//strcat �ַ���׷��
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ��ռ��ĩβ\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}//�����ַ���
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
//	//�Ƚ������ַ����Ƿ���ȣ�ʹ��strcmp
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//	return 0;
//}

//���������Ƶ��ַ������� - ��԰�ȫ
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
// KMP�㷨ʵ����һ���ַ����в������ַ���Ч�ʸ���
//strstr �����Ӵ��ĺ���
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
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}