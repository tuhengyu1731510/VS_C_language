#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0))
//		printf("������\n","year");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)//����Ϊ���α��ʽ
//	{
//	case 0://���
//		printf("������0\n");
//		break;//����������
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("����2");
//		break;
//	case 3:
//		printf("����3");
//		break;
//	case 4:
//		printf("����4");
//		break;
//	case 5:
//		printf("����5");
//		break;
//	case 6:
//		printf("����6");
//		break;
//	case 7:
//		printf("����7");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("������1-7������");
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
//		if (i % 3 == 0)//�ж�i�Ƿ�Ϊ3�ı���
//		{
//			sum += i;
//		}
//	}
//	printf("�ܺ�Ϊ%d",sum);
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
//		i = i / 10;//ÿִ��һ��ȥ��һλ
//		count++;//ͳ��λ��  1234����>4
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
//	{//�ж�i�Ƿ�Ϊ�������Գ�������ʹ��2������������i-1��֮��������Գ�i
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j <= i - 1; j++)//ʹ��2������������i-1
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
//	{//�ж�i�Ƿ�Ϊ�������Գ�������ʹ��2������������i-1��֮��������Գ�i
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j <= sqrt(i); j++)//ʹ��2������������i-1
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
//    { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        if ((a + b > c) && (b + c > a) && (a + c > b))
//        {
//            if ((a == b) && (b == c))//�ȱ�
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c||a ==c)//����
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
//                //��ӡ�˸��ո�ȥ���ո�������������� 
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
//	for (int i = 1; i < 100; i += 2)//������ĸ
//	{
//		sum1 = sum1 + (1.0) / i;
//	}
//	for (int i = 2; i < 101; i += 2)//ż����ĸ
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