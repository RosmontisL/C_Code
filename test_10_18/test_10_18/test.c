#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ַ�ָ��
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);*/
//	//const char* p = "abcdef";//���ַ������ַ�a�ĵ�ַ������p
//	//printf("%s\n", p);
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//}
//ָ������ - �����飬���������ָ������� 
//int main()
//{
//	//int* arr1[6];//�������ָ�������
//	//char* arr2[5];//����ַ�ָ�������
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//p[i] -> *(p+i)
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ָ�� - ָ�� - ָ�������ָ��
//int main()
//{
	//int* p1[10];//ָ������
	//int (*p2)[10];//����ָ��
	//�ٴ�����������
	//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
	//����sizeof(������)��������������Ĵ�С��&��������ȡ��������������ĵ�ַ
	//int arr[10] = { 0 };
	//int* p = arr;
	//int (*p2)[10] = &arr;
	
	//char* arr[5] = { 0 };
	//char* (*pc)[5] = &arr;
//	return 0;
//}
void print1(int arr[3][5],int r,int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5],int r ,int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print2(arr, 3, 5);
	return 0;
}