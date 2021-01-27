#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

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


	for (i = 0; i<n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

1.
#include <stdio.h>
int main()
{
	double hi = 0.0;
	double sum = 0.0;
	int i = 0;
	for (i = 0; i <5; i++)
	{
		scanf("%lf", &hi);
		sum = sum + hi;
	}
	printf("%.2lf", sum / 5);
	return 0;
}

2.
#include <stdio.h>
int main()
{
	int i = 0;
	while ((scanf("%d", &i)) != EOF)
	{
		switch (i)
		{
		case (200) :
			printf("OK\n");
			break;
		case (202) :
			printf("Accepted\n");
			break;
		case (400) :
			printf("Bad Request\n");
			break;
		case (403) :
			printf("Forbidden\n");
			break;
		case (404) :
			printf("Not Found\n");
			break;
		case (500) :
			printf("Internal Server Error\n");
			break;
		case (502) :
			printf("Bad Gateway\n");
			break;
		}
	}
	return 0;
}

3.
#include <stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n)) != EOF)
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j< i + 1; j++)
			{
				printf("%d ", j + 1);
			}
			printf("\n");
		}
	}
	return 0;
}

4.
#include <stdio.h>
int main()
{
	int i = 0;
	int score[7] = { 0 };
	int max = 0;
	int min = 1000;
	int sum = 0;
	for (i = 0; i<7; i++)
	{
		scanf("%d", &score[i]);
		sum = sum + score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
		if (score[i] < min)
		{
			min = score[i];
		}
	}
	printf("%.2lf", (sum - max - min) / 5.0);
	return 0;
}

5.
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


	for (i = 0; i<n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}