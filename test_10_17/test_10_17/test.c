#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������ʹ����ȫ����λ��ż��ǰ��
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0 )
//		{
//			if (arr[right] % 2 != 0)
//			{
//				int temp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = temp;
//				left++;
//				right--;
//			}
//			else
//			{
//				right--;
//			}
//		}
//		else
//		{
//			left++;
//		}
//	}
//}
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//����������һ��ż����ͣ����
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//����������һ��������ͣ����
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����������ż��
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	move_odd_even(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�������кϲ�
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//�ϲ���ӡ
	int j = 0;
	int k = 0;
	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}