#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数指针 - 指向函数的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//&数组名 - 取出的是数组的地址
//	int (*p)[5] = &arr;//数组指针
//	//&函数名 - 取出的是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//对于函数来说，&函数名和函数名都是函数的地址
//
//	int (*pf)(int,int) = &Add;
//	int ret = (*pf)(2, 3);
//	//int ret = pf(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//typedef void(*pf_t)(int);//把void(*)(int)类型重命名为pf_t
//int main()
//{
//	//( *( void (*)() )0 )();
//	//一次函数调用，调用的是0作为地址处的函数
//	//1.把0强制类型转换为：无参，返回类型是void的函数的地址
//	//2.调用0地址处的这个函数
//
//	void(* signal( int, void(*)(int) ) )(int);
//	pf_t signal(int, pf_t);
//
//	return 0;
//}
//函数指针的用途
//写一个计算器
void menu()
{
	printf("**************************\n");
	printf("*******1.add  2.sub*******\n");
	printf("*******3.mul  4.div*******\n");
	printf("*******   0.exit   *******\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//计算
//回调函数
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}