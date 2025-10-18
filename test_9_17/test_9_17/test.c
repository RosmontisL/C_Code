#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//变量的作用域
// 局部变量的作用域是变量所在的局部范围
// 全局变量的作用域是整个工程
//变量的生命周期
//局部变量：进入作用域生命周期开始，出作用域生命周期结束
//全局变量：整个程序的生命周期

//int main()
//{
//	return 0;
//}

//声明来自外部的符号
//extern int a;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//1,字面常量
//2.const修饰的常变量
//3.define 定义的标识符常量
//4.枚举常量
//int main()
//{
//	//30;
//	//3.14;
//	//'w';//字符
//	//"abc";//字符串
//	//const int a = 10;//const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
//	//a = 20;
//	//printf("%d\n", a);//20
//
//	return 0;
//}

//#define MAX 100	
//#define STR "abcdef"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//
//}


//枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BULE
//};
//
////性别
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//int len=strlen("abc");//求字符串长度的一个函数，string length
	//printf("%d\n", len);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}

//int main()
//{
//	printf("abc\n");
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//	return 0;
//}
//转义字符


//%d--打印整型
//%c--打印字符
//%s--打印字符串
//%f--打印float类型的数据
//%lf--打印double类型的数据
//%zu--打印sizeof的返回值
//
//int main()
//{
//	/*printf("%c\n", 'w');
//	printf("\"");
//	printf("abcd\\0ef");*/
//	/*printf("%c\n", '\130');
//	printf("%c\n", '\x63');*/
//	//printf("%d\n", strlen("qwer t"));
//	/*printf("%d\n", strlen("c:\test\628\test.c"));*/
//
//	return 0;
//}
//#include<stdio.h>
//int get_max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	scanf("%d %d", &num1, &num2);
//	int max = get_max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

