#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������һ����ͬ����Ԫ�صļ���
//һά����
//int main()
//{   //����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3 };
//	char ch1[10] = { 'a','b','c' };
//	//a b c 0 0 0 0 0 0 0 
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// []--�±����ò�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	//��ӡ����ÿ��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//��ά����
//int main()
//{
	/*int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
	int arr1[3][4] = { {1,2},{3,4},{5,6} };
	int arr2[][4] = { 1,2,3,4,5,6 };*/
	//��ά������п���ʡ�ԣ��в���ʡ��
	/*int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
	//	}
	//}
//	return 0;
//}
//����Խ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//������Ϊ��������
//ð������
//���鴫��ʱ���β�������д��
//1.����  2.ָ��
//void bubble_sort(int arr[],int sz)
//{
//	//����
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//����
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{   //������������ų�����
//	int arr[] = { 9,8,5,3,6,7,4,1,2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð��������㷨
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ��������������
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("------------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	/*int n = sizeof(arr);
//	printf("%d\n", n);*/
//	return 0;
//}
//��ά�����������
int main()
{
	int arr[3][4] = { 0 };
	printf("%zu\n", sizeof(arr) / sizeof(arr[0]));//����
	printf("%zu\n", sizeof(arr[0]) / sizeof(arr[0][0]));//����
	//int sz = sizeof(arr);
	//printf("%d\n", sz);
	//printf("%p\n",arr);//��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ
	//printf("%p\n",arr+1);
	return 0;
}
