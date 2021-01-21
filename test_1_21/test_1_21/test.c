#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//字符输入，正确
//int main()
//
//{
//	int ch = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while (((ch = getchar()) != '0') && (ch != EOF))
//	{
//		if (ch == 'A')
//		{
//			count_a++;
//		}
//		if (ch == 'B')
//		{
//			count_b++;
//		}
//	}
//	if (count_a == count_b)
//	{
//		printf("E");
//	}
//	else if (count_a  > count_b)
//	{
//		printf("A");
//	}
//	else printf("B");
//
//	return 0;
//}

//字符串输入，正确
//int main()
//
//{
//	char  ch[100] = { 0 };
//	int i = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while (((scanf("%c", &ch[i])) != '0') && (ch[i] != EOF))
//	{
//		if (ch[i] == 'A')
//		{
//			count_a++;
//		}
//		if (ch[i] == 'B')
//		{
//			count_b++;
//		}
//		i++;
//
//	}
//	if (count_a == count_b)
//	{
//		printf("E");
//	}
//	else if (count_a  > count_b)
//	{
//		printf("A");
//	}
//	else printf("B");
//
//	return 0;
//}



//int main()
//{
//	char   n  =0;
//	while ((scanf ("%c",&n)) != EOF)/////////////////////////
//	{
//		if ((n >= 'a') && (n <= 'z'))
//		{
//			printf("YES\n");
//		}
//		else printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//
//int main()
//{
//	char   n  =0;
//	while (((n = getchar ())) != EOF)///////////////////////////
//	{
//		if ((n >= 'a') && (n <= 'z'))
//		{
//			printf("YES\n");
//		}
//		else printf("NO\n");
//		getchar();
//		
//	}
//	return 0;
//}

//int main()
//
//{
//	char  ch[100] = { 0 };
//	gets(ch);////////////////////////////////
//	int i = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while (ch[i] != '0')///////////////////////
//	{
//		if (ch[i] == 'A')
//		{
//			count_a++;
//		}
//		if (ch[i] == 'B')
//		{
//			count_b++;
//		}
//		i++;
//
//	}
//	if (count_a == count_b)
//	{
//		printf("E");
//	}
//	else if (count_a  > count_b)
//	{
//		printf("A");
//	}
//	else printf("B");
//
//	return 0;
//}





//
//#include <stdio.h>
//
//int main()
//{
//	int s = 0;
//	while ((scanf("%d", &s)) != EOF)
//	{
//		if (s >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//		getchar();
//
//	}
//	return 0;
//}
//
//
//int main()
//{
//
//	int arr[3] = { 0 };
//	int i = 0;
//
//	while ((scanf("%d %d %d", &arr[0], &arr[1], &arr[2])) != EOF)
//	{
//		int max = 0;
//		for (i = 0; i< 3; i++)
//		{
//
//			if (arr[i]>max)
//			{
//				max = arr[i];
//			}
//		}
//		printf("%d\n", max);
//	}
//
//
//	return 0;
//}\
//
//
//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch == 'A') || (ch == 'a')||  ch == ('E') || (ch == 'e') || (ch == 'I')|| (ch == 'i')|| (ch == 'O') || (ch == 'o') || (ch == 'U') ||( ch == 'u'))
//		{
//			printf("Vowel\n");
//		}
//		else
//			printf("Consonant\n");
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char  ch = 0;
//	char  arr[10] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;////////////////////////////////////
//			}
//		
//	
//		}
//		if (i == 10)
//		{
//
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	char  ch = 0;
//	char  arr[] = " AaEeIiOoUu ";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;////////////////////////////////////跳出for循环
//			}
//
//
//		}
//		if (i == 10)
//		{
//
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	char  ch = 0;
//	int i = 0;
//	char  arr[] = " AaEeIiOoUu ";
//	while ((scanf(" %c", &ch) != EOF))///////////////scanf/getchar只能输入一个/或固定 的数。输入之后再存到数组。 也可以ch【i】，要i++
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;////////////////////////////////////跳出for循环
//			}
//
//
//	}
//		if (i == 10)
//		{
//
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}






//1.
//
//int main()
//{
//	char ch = 0;
//	int  count_A = 0;
//	int  count_B = 0;
//	while (((ch = getchar()) != EOF) && (ch != '0'))
//	{
//		if (ch == 'A')
//		{
//			count_A++;
//		}
//		if (ch == 'B')
//		{
//			count_B++;
//		}
//	}
//	if (count_A == count_B)
//	{
//		printf("E\n");
//	}
//	if (count_A > count_B)
//	{
//		printf("A\n");
//	}
//	if (count_A < count_B)
//	{
//		printf("B\n");
//	}
//	return 0;
//}
//

//2
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while ((scanf("%d", &i)) != EOF)
//	{
//		if (i >= 140)
//		{
//			printf("Genius");
//		}
//	}
//	return 0;
//}

//3.
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while ((scanf("%d", &i)) != EOF)
//	{
//		if ((i <= 100) && (i >= 90))
//		{
//			printf("Perfect");
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
//	int i = 0;
//	while ((scanf("%d", &i)) != EOF)
//	{
//		if (i >= 60)
//		{
//			printf("Pass\n");
//
//		}
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}

//5。
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while ((scanf("%d", &i)) != EOF)
//	{
//		if (i % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

//6.
//
//#include <stdio.h>
//
//int main()
//{
//	int y = 0;
//	int s = 0;
//	int e = 0;
//
//	int arr[100] = { 0 };
//
//	while (scanf("%d %d %d", &arr[0], &arr[1], &arr[2]) != EOF)
//
//	{
//		int max = 0;
//		int i = 0;
//		for (i = 0; i< 3; i++)
//		{
//			if (arr[i] >= max)
//				max = arr[i];
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}

//7.

//#include <stdio.h>
//#include <stdio.h>
//
//int main()
//{
//	char str[] = "AaEeIiOoUu";
//	char  i = 0;
//	while ((i = getchar()) != EOF)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (i == str[j])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (j == 10)
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}