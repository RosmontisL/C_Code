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
//Ϊ��ʵ����ʽ���ʣ�����char*
//strcpy�������ص���Ŀ��ռ����ʼ��ַ
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//����
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
	//strcpy�ڿ����ַ�����ʱ�򣬻��Դ�ַ����е�\0Ҳ������ȥ
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
//	//const����ָ�����
//	//1.const����*�����
//	//��˼��pָ��Ķ�����ͨ��p���ı���,����p�����ֵ�ǿ��Ըı��
//	//2.const����*���ұ�
//	//��˼��pָ��Ķ�����ͨ��p���ı�,����p�����ֵ�������޸�
//	int* const p = &num;
//	*p = 0;
//	//const int* p = &num;
//	// int const* p
//	//*p = 20;
//	printf("%d\n", num);
//	return 0;
//}