#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	/*printf("%zu\n",sizeof(char));
//	printf("%zu\n",sizeof(short));
//	printf("%zu\n",sizeof(int));
//	printf("%zu\n",sizeof(long));
//	printf("%zu\n",sizeof(long long));
//	printf("%zu\n",sizeof(float));
//	printf("%zu\n",sizeof(double));
//	return 0;
//}*/
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//
//}
//局部变量-{}内部定义的变量
//全局变量-{}外部定义的变量
//int b = 20;//全局变量
//int main()
//{
//	short  age = 20;//年龄
//	int high = 180;//身高
//	float weight = 53.5;//体重
//	int a = 10;//局部变量   
//	return 0;
//
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//当全局变量和局部变量名字相同时，局部优先
//	return 0;
//}

//写一个代码，计算2个整数的和
//scanf 是一个输入函数
//printf 是一个输出函数
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化
	//输入两个整数
	scanf("%d %d", &num1, &num2);
	//求和
	int sum = num1 + num2;
	//输出
	printf("%d\n", sum);
	return 0;
}
