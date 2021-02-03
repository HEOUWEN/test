#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//92.
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//
//93.
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int postive = 0;
//	int negative = 0;
//	int s = 0;
//
//	for (i = 0; i <10; i++)
//	{
//		scanf("%d", &s);
//		if (s >= 0)
//			postive++;
//		else
//			negative++;
//	}
//	printf("positive:%d\n", postive);
//	printf("negative:%d\n", negative);
//	return 0;
//}
//
//94.
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//95.
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int tmp = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//
//		if (tmp <min)
//		{
//			min = tmp;
//		}
//	}
//
//	printf("%d\n", max - min);
//	return 0;
//}
//
//
//96.
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i<n - 1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//			flag1 = 1;
//		if (arr[i]<arr[i + 1])
//			flag2 = 1;
//	}
//	if (flag1 + flag2 == 1)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}
//
//98.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int  i = 0;
	int del = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i<n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}

	for (i = 0; i<j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}