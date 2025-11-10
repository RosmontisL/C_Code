#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fwrite(&a, 4, 1, pf);//二进制形式写到文件
	fclose(pf);
	pf = NULL;
	return 0;
}
//文件读取过程中不能用feof函数的返回值直接用来判断文件是否结束
//而是用于当文件读取结束时，判断是读取失败结束，还是遇到文件尾结束
// feof遇到文件末尾返回非0，否则返回0  ferror遇到错误返回非0，否则返回0
//文本文件读取是否结束，判断返回值是否为EOF(fgetc),或者NULL(fgets)
//二进制文件的读取结束判断，判断返回值是否小于实际要读的个数
