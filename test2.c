// #include <stdio.h>
// int fib(int n)
// {
//     if(n<=2)
//         return 1;
//     else
//         return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=fib(n);
//     printf("%d\n",ret);
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// double Pow(int n,int k)
// {
//     if(k==0)
//         return 1;
//     else if(k>0)
//         return n*Pow(n,--k);
//     else
//         return 1.0/(n*Pow(n,-k));

// }
// int main()
// {
//     int n=0;
//     int k=0;
//     scanf("%d %d",&n,&k);
//     double ret = Pow(n,k);
//     printf("%lf",ret);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//  int i = 10;
//  i = i-- - --i * ( i = -3 ) * i++ + ++i;
//  printf("i = %d\n", i);
//  return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int x=12;
//     int y=5;
//     int c=x&y;
//     printf("%d",c);
//     return 0;
// }

// #define _CRT_SECURE_NO_WARNINGS

// #include<stdio.h>
// #include<stdlib.h>

// int count_one_bit(int m)
// {
// 	int count = 0;
// 	// 当 m == 0 时停止循环
// 	while (m)
// 	{
// 		// 得到参数二进制序列中的一个 1 
// 		if (m % 2 == 1)
// 		{
// 			count++;
// 		}
// 		// 去掉得到的这个 1 
// 		m /= 2;
// 	}
// 	// 返回计数器 count 的值
// 	return count;
// }
// int main()
// {
// 	int num = 0;
// 	printf("请输入一个参数：");
// 	scanf("%d", &num);
// 	int count = count_one_bit(num);
// 	// 输出参数二进制中 1 的个数
// 	printf("%d个1\n", count);
// 	system("pause");
// 	return 0;
// }


// #include <stdio.h>
// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 	scanf("%d %d", &a, &b);
// 	printf("交换前：a=%d b=%d\n", a, b);
// 	a = a + b;  // a+b之和赋给a
// 	b = a - b; //  和-b为a赋给b 
// 	a = a - b; //  和-b（b是a的值）为b赋给a 
// 	printf("交换后：a=%d b=%d\n", a, b);
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	for(int i=1;i<=9;i++)
// 	{
// 		for(int j=1;j<=i;j++)//
// 		{
// 			printf("%d*%d=%2d ",j,i,i*j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


// #include <stdio.h>
// int main()
// {
// 	int arr[10]={0};
// 	int i=0;
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	int max=arr[0];
// 	for(int i=1;i<10;i++)
// 	if(arr[i]>max)
// 	{
// 		max=arr[i];
// 	}
// 	printf("%d",max);

// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	//编写1-100的所有整数中出现多少个9
// 	int a=0;
// 	int b=0;
// 	int count =0;
// 	for(int i=1;i<=100;i++)
// 	{
// 		if(i%10==9)
// 		{
// 			count++;
// 		}
// 		if(i/10==9)
// 		{
// 			count++;
// 		}
// 	}
// 	printf("%d\n",count);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// int arr[10]={0};
// 	int sum=0;
// 	for(int i=0;i<10;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 		sum =sum + arr[i];
// 	}
// 	float ave=0;
// 	ave=sum*1.0/10;
// 	printf("%f\n",ave);
// 	return 0;
// }

// #include<stdio.h>
// int main() 
// {
// 	int arr[10],i,j,temp;
// 	printf("输入10个数字:\n");
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	for(j=0;j<9;j++)
// 	{
// 		for(i=0;i<9-j;i++)
// 		{
// 			if(arr[i]>arr[i+1])
// 			{
// 				temp=arr[i];
// 				arr[i]=arr[i+1];
// 				arr[i+1]=temp;
// 			}
// 		}
// 	}
// 	printf("从小到大排序后:\n");
// 	for(i=0;i<10;i++){
// 	printf("%d ",arr[i]);
// 	}
// 	return 0;
// }

#include<stdio.h>
int main()
{
	int arr[10],i,j,t;
	printf("请输入十个数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
		if(arr[i]>arr[i+1])
		{
			t = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;
		}
	}
	printf("从小到大的排序顺序是：");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}