#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������˶�������ʱ��ִ���������������������һ����������ִ�и������ĳ���

//int main()
//{
//	float a = 7 / 2.0;
//	int b = 7 % 2;//ȡģ
//	//ȡģ����������ֻ��������
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//0��ʾ��
//��0��ʾ��
//int main()
//{
//	/*int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//	//sizeof�ǵ�Ŀ������
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//&&�߼���--����
//    //||�߼���--����
//	//��Ŀ������
//	//�����������ò�����
//	return 0;
//}

//typedef ����������
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()
//{
//	static int a = 1;
//	//static���ξֲ�����ʱ���ֲ��������������򣬲����ٵġ�
//	//������static���ξֲ�����ʱ���ı��˱����Ĵ洢λ�ã��������ڱ䳤
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

//����ȫ�ֱ���
// static����ȫ�ֱ���ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ���������
// ����Դ�ļ��Ͳ�����ʹ�����ȫ�ֱ���	
//�����ⲿ����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//static���κ���
//���������ⲿ��������
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
////register--�Ĵ���
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3���ڼĴ�����
//	return 0;
//}

//define�����ʶ����
//#define NUM 100
////define�����
////���в���
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
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	//&a;//ȡ��ַ������
//	//printf("%p\n", &a);
//	int* p = &a;
//	//p����ָ����������ָ�루��ַ���ı���
//	//*˵��p��ָ�����
//	*p = 20;//�����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���,*p����pָ��Ķ���
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	/*int* p;
//	char* p2;*/
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�����������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}

//�ṹ��

//ѧ��
struct Stu
{   //��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//-> �ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct Stu s = { "zhangsan",20,"nan","123456789" };
	//�ṹ�����.��Ա��
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}