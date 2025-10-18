#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//	   // mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//编写代码，演示多个字符从两端移动，向中间汇聚
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//int right=sizeof(arr1)/sizeof(arr[0])-2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//编写代码实现，模拟用户登录情景，并且只能登录三次
//比较两个字符串是否相等，不能用==，应该用一个库函数:strcmp
//如果返回值是0，表示两个字符串相等
#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码为abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入均错误，退出程序\n");
//	}
//	return 0;
//}

//猜数字游戏
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("*********1.play*********\n");
	printf("*********0.exit*********\n");
	printf("************************\n");
}
//0~RAND_MAX(32767)
void game()
{
	int guess = 0;
	//1.生成随机数
	int ret = rand()%100+1;//生成随机数的函数1~100
	/*printf("%d\n", ret);*/
	//2.猜数字
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
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}