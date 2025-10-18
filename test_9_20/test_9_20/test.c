#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年");
//		printf("不能饮酒");
//	}
//	else
//	{
//		printf("已成年");
//	}
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("青少年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 40)
	//	printf("中年\n");
	//else if (age >= 40 && age < 60)
	//	printf("壮年\n");
	//else if (age >= 60 && age <= 100)
	//	printf("老年\n");
	//else
	//	printf("老不死\n");
//		return 0;
//}
//else与最近的if语句匹配
//
//int main()
//{
	//判断一个数是否为奇数
	/*int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
		printf("奇数");
	else
		printf("NO");*/
	//求1到100的奇数
	/*int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d\n", a);
		a++;
	}
	return 0;
}*/

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误");
//		break;
//	}
//	return 0;
//}

//while循环
// break用于用于永久的终止循环
//打印1~10数字
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//continue跳过本次循环，进行下次循环
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
	//int ch = getchar();//getchar获取字符
	//printf("%c\n", ch);
	//putchar(ch);//putchar打印字符
	//int ch = 0;
	//while ((ch=getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
//	char ch = '\n';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' && ch>'9')
//			continue;
//		putchar(ch);
//	}//只打印数字字符
//	return 0;
//}

int main()
{
	double r = 0.0;
	double v = 0.0;
	scanf("%lf", &r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("%.3lf\n", v);
	return 0;
}
