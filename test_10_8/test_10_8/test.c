#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
//2.ƽʱ������˵��ָ�룬ͨ��ָ����ָ�����������������ڴ��ַ�ı���
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa��һ��ָ�������������ŵ�ַ
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//	return 0;
//}
//ָ�����͵�����
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a;
//	*pc = 0;
//	//ָ�����;�������ָ���ڱ������õ�ʱ����ʼ����ֽ�
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//	printf("pc=%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//	//ָ������;�����ָ��+-1������ʱ�����������ֽ�
//	//������ָ��Ĳ���
//	//100 - 10����
//	//0x64 - 16
//	//100 0100 - 2
//	//144 - 8
//	return 0;
//}
//int main()
//{
//	//int a = 0;
//	//int* pi = &a;
//	//float* pf = &a;
//	////int* ��float* ����ͨ��
//	//*pi = 100;
//	//*pf = 100.0;
//	return 0;
//}
//Ұָ�����
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
	//1.û�г�ʼ��
	//int* p;
	////pû�г�ʼ��������ζ��û����ȷ��ָ��
	////һ���ֲ���������ʼ�����ŵ������ֵ��0xcccccccc
	//*p = 10;//�Ƿ������ڴ��ˣ������p����Ҳָ��
	//2.����Խ�����
	//int arr[10] = { 0 };
	//int* p = arr;//&arr[0]
	//int i = 0;
	//for (i = 0; i <= 10; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//3.ָ��ָ��Ŀռ��ͷ�
	/*int* p = test();*/
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//NULL -> 0 
//	int* p2 = NULL;
//	if (p2 != NULL)
//	{
//		*p2 = 100;
//	}
//	return 0;
//}
//ָ�������
//int main()
//{
//	//int arr[10] = { 0 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////�����±�д��
//	///*for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}*/
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	/**p = 1;
//	//	p++;*/
//	//	*(p + i) = 1;
//	//}
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ��-ָ��õ�����ָ���ָ��֮��Ԫ�صĸ���
//	//ָ��ͬһ��ռ��2��ָ��������
//	return 0;
//}
#include<string.h>
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
	return 0;
}