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
//			printf("�ҵ��ˣ��±���%d\n", i);
//			find = 1;
//			break;
//		}
//	}
//	if (find == 0)
//	{
//		printf("û���ҵ���");
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
//���ֲ��ҽ���ʹ��˳���Ԫ��
	int left = 0;//���±�
	int right = sz - 1;//���±�
	int find = 0;//�����Ҳ���
	while (left <= right)
	{
		int mid = left + (right-left)/2;//�Ž�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else {
			printf("�ҵ��ˣ��±���%d\n", mid);
			find = 1;
			break;
		}
	}
	if (find == 0)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}