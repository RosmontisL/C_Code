#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//����ָ������
//�Ѻ���ָ�������������Ǻ���ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf)(int,int) = Add;//pf�Ǻ���ָ��
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr���Ǻ���ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret=arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("*******1.add  2.sub*******\n");
//	printf("*******3.mul  4.div*******\n");
//	printf("*******   0.exit   *******\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//����ָ�������
//	//ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	do {
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x,y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	//����ָ������
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//ָ����ָ�������ָ��
//	int (*(*ppfArr)[5])(int, int) = &pfArr;
//	return 0;
//}
void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����������ź����
		int j = 0;
		//һ��ð������Ĺ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
//��������
//qsort - ����������������������͵�����
//
//void qsort(void* base,//Ҫ��������ݵ���ʼλ��
//	       size_t num,//�����������Ԫ�ظ���
//	       size_t width,//�����������Ԫ�صĴ�С����λ�ֽڣ�
//	       int (*cmp)(const void* e1, const void* e2)//����ָ�� - �ȽϺ���
//);
int cmp_int(const void* e1, const void* e2)
{
	//����
	return (*(int*)e1 - *(int*)e2);
	//����
	//return (*(int*)e2 - *(int*)e1);
}
void test1()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2()
{
	//����ʹ��qsort������ṹ����
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz,sizeof(arr[0]),cmp_int);
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test4()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}
//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void* ���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//���ܽ����ò�����Ҳ����+-����
//	return 0;
//}