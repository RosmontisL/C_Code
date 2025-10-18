#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//除号两端都是整数时，执行整数除法，如果两端有一个浮点数就执行浮点数的除法

//int main()
//{
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模
//	//取模操作符两端只能是整数
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//0表示假
//非0表示真
//int main()
//{
//	/*int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//	//sizeof是单目操作符
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//&&逻辑与--并且
//    //||逻辑或--或者
//	//三目操作符
//	//（）函数调用操作符
//	return 0;
//}

//typedef 类型重命名
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()
//{
//	static int a = 1;
//	//static修饰局部变量时，局部变量出了作用域，不销毁的。
//	//本质上static修饰局部变量时，改变了变量的存储位置，生命周期变长
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//修饰全局变量
// static修饰全局变量时，这个全局变量的外部链接属性就变成了内部链接属性
// 其他源文件就不能再使用这个全局变量	
//声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//static修饰函数
//函数具有外部连接属性
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
////register--寄存器
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3放在寄存器中
//	return 0;
//}

//define定义标识常量
//#define NUM 100
////define定义宏
////宏有参数
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	//&a;//取地址操作符
//	//printf("%p\n", &a);
//	int* p = &a;
//	//p就是指针变量，存放指针（地址）的变量
//	//*说明p是指针变量
//	*p = 20;//解引用操作符，意思是通过p中存放的地址，找到p所指向的对象,*p就是p指向的对象
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	/*int* p;
//	char* p2;*/
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候；需要多大空间
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}

//结构体

//学生
struct Stu
{   //成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//-> 结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct Stu s = { "zhangsan",20,"nan","123456789" };
	//结构体对象.成员名
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}