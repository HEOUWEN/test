#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

1.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = 0;
	scanf("%d", &j);

	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i]>j)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = j;
			break;
		}
	}

	if (i == -1)
	{
		arr[i + 1] = j;
	}

	for (i = 0; i<n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


2.
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[101] = { 0 };
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			arr[i] = i;
		}

		for (i = 2; i <= n; i++)
		{
			int j = 0;
			for (j = i + 1; j <= n; j++)
			{
				if (arr[j] % i == 0)
					arr[j] = 0;

			}
		}

		int count = 0;
		for (i = 2; i <= n; i++)
		{
			if (arr[i] == 0)
				count++;
			else
				printf("%d ", arr[i]);
		}
		printf("\n%d\n", count);
	}
	return 0;
}

3.
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int arr1[100][100] = { 0 };
	int arr2[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	int  i = 0;
	for (i = 0; i<m; i++)
	{
		int j = 0;
		for (j = 0; j< n; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i<m; i++)
	{
		int j = 0;
		for (j = 0; j< n; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}

	int count = 0;
	for (i = 0; i < m; i++)
	{
		int  j = 0;
		for (j = 0; j<n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				count++;
			}
		}
	}
	printf("%.2lf\n", count*100.0 / (m*n));
	return 0;
}