#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ָ�� - ָ������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//&������ - ȡ����������ĵ�ַ
//	int (*p)[5] = &arr;//����ָ��
//	//&������ - ȡ�����Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//
//	int (*pf)(int,int) = &Add;
//	int ret = (*pf)(2, 3);
//	//int ret = pf(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//typedef void(*pf_t)(int);//��void(*)(int)����������Ϊpf_t
//int main()
//{
//	//( *( void (*)() )0 )();
//	//һ�κ������ã����õ���0��Ϊ��ַ���ĺ���
//	//1.��0ǿ������ת��Ϊ���޲Σ�����������void�ĺ����ĵ�ַ
//	//2.����0��ַ�����������
//
//	void(* signal( int, void(*)(int) ) )(int);
//	pf_t signal(int, pf_t);
//
//	return 0;
//}
//����ָ�����;
//дһ��������
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
//����
//�ص�����
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������:>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do {
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�������\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}