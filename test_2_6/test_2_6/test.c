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
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i< n; i++)
//	{
//		int j = 0;
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int k = 0;
//	scanf("%d", &k);
//	int  r = 0;
//	for (r = 0; r<k; r++)
//	{
//		char t = 0;
//		int a = 0;
//		int b = 0;
//		getchar();
//		scanf("&c %d %d", &t, &a, &b);
//		if (t == 'r')
//		{
//			//行的交换
//			//交换arr[a-1][i] 与 arr[b-1][i]
//			int u = 0;
//			for (u = 0; u<m; u++)
//			{
//				int tmp = arr[a - 1][u];
//				arr[a - 1][u] = arr[b - 1][u];
//				arr[b - 1][u] = tmp;
//			}
//		}
//		else if (t == 'c')
//		{
//			//列的交换
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				//交换arr[i][a-1]  arr[i][b-1];
//
//				int tmp = arr[j][a - 1];
//				arr[j][a - 1] = arr[j][b - 1];
//				arr[j][b - 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i<n; i++)
//	{
//		int h = 0;
//		for (h = 0; h<m; h++)
//		{
//			printf("%d ", arr[i][h]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[30][30] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j<i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//
//			if (i == j)
//				arr[i][j] = 1;
//			if (i>1 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j<i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}#include <stdio.h>
110.
int main()
{
	char arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	char flag = 'o';
	for (i = 0; i< 3; i++)
	{
		for (j = 0; j<3; j++)
		{
			scanf("%c", &arr[i][j]);
		}
	}

	for (i = 0; i<3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
		{
			flag = arr[i][0];
			break;
		}
	}

	for (i = 0; i<3; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			flag = arr[0][i];
			break;
		}
	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		flag = arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		flag = arr[1][1];
	}

	if (flag == 'K')
	{
		printf("KiKi wins!");
	}
	else if (flag == 'B')
	{
		printf("BoBo wins!");
	}
	else
	{
		printf("No winner!");
	}
	return 0;
}
111.
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[40] = { 0 };
	int i = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		arr[i] = n % 6;
		i++;
		n /= 6;
	}
	for (i--; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
112.
#include <stdio.h>
int main()
{
	long long  n = 0;
	scanf("%lld", &n);
	printf("%lld", (1 + n)*n / 2);
	return 0;
}
114.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", (n / 12) * 4 + 2);
	return 0;
}

115.

#include<stdio.h>

/*
int main ()
{
int n = 0;
int  m = 0;
scanf ("%d %d",&n,&m);
int max = n>m?m:n;
int min  = n>m?n:m;
while (1)
{
if (m%max ==0 && n%max == 0)
{
break;
}
max--;

}

while (1)
{
if (min % m ==0 && min %n ==0)
{
break;
}
min++;
}
printf ("%d\n",max+min);
return 0;
}
*/

int main()
{
	long long  n = 0;
	long long   m = 0;
	long long  k = 0;
	scanf("%lld %lld", &n, &m);
	long long  c = m*n;
	while (k = n%m)
	{
		n = m;
		m = k;
	}
	printf("%lld", m + c / m);

	return 0;
}



116.
#include <stdio.h>
int main()
{
	int  n = 0;
	int sum = 0;
	scanf("%d", &n);
	int i = 0;
	while (n)
	{
		int m = n % 10;
		if (m % 2 == 1)
			m = 1;
		else
			m = 0;
		sum = sum + m*pow(10, i);
		i++;
		n /= 10;
	}
	printf("%d\n", sum);
	return 0;
}