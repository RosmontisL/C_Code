#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
	/*int a = 0;*/
	//~是按二进制位取反
	//00000000000000000000000000000000 - 补码
	//11111111111111111111111111111111 - ~a
	//11111111111111111111111111111110
	//10000000000000000000000000000001
	// -1
	//int a = 3;
	//00000000000000000000000000000011
	//11111111111111111111111111111100
	//11111111111111111111111111111011
	//10000000000000000000000000000100  -4
	/*printf("%d\n", ~a);*/
//	int a = 13;
//	a |= (1 << 4);
//	printf("%d\n", a);//29
//	a &= (~(1 << 4));
//	printf("%d\n", a);//13
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000001101
//	return 0;
//}
//间接访问操作符
//int main()
//{
//	/*int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);*/
//	/*srand((unsigned int)time(NULL));
//	int a = (int)3.14;
//	printf("%d\n", a);*/
//	return 0;
//}
//&& 左边为假，右边不计算
//|| 左边为真，右边不计算
//int main()
//{
	//int a = 3;
	//int b = 5;
	////int c = a && b;//并且
	//int c = a || b;//或者
	//printf("%d\n", c);
	/*int a = 3;
	int b = 0;
	int max = (a > b ? a : b);
	if (a > 5)
		b = 3;
	else
		b = -3;
	b = (a > 5 ? 3 : -3);*/
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	////arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
//	////arr是数组首元素地址
//	////arr+7就是跳过7个元素，指向了第8个元素
//	////*(arr+7)就是第8个元素
//	//arr[7] = 8;
//	//7[arr] = 9;
//	////[] arr 7
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//()是函数调用操作符 
//	return 0;
//}
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	double score;

};
void set_stu(struct Stu* ps)
{
	/*strcpy((*ps).name, "zhangsan");
	(*ps).age = 20;
	(*ps).score = 100.0;*/
	//结构体指针->成员
	//结构体对象.成员
	strcpy(ps->name, "zhangsan");
	ps->age = 20;
	ps->score = 100.0;
}
void print_stu(struct Stu ss)
{
	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
}
int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(s);
	return 0;
}