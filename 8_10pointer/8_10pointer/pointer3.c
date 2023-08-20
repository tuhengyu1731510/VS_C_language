#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* ptr = NULL;//空指针//ptr=pointer
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
//	int c = 0;//临时变量
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	//传值调用
//	//传值调用的时候，函数实参传递给形参后，形参是实参的一份临时拷贝，形参有自己独立的空间
//	//所以对形参的修改不能影响实参
//	//
//	Swap(a, b);
//
//	/*c = a;
//	a = b;
//	b = c;*/
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//void swap(int* px, int* py)//////地址传递
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
//	printf("交换前:a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换前:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//int max(int x, int y)//值传递
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
//	//输入
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
