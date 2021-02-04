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
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int tmp = 0;
//	for (i = 1; i <= n*m; i++)
//	{
//		scanf("%d", &tmp);
//
//		if (i %m == 0)
//			printf("\n");
//		printf("%d ", tmp);
//	}
//	return 0;
//}
//

void test()
{
	printf("test1\n");
	return 0;
	printf("test2\n");
}

int main()
{
	test();
	printf("hehe\n");
	return 0;
}

103.
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int tmp = 0;
	for (i = 1; i <= n*m; i++)
	{
		scanf("%d", &tmp);

		if (i %m == 0)
			printf("\n");
		printf("%d ", tmp);
	}
	return 0;
}

104.
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int tmp = 0;
	int max = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i< n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			scanf("%d", &tmp);
			if (tmp >max)
			{
				max = tmp;
				x = i;
				y = j;
			}
		}
	}

	printf("%d %d", x + 1, y + 1);
	return 0;
}

105.
#include <stdio.h>
int main()
{
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	int n = 0;
	int  m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	for (i = 0; i <n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i <n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i <n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}

106.
#include <stdio.h>
int main()
{
	int  n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;

	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j< n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j< n; j++)
		{
			if (i > j)
			{
				if (arr[i][j] != 0)
				{
					printf("NO");
					return 0;
				}
			}
		}
	}
	printf("YES\n");
	return 0;
}

107.
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j< m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i<m; i++)
	{
		int j = 0;
		for (j = 0; j< n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}