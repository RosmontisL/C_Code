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
//		printf("δ����");
//		printf("��������");
//	}
//	else
//	{
//		printf("�ѳ���");
//	}
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("������\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 40)
	//	printf("����\n");
	//else if (age >= 40 && age < 60)
	//	printf("׳��\n");
	//else if (age >= 60 && age <= 100)
	//	printf("����\n");
	//else
	//	printf("�ϲ���\n");
//		return 0;
//}
//else�������if���ƥ��
//
//int main()
//{
	//�ж�һ�����Ƿ�Ϊ����
	/*int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
		printf("����");
	else
		printf("NO");*/
	//��1��100������
	/*int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d\n", a);
		a++;
	}
	return 0;
}*/

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
//		printf("ѡ�����");
//		break;
//	}
//	return 0;
//}

//whileѭ��
// break�����������õ���ֹѭ��
//��ӡ1~10����
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//continue��������ѭ���������´�ѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
	//int ch = getchar();//getchar��ȡ�ַ�
	//printf("%c\n", ch);
	//putchar(ch);//putchar��ӡ�ַ�
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
//	}//ֻ��ӡ�����ַ�
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
