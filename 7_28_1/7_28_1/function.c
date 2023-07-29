#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double r = sqrt(16.0);//开平方
//	double x = pow(7.0, 3.0);//幂函数
//	printf("%lf\n", r);
//	printf("%lf\n", x);
//	return 0;
//}

//#include<stdio.h>
//		//int Add(int x, int y)
//		//{
//		//	int z = 0;
//		//	z = x + y;
//		//	return z;//返回z的值
//		//}
//int Add(int x, int y)//优解//x,y形式上的参数
//{
//	return (x+y);//返回x+y的值
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);//a,b是真是传递给Add的参数，是实际参参
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//void set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	//先写一个函数，将arr中的内容全部设置为-1
//	set_arr(arr, sz);
//	//在写一个函数，将他们打印出来
//	print_arr(arr, sz);
//	return 0;
//}

#include<stdio.h>
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int get_days_of_month(int y, int m)
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
				//   0  1  2  3  4  5  6  7  8  9  10 11  12
	int d = days[m];
	if (is_leap_year(y) && m == 2)
	{
		d += 1;
	}
	return d;

}
int main()
{
	int y = 0;
	int m = 0;
	scanf("%d %d", &y, &m);
	int d = get_days_of_month(y, m);
	printf("%d\n", d);
	return 0;

	return 0;
}