////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	int len = strlen("abc");//abc\0
////	printf("%d\n", len);
////}
////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	int len = strlen("c:\test\class111\123.c"); //\t��\123��ת���ַ�����Ϊһ��//int��C���Ե�һ����������
////		printf("%d\n", len);//17
////}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long int));
//	printf("%d\n", sizeof(short int));
//	printf("%d\n", sizeof(unsigned char));
//	printf("%d\n", sizeof(unsigned short));
//	printf("%d\n", sizeof(unsigned int));
//	printf("%d\n", sizeof(unsigned long));
//	printf("%d\n", sizeof(unsigned long long));
//	return 0;
//}
#include<stdbool.h>
int main()
{
	_Bool flag = true;
	if (flag)
		printf("I like C\n");
	return 0;
}