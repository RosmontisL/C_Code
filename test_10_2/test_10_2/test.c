#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串逆序（递归实现）
//int main()
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr)-1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//方法一
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* string)
//{
//	char temp = *string;
//	int len = my_strlen(string);
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (my_strlen(string + 1) >= 2)
//	{
//		reverse(string + 1);
//	}
//	*(string + len - 1) = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//方法二
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char arr[], int left, int right)
//{
//	
//	if (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		reverse(arr, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//	{
//		return DigitSum(n/10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum=DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//递归实现n的k次方
//double Pow(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if(k=0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=Pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}

//计算斐波那契数
//1 1 2 3 5 8 13 
//int fac(int n)
//{
//	if (n<3)
//	{
//		return 1;
//	}
//	return fac(n - 1) + fac(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换(数组一样大)
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
 
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int left, int right)
{
	if (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		return reverse(arr, left + 1, right - 1);
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	print(arr, sz);
	reverse(arr, left, right);
	print(arr, sz);
	init(arr,sz);
	print(arr,sz);
	return 0;
}