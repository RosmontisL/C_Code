#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
typedef int SQDataType;
//leetcode给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置
//void reverse(int* left, int* right)
//{
//    while (left < right)
//    {
//        int tmp = *left;
//        *left = *right;
//        *right = tmp;
//        right--;
//        left++;
//    }
//}
//void rotate(int* nums, int numsSize, int k) {
//    int count = k % numsSize;
//    reverse(nums, nums + numsSize - count - 1);
//    reverse(nums + numsSize - count, nums + numsSize - 1);
//    reverse(nums, nums + numsSize - 1);
//}
typedef struct SeqList
{
	SQDataType a[MAX_SIZE];
	int size;
}SL;
//typedef struct SeqList SL;

//增删改查等接口函数
void SeqListInit(SL* ps)
{
	memset(ps->a, 0, sizeof(SQDataType) * MAX_SIZE);
	ps->size = 0;
}
void test()
{
	SL s1;
	SeqListInit(&s1);
}
int main()
{
	test();
	return 0;
}