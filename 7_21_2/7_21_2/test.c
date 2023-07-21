//////#include<stdio.h>
//////#include<string.h>
//////int main()
//////{
//////	int len = strlen("abc");//abc\0
//////	printf("%d\n", len);
//////}
//////#include<stdio.h>
//////#include<string.h>
//////int main()
//////{
//////	int len = strlen("c:\test\class111\123.c"); //\t和\123是转义字符各作为一个//int是C语言的一种数据类型
//////		printf("%d\n", len);//17
//////}
////#include<stdio.h>
////int main()
////{
////	printf("%d\n", sizeof(char));
////	printf("%d\n", sizeof(short));
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof(long));
////	printf("%d\n", sizeof(long long));
////	printf("%d\n", sizeof(float));
////	printf("%d\n", sizeof(double));
////	printf("%d\n", sizeof(long int));
////	printf("%d\n", sizeof(short int));
////	printf("%d\n", sizeof(unsigned char));
////	printf("%d\n", sizeof(unsigned short));
////	printf("%d\n", sizeof(unsigned int));
////	printf("%d\n", sizeof(unsigned long));
////	printf("%d\n", sizeof(unsigned long long));
////	return 0;
////}
////#include<stdio.h>
////#include<stdbool.h>
////int main()
////{
////	_Bool flag = true;
////	if (flag)
////	{
////		printf("Igt+ like C\n");
////	}
////	return 0;
////}
//#include<stdio.h>
//#include<stdbool.h>
//int main()
//{
//	_Bool flag = false;
//	if (flag)
//	{
//		printf("I like C\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	signed int temperture = 20;
//	signed int temperture = -20;
//	signed int temperture = -20;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//		int b = 10;
//		printf("%d\n", b);
//}
//#include<stdio.h>
//int main()
//{
//	float a = 7.0/2;//想算出小数，操作数必须有一个是小数————7.0/2为双目运算符
//	printf("%0.9f", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 0;
//	 b = a++;
//	printf("%d", b);
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 7;
//    int b = 2;
//    float c = 2.0f;
//    printf("%d\n", 3);
//    printf("%f\n", a / c);
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d\n", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int x = 0;
//    scanf_s("%d", &x);
//    if (x >= 140)
//    {
//        printf("Genius");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf_s("%d %d", &a, &b);
//    if (a == b)
//    {
//        printf("%d=%d", a, b);
//    }
//    if (a > b)
//    {
//        printf("%d>%d", a, b);
//    }
//    if (a < b)
//    {
//        printf("%d<%d", a, b);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	_Bool flag = false;
//	if (flag)
//		printf("nb\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    while (scanf_s("%d%d", &a, &b) != EOF)
//    {
//        {
//            if (a == b)
//                {
//                   printf("%d=%d", a, b);
//                }
//                 if (a > b)
//                  {
//                       printf("%d>%d", a, b);
//                  }
//                    if (a < b)
//                  {
//                        printf("%d<%d", a, b);
//                   }
//        }
//    }
//    return 0;
//}
#include <stdio.h>
int main()
{
    int M = 0;
    scanf_s("%d\n", &M);
    if ((M / 5) == 0)
    {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}