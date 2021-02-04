#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

99.
#include <stdio.h>
/*
int main ()
{
int n = 0;
scanf ("%d",&n);
int arr[1000] = {0};
int i = 0;
for (i = 0;i<n;i++)
{
scanf ("%d",&arr[i]);
}

for (i = 0;i<n;i++)
{
int j  = 0;
for (j= i+1;j<n;j++)
{
if (arr[i] == arr[j])
arr[j] = 0;
}
}

for (i = 0;i<n;i++)
{
if (arr[i] !=0)
{
printf ("%d ",arr[i]);
}
}
return 0;
}
*/

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = i + 1; j<n; j++)
		{
			if (arr[i] == arr[j])
			{
				int k = 0;
				for (k = j; k<n - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}


		}
	}

	for (i = 0; i<n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}

100.
#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &arr2[i]);
	}

	i = 0;
	int j = 0;
	while (i<n && j<m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}

	if (i == n)
	{
		for (; j<m; j++)
		{
			printf("%d ", arr2[j]);
		}
	}

	else if (j == m)
	{
		for (; i<n; i++)
		{
			printf("%d ", arr1[i]);
		}
	}
	return 0;
}

101,
#include <stdio.h>
int main()
{
	int i = 0;
	double score = 0.0;
	for (i = 0; i<5; i++)
	{
		int j = 0;
		double sum = 0.0;
		for (j = 0; j< 5; j++)
		{
			scanf("%lf", &score);
			sum += score;
			printf("%.1lf ", score);
		}
		printf("%.1lf\n ", sum);
	}
	return 0;
}

102,
#include <stdio.h>

int main()
{

	int m = 0;
	int n = 0;
	scanf("%d %d\n", &n, &m);
	int arr[10][10] = { 0 };
	int i = 0;

	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int  x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	printf("%d", arr[x - 1][y - 1]);
	return 0;

}