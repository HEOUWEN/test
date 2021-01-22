#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//int main()
//
//{
//	char  str[100] = { 0 };
//	gets(str);
//	printf("%s", str);
//		return 0;
//}

//int main()
//{
//
//	char arr[3] = { 0 };
//	int i = 0;
//	int s = 0;
//	for (s = 0; s < 3; s++)
//	{
//		scanf(" %c", &arr[s]);
//	}
//
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		printf("%c\n", arr[j]);
//	}
//	return 0;
//}

//int main()
//{
//
//	int arr[3] = { 0 };
//	int i = 0;
//	int s = 0;
//	for (s = 0; s < 3; s++)
//	{
//		scanf("%d", &arr[s]);
//	}
//
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//	return 0;
//}
//
//
////////////////////////////////////////////////////////////////////////
//int main()
//
////{
//int main()
//{
//	char  ch[100] = { 0 };
//	int i = 0;
//
//	while (((scanf("%c", &ch[i])) !=  EOF))
//	{
//		i++;
//
//	}
//	int j = 0;
//	for (j = 0; j < 100; j++)
//	{
//		printf("%c", ch[j]);
//	}
//	return 0;
//}


//int main()
//{
//	char i = 0;
//	while ((i =getchar ()) != EOF)
//	{
//		printf("%c", i);
//	}
//	return 0;
//}

//int main()
//{
//	char i = 0;
//	while ((scanf("%c", &i)) != EOF)
//	{
//		printf("%c", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A') && (ch <= 'Z'))
//		{
//			ch = ch + 32;
//			printf("%c\n", ch);
//
//		}
//
//		else if ((ch >= 'a') && (ch <= 'z'))
//		{
//			ch = ch - 32;
//			printf("%c\n", ch);
//		}
//
//		getchar();
//	}
//	return 0;
//}

//1.
//#include <stdio.h>
//
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//			printf("%c is not an alphabet.\n");
//		getchar();
//	}
//	return 0;
//}


//2.
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while ((scanf("%d", &i)) != EOF)
//	{
//		if (i > 0)
//		{
//			printf("1\n");
//		}
//		if (i == 0)
//		{
//			printf("0.5\n");
//		}
//		if (i < 0)
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}


//3.
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A') && (ch <= 'Z'))
//		{
//			ch = ch + 32;
//			printf("%c\n", ch);
//		}
//		else if ((ch >= 'a') && (ch <= 'z'))
//		{
//			ch = ch - 32;
//			printf("%c\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}


//4.
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
//	{
//		if ((a + b >c) && (a + c >b) && (c + b >a))
//		{
//			if ((a == b) && (b == c))
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else  if (((a == b) && (b != c)) || ((a == c) && (b != c)) || ((c == b) && (a != c)))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//		getchar();
//	}
//	return 0;
//}