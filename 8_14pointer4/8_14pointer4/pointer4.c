#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//p��һ��ָ��
//	//a�����ͱ�����ռ��4���ֽڵĿռ䣬a�����Լ��ĵ�ַ��&a�õ��ľ���a��ռ4���ֽڵĵ�һ���ֽڵĵ�ַ
//	//p��ָ�������ռ��4/8���ֽڵĿռ䣬pҲ�����Լ��ĵ�ַ��&p���õ���p�ĵ�ַ
//	int* * pp = &p;
//
//	printf("%d\n", **pp);//10
//	//pp Ҳ��ָ�������pp�Ƕ���ָ�����
//	//int*** ppp = &pp;//ppp������ָ��
//	//....
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//
//	int* parr[5] = {&a, &b, &c, &d, &e};
//	//              0   1   2   3   4
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = {arr1, arr2, arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			//printf("%d ", *(*(parr + i) + j));
//			//parr[i] == *(parr+i)
//			//parr[i][j] == *(*(parr+i)+j)
//			//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;//pc�����ַ�ָ�����
//	//�ַ�ָ�������������ŵ�ַ��
//
//	const char* p = "abcdefghi";//���ǽ�abcdewfghi\0�ַ�����ŵ�p��,���ǽ����ַ�a�ĵ�ַ�洢��p��
//	//"abcdefghi" ��һ�������ַ������ǲ��ܱ��޸ĵ�
//	//[abcdefghi\0]
//	//b = 2+3;
//	//���ʽ����2�����ԣ�ֵ���ԣ���������
//	//2+3 ֵ��5
//	//2+3 int
//	//printf("%c\n", *p);
//	//*p = 'q';//err
//	printf("%s\n", p);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";//������
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)//��һ��
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	arr;//������Ԫ�صĵ�ַ - int *
//	&arr;//����ĵ�ַ     - int (*)[10]
//	int (*p)[10] = &arr;
//	int* p2 = &arr;
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int(*p)[9] = &arr;
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void test(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < c; j++)
//	{
//		printf("%d ", *(*(arr + i) + j));
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6} ,{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<windows.h>
//
//int main()
//{
//	int len = 0;
//	char* p = "abcdef";
//	len = my_strlen(p);
//	printf("len=%d\n", len);
//	system("pause");
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//#include<stdio.h>
//char Left_hand(char* arr, int k)//�����ַ���
//{
//	int right = 0;
//	int i = 0;
//	int len = strlen(arr);//����ַ�������
//	char ret;
//	while (k)
//	{
//		ret = arr[0];
//		for (i = 0; i < len; i++)
//		{
//			if (3 == i)
//			{
//				arr[i] = ret;
//			}
//			if (i <= 2)
//			{
//				arr[i] = arr[i + 1];
//			}
//		}
//		k--;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	Left_hand(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);//����һ���ַ�
	int i, n;
	n = strlen(str);
	for (i = n - 1; i >= 0; i--)//����
		printf("%c", str[i]);//Ԫ���±�
	return 0;
}
