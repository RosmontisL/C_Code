#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//int binary_search(int arr[], int k, int sz)//�β�arr����ȥ�����飬��������ָ�����
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//err
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
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
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//��������bool ������ʾ���
#include<stdbool.h>
//дһ��������ÿ����һ������������ͻὫnum��ֵ����һ
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//��������Ƕ�׵��ã����ǲ���Ƕ�׶���
//��ʽ����
//������д��������ʱ��Ĭ�Ϸ���������int
#include<string.h>
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////��ʽ����
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//��ȷ˵����main��������Ҫ����
//������main�������в�����
//int main(void)
//{
//	return 0;
//}
//main��������������
//int main(int argc,char* argv[],char *envp[])
//{
//	return 0;
//}
//�����Ķ��������

//����������
#include"add.h"
//int Add(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}
//�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}