#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* ptr = NULL;//��ָ��//ptr=pointer
//
//	return 0;
//}


//#include<stdio.h>
// void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;//��ʱ����
//
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//��ֵ����
//	//��ֵ���õ�ʱ�򣬺���ʵ�δ��ݸ��βκ��β���ʵ�ε�һ����ʱ�������β����Լ������Ŀռ�
//	//���Զ��βε��޸Ĳ���Ӱ��ʵ��
//	//
//	Swap(a, b);
//
//	/*c = a;
//	a = b;
//	b = c;*/
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//void swap(int* px, int* py)//////��ַ����
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("����ǰ:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//int max(int x, int y)//ֵ����
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a = 1000;
//	int b = 20;
//	int m = max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
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
//	char a[] = "hello world";
//	int len = my_strlen(a);
//	printf("%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);
//
//	printf("arr       = %p\n", arr);
//	printf("arr+1     = %p\n", arr+1);
//
//	printf("&arr      = %p\n", &arr);
//	printf("&arr+1    = %p\n", &arr+1);
//
//
//
//	//printf("%d\n", sizeof(arr));//40
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//[][][][][][][][][][]
//	//0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);
//	}
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
