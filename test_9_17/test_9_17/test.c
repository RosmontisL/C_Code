#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������������
// �ֲ��������������Ǳ������ڵľֲ���Χ
// ȫ�ֱ���������������������
//��������������
//�ֲ������������������������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ����������������������

//int main()
//{
//	return 0;
//}

//���������ⲿ�ķ���
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


//1,���泣��
//2.const���εĳ�����
//3.define ����ı�ʶ������
//4.ö�ٳ���
//int main()
//{
//	//30;
//	//3.14;
//	//'w';//�ַ�
//	//"abc";//�ַ���
//	//const int a = 10;//const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
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


//ö�ٳ���
//enum Color
//{
//	RED,
//	GREEN,
//	BULE
//};
//
////�Ա�
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
	//int len=strlen("abc");//���ַ������ȵ�һ��������string length
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
//ת���ַ�


//%d--��ӡ����
//%c--��ӡ�ַ�
//%s--��ӡ�ַ���
//%f--��ӡfloat���͵�����
//%lf--��ӡdouble���͵�����
//%zu--��ӡsizeof�ķ���ֵ
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

