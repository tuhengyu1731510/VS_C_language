#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int find = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			find = 1;
//			break;
//		}
//	}
//	if (find == 0)
//	{
//		printf("没有找到！");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
//二分查找仅能使用顺序的元素
	int left = 0;//左下标
	int right = sz - 1;//右下标
	int find = 0;//假设找不到
	while (left <= right)
	{
		int mid = left + (right-left)/2;//优解
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else {
			printf("找到了，下标是%d\n", mid);
			find = 1;
			break;
		}
	}
	if (find == 0)
	{
		printf("找不到\n");
	}
	return 0;
}