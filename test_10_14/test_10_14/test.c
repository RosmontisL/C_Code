#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//Çó×Ö·û´®³¤¶È
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}