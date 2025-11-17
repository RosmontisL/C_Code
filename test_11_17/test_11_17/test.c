#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//写一个宏，将一个整数的二进制位的奇数位和偶数位交换
//#define SWAP_BIT(n) ((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	SWAP_BIT(n);
//	printf("%d\n", SWAP_BIT(n));
//	return 0;
//}
//int main()
//{
//	unsigned char i = 7;// -2 10000010 - 11111101 - 11111110 - 254 - 85   
//	int j = 0;          //-1  10000001 - 11111110 - 11111111 - 255 - 85
//	for (; i > 0; i -= 3)
//	{
//		++j;//3+85+85=173
//	}
//	printf("%d\n", j);
//	return 0;
//}
//flag&`2  //0010 - 1101
//int f(int x)
//{
//	return ((x > 2) ? x * f(x - 1) : 3);
//}
//int main()
//{
//	/*int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);*/
//	int i;
//	i = f(f(2));
//	printf("%d\n", i);
//	return 0;
//}
//int fun(int a)//21 
//{//1 - 00000001 - 00100000 - 32-1=31
//	a ^= (1 << 5) - 1;//21^31   00010101 - 21 
//	return a;//00001010 - 10    00011111 - 31  
//}
//int main()
//{
//	int ret=fun(21);
//	printf("%d\n", ret);//10
//	return 0;
//}
//现在给你一个数N求最少需要多少步可以变为Fibonacci数
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a = 0;
//    int b = 1;
//    int c = a + b;
//    int ret = 0;
//    while (1)
//    {
//        if (n == b)
//        {
//            printf("0\n");
//            break;
//        }
//        else if (n < b)
//        {
//            ret = (b - n) < (n - a) ? (b - n) : (n - a);
//            printf("%d\n", ret);
//            break;
//        }
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return 0;
//}
//请实现一个函数，将一个字符串s中的每个空格替换成“%20”
#include<string.h>
#include<assert.h>
#include<stdlib.h>
char* replace(char* str, int len)
{
	assert(str);
	char* cur = str;
	int space_count = 0;
	while (*cur)
	{
		if (*cur == ' ')
		{
			space_count++;
		}
		cur++;
	}
	int end1 = len - 1;
	int end2 = len + space_count * 2 - 1;
	while (end1 != end2)
	{
		if (str[end1] != ' ')
		{
			str[end2--] = str[end1--];
		}
		else
		{
			end1--;
			str[end2--] = '0';
			str[end2--] = '2';
			str[end2--] = '%';
		}
	}
	return str;
}
int main()
{
	char str[30] = "We Are Happy.";
	int len=strlen(str);
	char* ret=replace(str, len);
    printf("%s\n", ret);
	return 0;
}