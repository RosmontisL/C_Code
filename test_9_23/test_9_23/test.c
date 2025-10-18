#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	again://不能跨函数使用
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//关机程序
#include<stdlib.h>
//关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在60秒内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//猜数字版本关机程序
#include<time.h>
#include<string.h>
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请注意，你的电脑在60秒内关机，如果猜对数字(1~100)，就取消关机\n");
		game();		
	}
return 0;
}
