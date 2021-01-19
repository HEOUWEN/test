
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int  a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	b = a / 3600;
//	int d = 0;
//	d = (a % 100) / 60;
//	int f = 0;
//	f = d % 10;
//	printf("%d %d %d", b, d, f);
//	return 0;
//
//}
//
//int main()
//{
//	int i = 0;
//	double a = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		scanf("%d", &j);
//		a = a + (double)j;
//
//	}
//	printf("%.1lf", a / 5.0);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int score[5] = { 0 };
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum + score[i];
//	}
//	printf("%.1lf", sum / 5.0);
//	return 0;
//}


//int main()
//{
//	double p = 0.0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%lf %d %d %d", &p, &a, &b, &c);
//
//
//		if ((a == 11) && (b == 11))
//		{
//			
//			p = p*0.7;
//			if (c == 1)
//			{
//				p = p - 50;
//			}
//		}
//
//		if ((a == 12) && (b == 12))
//		{
//			p = p*0.8;
//			if (c == 1)
//			{
//				p = p - 50;
//			}
//		}
//	
//	
//	if (p <0.0)
//		p = 0.0;
//	printf("%.2lf", p);
//	return 0;
//}

//1.
//int main()
//
//{
//	int a = 0;
//	scanf("%d", &a);
//	int h = a / 3600;
//	int m = a / 60 % 60;
//	int s = a % 60;
//
//	printf("%d %d %d", h, m, s);
//	return 0;
//}

//2.
//i/*nt main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 3; i++)
//	{
//		double s = 0.0;
//		scanf("%lf ", &s);
//		sum = sum + s;
//
//	}
//	printf("%.2lf %.2lf", sum, sum / 3.0);
//
//	return 0;
//}*/

//3.
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//
//	scanf("%d %d %d", &n, &h, &m);
//	if (m%h == 0)
//	{
//		printf("%d", n - m / h);
//	}
//	if (m%h != 0)
//	{
//		printf("%d", n - m / h - 1);
//	}
//	return 0;
//}


//4.
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//5.
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man");
//	return 0;
//}
//6.
//int main()
//
//{
//	int i = 0;
//	int arr[5] = { 0 };
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 0; i < 5; i++)
//	{
//
//		sum = sum + arr[i];
//	}
//	sum = sum / 5.0;
//	printf("%.1lf", sum);
//	return 0;
//}

//7.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

int main()
{
	double a = 0.0;
	int b = 0;
	int c = 0;
	int d = 0;

	scanf("%lf %d%d %d", &a, &b, &c, &d);
	if ((b == 11) && (c == 11))
	{
		a = a*0.7;
		if (d == 1)
		{
			a = a - 50;
		}
	}

	 if ((b == 12) && (c == 12))
	{
		a = a*0.8;
		if (d == 1)
		{
			a = a - 50;
		}
	}

	if (a < 0.0)
	{
		a == 0.0;
	}

	printf("%.2lf", a);
	return 0;
}