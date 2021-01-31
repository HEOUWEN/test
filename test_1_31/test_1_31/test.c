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
	int i = 0;
	int odd = 0;
	int even = 0;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			odd++;
		}
		else if (i % 2 == 0)
		{
			even++;
		}
	}
	printf("%d %d\n", odd, even);
	return 0;
}

1.
#include <stdio.h>

#include <string.h>
int main()
{
	char name[20] = { 0 };
	char password[20] = { 0 };
	while ((scanf("%s %s", name, password)) != EOF)
	{
		//字符串比较不能用==号比较
		//应该使用strmp来比较。
		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
		{
			printf("Login Success!");
		}
		else
			printf("Login Fail!");

	}
	return 0;
}

2.
#include <stdio.h>

int main()
{
	int count = 0;
	int i = 0;
	for (i = 0; i <= 2019; i++)
	{
		int n = i;
		while (n != 0)
		{
			if (n % 10 == 9)
			{
				count++;
				break;
			}
			else  n /= 10;
		}
	}
	printf("%d", count);
	return 0;
}

3.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int odd = 0;
	int even = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			odd++;
		}
		else if (i % 2 == 0)
		{
			even++;
		}
	}
	printf("%d %d\n", odd, even);
	return 0;
}

4.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	double  arr[100] = { 0.0 };
	int i = 0;
	double max = 0.0;
	double min = 100.0;
	double sum = 0.0;
	for (i = 0; i<n; i++)
	{
		scanf("%lf", &arr[i]);

		if (arr[i]>max)
		{
			max = arr[i];
		}
		if (arr[i]< min)
		{
			min = arr[i];
		}
	}

	for (i = 0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	printf("%.2lf %.2lf %.2lf", max, min, sum / n);
	return 0;

}

5.
#include <stdio.h>
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	scanf("%s", arr1);
	scanf("%s", arr2);
	if (strcmp(arr1, arr2) == 0)
	{
		printf("same");
	}
	else
		printf("different");

	return 0;
}

6.
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int num = 0;
	int sum = 0;
	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			scanf("%d", &num);
			if (num > 0)
			{
				sum = sum + num;
			}
		}
	}
	printf("%d", sum);
}