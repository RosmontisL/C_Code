#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	scanf("%d %d", &num1, &num2);
//	int max = get_max(num1, num2);
//	printf("max%d\n", max);
//	return 0;
//
//}
//#include<string.h>
//int main() {
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()
//{
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��?��1/0��");
//	int input = 0;
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//���ṹ����˳��ṹ ѡ��ṹ ѭ���ṹ
//����
//�����������
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{   //����
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	/*printf("%d\n", arr[8]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//��ӡС�ɻ�
int main()
{//��ͷ
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//����
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��β
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2; k++)
		{
			printf("*  ");
		}
		printf("\n");
	}
	return 0;
}
