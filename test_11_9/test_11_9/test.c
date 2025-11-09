#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//fseek - 定位文件指针
//ftell - 返回文件指针相对于起始位置的偏移量 
//rewind - 让文件指针回到文件的起始位置
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//定位文件指针
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);//c
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//3

	//fseek(pf, 2, SEEK_CUR);
	fseek(pf, -1, SEEK_END);
	ch = fgetc(pf);//f
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//6

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}