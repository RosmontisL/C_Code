#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 ��������
	//printf("%d\n", sizeof(a+0));//4,8 a����Ԫ�ص�ַ
	//printf("%d\n", sizeof(*a));//4
	////*a�е�a��������Ԫ�ص�ַ��*a���Ƕ���Ԫ�صĵ�ַ�����ã��ҵ�������Ԫ��
	//printf("%d\n", sizeof(a+1));//4,8
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4,8 &aȡ����������ĵ�ַ
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a+1));//4,8
	//printf("%d\n", sizeof(&a[0]));//4,8
	//printf("%d\n", sizeof(&a[0]+1));//4,8

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4,8
	//printf("%d\n", sizeof(*arr));//1
	////*arr�����������Ԫ�ص�ַ����С��1�ֽ�
	////*arr --> arr[0]
	////*(arr+0) --> arr[0]
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4,8
	//printf("%d\n", sizeof(&arr+1));//4,8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr+0));//���ֵ
	////printf("%d\n", strlen(*arr));//--> strlen('a') -->strlen(97) -- Ұָ��
	////printf("%d\n", strlen(arr[1]));//
	//printf("%d\n", strlen(&arr));//���ֵ 
	//printf("%d\n", strlen(&arr+1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

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
	//printf("%d\n", strlen(&arr + 1));//���ֵ 
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
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}