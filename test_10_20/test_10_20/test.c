#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//函数指针数组
//把函数指针放在数组里，就是函数指针数组
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
//	int (*pf)(int,int) = Add;//pf是函数指针
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr就是函数指针的数组
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
//	//函数指针的数组
//	//转移表
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x,y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	//函数指针数组
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//指向函数指针数组的指针
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
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组是排好序的
		int j = 0;
		//一趟冒泡排序的过程
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
//快速排序
//qsort - 这个函数可以排序任意类型的数据
//
//void qsort(void* base,//要排序的数据的起始位置
//	       size_t num,//待排序的数据元素个数
//	       size_t width,//待排序的数据元素的大小（单位字节）
//	       int (*cmp)(const void* e1, const void* e2)//函数指针 - 比较函数
//);
int cmp_int(const void* e1, const void* e2)
{
	//升序
	return (*(int*)e1 - *(int*)e2);
	//降序
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
	//测试使用qsort来排序结构数据
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
//	void* pv = &a;//void* 是无具体类型的指针，可以接受任意类型的地址
//	//不能解引用操作，也不能+-整数
//	return 0;
//}