#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0))
//		printf("是润年\n","year");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)//必须为整形表达式
//	{
//	case 0://入口
//		printf("余数是0\n");
//		break;//跳出来结束
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//		return 0;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期2");
//		break;
//	case 3:
//		printf("星期3");
//		break;
//	case 4:
//		printf("星期4");
//		break;
//	case 5:
//		printf("星期5");
//		break;
//	case 6:
//		printf("星期6");
//		break;
//	case 7:
//		printf("星期7");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("请输入1-7的数字");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf(" %d", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d ", n%10);
//		n = n / 10;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)//判断i是否为3的倍数
//		{
//			sum += i;
//		}
//	}
//	printf("总和为%d",sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		i = i / 10;//每执行一次去掉一位
//		count++;//统计位数  1234——>4
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{//判断i是否为素数（试除法）（使用2——————i-1）之间的数字试除i
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= i - 1; j++)//使用2——————i-1
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{//判断i是否为素数（试除法）（使用2——————i-1）之间的数字试除i
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)//使用2——————i-1
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((a + b > c) && (b + c > a) && (a + c > b))
//    {
//        if ((a == b || b == c || a == c))
//        {
//            printf("Isosceles triangle!");
//        }
//        else if ((a + b > c) && (b + c > a) && (a + c > b))
//        {
//            printf("Ordinary triangle!");
//        }
//        else if ((a == b )&&( b == c) ||( a == c))
//        {
//            printf("Equilateral triangle!");
//        }
//
//
//        else 
//        {
//            printf("Not a triangle!");
//        }
//
//    }
//    return 0;
//
//}
//#include <stdio.h>
//int main() 
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) 
//    { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if ((a + b > c) && (b + c > a) && (a + c > b))
//        {
//            if ((a == b) && (b == c))//等边
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c||a ==c)//等腰
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//            {
//                printf("Not a triangle!\n");
//            }
//
//        
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//			printf("%d*%d\n", i, j);
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int i, j;
//    for (i = 1; i <= 9; i++) {
//        for (j = 1; j <= 9; j++) {
//            if (j < i)
//                //打印八个空格，去掉空格就是左上三角形 
//                printf("        ");
//            else
//                printf("%d*%d=%2d  ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double sum1 = 0.0, sum2 = 0.0, sum = 0.0;
//	for (int i = 1; i < 100; i += 2)//奇数分母
//	{
//		sum1 = sum1 + (1.0) / i;
//	}
//	for (int i = 2; i < 101; i += 2)//偶数分母
//	{
//		sum2 = sum2 + (1.0) / i;
//	}
//	sum = sum1 - sum2;
//	printf("%lf\n", sum);
//}
#include <stdio.h>
int main() 
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
	}
	printf("%d", count+9);
	return 0;
}