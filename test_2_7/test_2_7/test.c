#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x = 0;
//	int count = 0;
//	scanf("%d", &x);
//	for (i = 0; i<n; i++);
//	{
//		if (arr[i] == x)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\n\");");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}
117.
#include <stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return n;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

118.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int k = 0;
	int  arr[100001] = { 0 };
	for (i = 0; i<n; i++)
	{
		scanf("%d", &k);
		arr[k] = k;
	}
	for (i = 0; i<100001; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}

119.
#include <stdio.h>
int main()
{
	char arr[8000] = { 0 };
	scanf("%s", arr);
	long long  c = 0;
	long long  ch = 0;
	long long chn = 0;
	char *p = arr;
	while (*p)
	{
		if (*p == 'C')
			c++;
		else if (*p == 'H')
			ch = ch + c;
		else if (*p == 'N')
			chn = chn + ch;
		p++;
	}
	printf("%lld\n", chn);
	return 0;
}

123.
#include <stdio.h>
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	for (i = 0; i<4; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = 0;
	for (i = 0; i< 4; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}

125.
#include <stdio.h>
int main()
{
	int s = 0;
	scanf("%d", &s);
	if (s >= 90 && s <= 100)
		printf("A\n");
	else if (s >= 80 && s <= 90)
		printf("B\n");
	else if (s >= 70 && s <= 80)
		printf("C\n");
	else if (s >= 60 && s <= 70)
		printf("D\n");
	else if (s <= 59 && s >= 0)
		printf("E\n");
	else
		printf("F\n");

	return 0;

}

129.
#include <stdio.h>
int max3(int x, int y, int z)
{
	int max = x>y ? x : y;
	max = max>z ? max : z;
	return max;

}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	float   g = 0.0;
	g = ((float)max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));
	printf("%.2f\n", g);
	return 0;
}

130.
#include <stdio.h>
// int main ()
// {
//     int arr[100] = {0};
//     int n= 0;
//     scanf ("%d",&n);
//     int i =0;
//     for (i = 0;i<n;i++)
//     {
//         scanf ("%d",&arr[i]);
//     }
//     int x = 0;
//     int count  =0;
//     scanf ("%d",&x);
//     for (i = 0;i<n ;i++)
//     {
//         if (arr[i] == x)
//             count  ++;
//     }
//     printf ("%d",count);
//     return 0;
// }

131.
#include <stdio.h>
int main()
{
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;\n");
	return 0;
}

