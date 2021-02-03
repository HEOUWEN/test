#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[101] = { 0 };
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int  i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//
//		int j = 0;
//		for (j = 2; j <= n; j++)
//		{
//			int i = 0;
//			for (i = j + 1; i <= n; i++)
//			{
//				if (arr[i] % j == 0)
//				{
//					arr[i] = 0;
//				}
//			}
//		}
//
//
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] == 0)
//			{
//				count++;
//			}
//			else
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//		printf("\n%d", count);
//
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int  left = 0;
	int right = 9;
	while (left <= right)
	{

		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}