#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{//strcpy
//	/*char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	strcpy(arr1,arr2);
//	printf("%s\n",arr1);*/
////memset
//	/*char arr[20] = {"hello world"};
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);*/
//	char arr[20] = { "hello world" };
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���������Խ����������ͱ���������
//x,y����ʽ����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//void Swap(int*px, int*py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
////��ʵ�δ��ݸ��β�ʱ���β���ʵ�ε�һ����ʱ����
////��ʱ�β�ռ�ö������ڴ棬�޸��ββ���Ӱ��ʵ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a,b);
////	int c = Add(Add(a,3), b);
//	printf("%d\n", c);
//	//����
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	//a��b��ʵ��
//	Swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//дһ�������ж�һ�����ǲ�������
//��ӡ100~200֮�������
#include<math.h>
//int main()
//{
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//����������1
//������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//1.�ܱ�4���������Ҳ��ܱ�100����
//2.�ܱ�400����
//�����귵��1
//�������귵��0
//int is_leap_year(int y)
//{
//	if ((y% 4 == 0) && (y% 100 != 0) || (y% 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//�ҵ��ˣ������±�
		}
	}
	return -1;//�Ҳ���
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	//�ҵ��ˣ������±�
	//�Ҳ���������-1
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else {
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}