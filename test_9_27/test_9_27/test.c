#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����������������ǵ����Լ��
//������⣬Ч�ʵ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			c = i;
//		}
//	}
//	printf("%d\n", c);
//	return 0;
//}
//շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//���������������մӴ�С˳�����
//void Swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//��ӡ1~100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//��1~100֮����ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{	
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main()
//{
//	int flag = 1;
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flag;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 3,1,5,2,9,7,8,4,0,6 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <10; i++)
//	{
//		for ( j = 1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
#include<time.h>
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		game();
	}
	return 0;
}