#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

108///

#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i< n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int k = 0;
	scanf("%d", &k);
	int  r = 0;
	for (r = 0; r<k; r++)
	{
		char t = 0;
		int a = 0;
		int b = 0;
		getchar();
		scanf("&c %d %d", &t, &a, &b);
		if (t == 'r')
		{
			//行的交换
			//交换arr[a-1][i] 与 arr[b-1][i]
			i = 0;
			for (i = 0; i<m; i++)
			{
				int tmp = arr[a - 1][i];
				arr[a - 1][i] = arr[b - 1][i];
				arr[b - 1][i] = tmp;
			}
		}
		else if (t == 'c')
		{
			//列的交换
			for (i = 0; i<n; i++)
			{
				//交换arr[i][a-1]  arr[i][b-1];

				int tmp = arr[i][a - 1];
				arr[i][a - 1] = arr[i][b - 1];
				arr[i][b - 1] = tmp;
			}
		}
	}

	for (i = 0; i<n; i++)
	{
		int h = 0;
		for (h = 0; h<m; h++)
		{
			printf("%d ", arr[i][h]);
		}
		printf("\n");
	}
	return 0;
}


109////
#include <stdio.h>

int main()
{
	int arr[30][30] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i< n; i++)
	{
		int j = 0;
		for (j = 0; j<n; j++)
		{
			if (j == 0)
				arr[i][j] = 1;

			if (i == j)
				arr[i][j] = 1;
			if (i>1 && j > 0)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}

	for (i = 0; i< n; i++)
	{
		int j = 0;
		for (j = 0; j<i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}