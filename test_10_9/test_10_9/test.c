#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//arr����Ԫ�ص�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p---------%p\n", &arr[i], p + i);
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ�������һ��ָ�����
//	int** ppa = &pa;//ppa��һ������ָ�����
//	**ppa = 20;
//	//����ָ��������������һ��ָ������ĵ�ַ��
//	//*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//ָ������
//���ָ����������ָ������
//int main()
//{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int arr[10] = {0};
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	////parr���Ǵ��ָ�������  ָ������
	//int* parr[10] = { &a,&b,&c };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(parr[i]));
	//}
	/*int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };*/
	/*int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
//�ṹ��
//��
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1,p2;//p1��p2��ʹ��struct Peo�ṹ�����ʹ�����2������
////p1��p2������ȫ�ֽṹ�����
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};
struct St
{
	struct Peo p;
	int num;
	float f;
};
void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����.��Ա����
}
void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ��->��Ա����
}
int main()
{
	struct Peo p1 = {"����","15031266030","��",171};//�ṹ������Ĵ���
	struct St s = { {"����","12345678900","Ů",166},100,3.14f };
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	print1(p1);
	print2(&p1);
	return 0;
}