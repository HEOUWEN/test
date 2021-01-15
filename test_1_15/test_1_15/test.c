#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//	printf("Practice makes perfect!");
//	return 0;
//}

//int main()
//{
//	printf("v   v\n v v\n  v");
//	return 0;
//}

//int main()
//{
//	printf("The size of short is %d bytes.\n",sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.", sizeof(long long));
//
//	return 0;
//
//}

//int main()
//{
//	printf("0%o\n0X%X", 1234, 1234);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		printf("%d", n % 10);
//		n = n / 10; 
//	}
//		
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		printf("%c\n", a - 32);
//		getchar();
//	}
//	return 0;
//}

////
////int main()
////{
////	printf("%-15d\n", 0xABCDEF);
////	return 0;
////}
////
////int main()
////{
////	
////	printf("\n%d", printf("Hello,world!"));
////	return 0;
////}  

//int main()
//{
//	int  n = 0;
//	while ((n = getchar()) != EOF)
//	{
//		/*if (((n >= 'A') && (n <= 'Z')) || ((n >= 'a') && (n <= 'z')))*/
//
//		if (isalpha(n))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("    %c\n   %c %c\n  %c %c %C\n %c %c %c %c\n%c %c %c %c %c\n", ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch);
//	return 0;
//}
//
//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//
//	打印几行
//	int i = 0;
//	for (i = 0; i < 5;i++)
//	{
//
//		控制一行打印的‘空格’个数
//		int k = 0;
//		for (k = 0; k <= 4 - i; k++)
//		{
//			printf(" ");
//		}
//
//		控制一行打印的‘1’的个数
//		int j = 0;
//		for (j = 0; j < i + 1  ; j++)
//		{
//			printf("%c ",ch);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//1.
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}

//2.
//int main()
//{
//	printf("%15d", 0xABCDEF);
//	return 0;
//}

//3.
//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d", ret);
//	return 0;
//
//}

//4.
//int main()
//{
//	int num = 0;
//	float c = 0.0;
//	float math = 0.0;
//	float eg = 0.0;
//
//	scanf("%d;%f,%f,%f", &num, &c, &math, &eg);
//
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", num, c, math, eg);
//
//	return 0;
//
////}
//
//int main()
//{
//
//	float c = 70.445;
//	float d = 69.455;
//	double e = 70.445;
//	double f = 69.455;
//
//	printf("%.2f\n", c);
//	printf("%.2f\n", d);
//	printf("%.2lf\n", e);
//	printf("%.2lf\n", f);
//		return 0;
//
//}

//5.
//#include  <stdio.h>
//
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A' &&ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//6.
//int main()
//
//{
//	char ch = 0;
//	scanf("%c",&ch);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//
//		int k = 0;
//		for (k = 0; k < 4 - i; k++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < i + 1; k++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}