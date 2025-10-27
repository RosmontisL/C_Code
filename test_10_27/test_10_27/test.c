#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//杨氏矩阵中查找某个数字是否存在，时间复杂度小于O(N)
//struct point
//{
//	int x;
//	int y;
//};
//struct point Find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct point p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	struct point ret=Find_num(arr, 3, 3, k);
//	printf("%d %d\n",ret.x,ret.y);
//	return 0;
//}

//int Find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int a = 3;
//	int b = 3;
//	int ret = Find_num(arr, &a, &b, k);
//	if (ret == 1)
//		printf("%d %d\n", a, b);
//	else
//		printf("找不到\n");
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
#include<string.h>
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = len;
//	while (i)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//	
//		if (strcmp(arr2, arr1) == 0)
//			return 1;
//		i--;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}

//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}
#include<stdlib.h>
//sqort练习
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//int main()
//{
//	int arr1[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_int);
//	char arr2[] = "fedcba";
//	int len = strlen(arr2);
//	qsort(arr2, len, sizeof(arr2[0]), cmp_char);
//	printf("%s\n", arr2);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_qsort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width,(char*)base+(j+1)*width)>0)
			{ 
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_char(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test2()
{
	char arr[] = "cdabef";
	int len = strlen(arr);
	bubble_qsort(arr, len, sizeof(arr[0]), cmp_char);
	printf("%s\n", arr);
}
void test3()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",20},{"wangwu",18} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}