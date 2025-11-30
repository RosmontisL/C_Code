#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//时间复杂度是一个估算，是看表达式中影响最大的那一项,使用大O的渐进表示法
//算法存在最好平均最坏情况时，做最坏打算
//常见时间复杂度O(N^2),O(N),O(logN),O(1)
//空间复杂度也是使用大O的渐进表示法，计算变量的个数
//时间是累计的，空间是不累计的
int fac(int N)//阶乘的时间复杂度为O(N)，空间复杂度为O(N)
{//递归调用了N层，每次调用建立一个栈帧，每个栈帧使用常数个空间->O(1)
	return N < 2 ? N : fac(N - 1) * N;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}
//leetcode消失的数字
int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    int max = 0;
    for (i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    int count = (numsSize + 1) * numsSize / 2;
    return count - sum;
}