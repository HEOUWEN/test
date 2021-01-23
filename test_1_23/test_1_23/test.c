#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//1.
//#include <stdio.h>
//
//int main()
//{
//	int h = 0;
//	int w = 0;
//	while ((scanf("%d %d", &w, &h)) != EOF)
//	{
//		float bmi = 0;
//		bmi = w / ((h / 100.0)*(h / 100.0));
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if ((bmi >= 18.5) && (bmi <= 23.9))
//		{
//			printf("Normal\n");
//		}
//		else if ((bmi > 23.9) && (bmi <= 27.9))
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//
//	}
//	return 0;
//
//}


//2.
//#include <stdio.h>
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
//			else if (s>0.0)
//				printf("x1=%.2lfi;x2=%.2lfi\n",
//				((-b) / (2 * a)) - (sqrt(-s) / (2 * a)),
//				((-b) / (2 * a)) - (sqrt(-s) / (2 * a))
//				);
//		}
//	}
//	return 0;
//}


//3.
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	day[1] = 29;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", day[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while ((scanf("%d %d", &y, &m)) != EOF)
//	{
//		int d = 0;
//
//
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			day[1] = 29;
//		}
//		d = day[m - 1];
//		printf("%d", d);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while ((scanf("%d %d", &y, &m)) != EOF)
//	{
//		int d = 0;
//
//
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			day[1] = 29;
//		}
//		d = day[m - 1];
//		printf("%d\n", d);
//
//	}
//	return 0;
//}



//
//4.
//#include <stdio.h>
//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//	{
//		if (op == '+')
//			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//		else if (op == '-')
//			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//		else if (op == '*')
//			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1*n2);
//		else if (op == '/')
//		{
//			if (n2 == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//				printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//		}
//		else if ((op != '+') || (op != '-') || (op != '*') || (op != '/'))
//		{
//			printf("Invalid operation!\n");
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//	{
//		switch (op)
//		{
//		case'+':
//			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//			break;
//		case'-':
//			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1*n2);
//			break;
//		case '/':
//			if (n2 == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//				printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}