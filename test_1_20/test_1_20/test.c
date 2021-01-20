#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	int arr[40] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	int arr[40] = { 0 };
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int j = 0;
//	for (j = 0; j<n - 1; j++)
//	{
//		// Ò»ÌËÃ°ÅÝÅÅÐò
//		int m = 0;
//		for (m = 0; m <n - j - 1; m++)
//		{
//			if (arr[m]  < arr[m + 1])
//			{
//				int tmp = arr[m];
//				arr[m] = arr[m + 1];
//				arr[m + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0; int e = 0;
//	int d = 0; int f = 0;
//
//	scanf("%d%d", &a, &b);
//	scanf("%d%d", &c, &d);
//	scanf("%d%d", &e, &f);
//
//	printf("%d%d\n%d\n%d%d\n%d", a, b, c, d, e, f);
//	return 0;
//}



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

//1.
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int j = 0;
//	for (j = 0; j < n - 1; j++)
//	{
//		  
//		int k = 0;                                   //int m = 0;
//		for (k = 0; k <n - j - 1; k++)               //		for (m = 0; m <n - j - 1; m++)
//		{                                             //		{
//			if (arr[k]<arr[k + 1])                   //			if (arr[m]  < arr[m + 1])
//			{                                        //		{
//				int tmp = 0;                         //				int tmp = arr[m];
//				tmp = arr[k];
//				arr[k] = arr[k + 1];                //				arr[m] = arr[m + 1];
//				arr[k + 1] = tmp;                    //				arr[m + 1] = tmp;
//			}                                         //			}
//		}                                            //		}
//
//
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}