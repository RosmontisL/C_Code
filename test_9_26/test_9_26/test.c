#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//%d �Ǵ�ӡ�з��ŵ�������������������
//%u �Ǵ�ӡ�޷��ŵ�����
//�����ݹ�
//����һ���޷�������ֵ������˳���ӡ����ÿһλ��
//�ݹ��������Ҫ����
//1.���������������������������ʱ���ݹ鲻�ڼ���
//2��ÿ�εݹ����֮��Խ��Խ�ӽ������������
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//��д��������������ʱ���������ַ�������
//ģ��ʵ��strlen
#include<string.h>
// int my_strlen(char str[])//��������д��������ʽ
//int my_strlen(char* str)//��������д��ָ����ʽ
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}
//�ݹ����

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//���ú����ݹ飬�������һ����n�Ľ׳�
//int jiecheng(int n)
//{
//	if (n != 0)
//	{
//		return n*jiecheng(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int mul=jiecheng(n);
//	printf("%d\n", mul);
//	return 0;
//}
//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//����ʵ��
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d", ret);
//	return 0;
//}

//���n��쳲�������
//쳲���������
//1 1 2 3 5 8 13 21 34 55......
// �ݹ���д������ظ����㣬Ч�ʵ�
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//�õ���ʵ��
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 2; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}