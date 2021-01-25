#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			int i = 0;
//			for (i = 0; i < j+1; i++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//1.
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//2.
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i <n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//3.
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//4.
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i <n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}

#include <stdio.h>

//5.
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i <n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i - 1; j++)
//			{
//				printf("  ");
//			}
//			int s = 0;
//			for (s = 0; s<i + 1; s++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//6.
//#include <stdio.h>
//
//int main()
//{
//	int h = 0;
//	int w = 0;
//
//	while ((scanf("%d %d", &w, &h)) != EOF)
//	{
//		float bmi = 0.0;
//		bmi = w / ((h / 100.0)*(h / 100.0));
//		if (bmi <18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 &&bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi >23.9 && bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else if (bmi > 27.9)
//		{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//
//}

//7.
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while ((scanf("%lf %lf %lf", &a, &b, &c)) != EOF)
//	{
//		if (a == 0.0)
//		{
//			printf("Not quadratic equation\n");
//		}
//
//		else if (a != 0.0)
//		{
//			double s = 0.0;
//			s = b*b - 4 * a*c;
//			if (s == 0.0)
//			{
//				printf("x1=x2=%.2lf\n", (-b - sqrt(s)) / (2 * a));
//			}
//			else if (s >0, 0)
//			{
//				printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(s)) / (2 * a),
//					(-b + sqrt(s)) / (2 * a));
//			}
//			else if (s < 0.0)
//			{
//				double r = -b / (2 * a);
//				double t = sqrt(-s) / (2 * a);
//				printf("x1=%.2lfi;x2=%.2lfi\n", r - t, r + t);
//			}
//		}
//	}
//	return 0;
//}

// #include <stdio.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//
//	while ((scanf("%lf %lf %lf", &a, &b, &c)) != EOF)
//	{
//		if (a == 0.0)
//		{
//			printf("Not quadratic equation");
//		}
//		else if (a != 0.0)
//		{
//			double s = b *b - 4 * a*c;
//			if (s == 0.0)
//			{
//				printf("x1=x2=%.2lf\n", (-b - sqrt(s)) / (2 * a));
//			}
//			else if (s>0.0)
//				printf("x1=%.2lf;x2=%.2lf\n",
//				(-b - sqrt(s)) / (2 * a), (-b + sqrt(s)) / (2 * a));
//			else if (s<0.0)
//				printf("x1=%.2lfi;x2=%.2lfi\n",
//				((-b) / (2 * a)) - (sqrt(-s) / (2 * a)),
//				((-b) / (2 * a)) - (sqrt(-s) / (2 * a))
//				);
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while ((scanf("%lf %lf %lf", &a, &b, &c)) != EOF)
//	{
//		if (a == 0.0)
//		{
//			printf("Not quadratic equation\n");
//		}
//
//		else if (a != 0.0)
//		{
//			double s = 0.0;
//			s = b*b - 4 * a*c;
//			if (s == 0.0)
//			{
//				printf("x1=x2=%.2lf\n", (-b - sqrt(s)) / (2 * a));
//			}
//			else if (s >0.0)
//			{
//				printf("x1=%.2lf;x2=%.2lf\n",
//					(-b - sqrt(s)) / (2 * a),
//					(-b + sqrt(s)) / (2 * a));
//			}
//			else if (s < 0.0)
//			{
//				double r = -b / (2 * a);
//				double t = sqrt(-s) / (2 * a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", r, t, r, t);
//			}
//		}
//	}
//	return 0;
//}