#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	again://���ܿ纯��ʹ��
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//�ػ�����
#include<stdlib.h>
//�ػ�����
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ�����60���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�����ְ汾�ػ�����
#include<time.h>
#include<string.h>
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			system("shutdown -a");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����60���ڹػ�������¶�����(1~100)����ȡ���ػ�\n");
		game();		
	}
return 0;
}
