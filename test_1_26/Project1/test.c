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
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k<1 + i; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<i + 1; j++)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k<n - i; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//
//		}
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//
//			int k = 0;
//			for (k = 0; k < i; k++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i < n; i++)
//		{
//				int j = 0;
//				for (j = 0; j < i; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//
//				int k = 0;
//				for (k = 0; k < n - 1 - i; k++)
//				{
//					printf(" ");
//				}
//
//				printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int j = 0;
//		for (j = 0; j<n; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//
		/*int i = 0;
		for (i = 0; i<n - 2; i++)
		{
			printf("* ");
			int k = 0;
			for (k = 0; k<n - 2; k++)
			{
				printf("  ");
			}
			printf("* ");
	
		}
          printf("\n");*/
//
//		for (j = 0; j<n; j++)
//		{
//			printf("* ");
//		}
//
//	}
//	return 0;
//}

1.
#include <stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n)) != EOF)
	{
		int i = 0;
		for (i = 0; i<n + 1; i++)
		{
			int j = 0;
			for (j = 0; j<n - i; j++)
			{
				printf("  ");
			}
			int k = 0;
			for (k = 0; k<i + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j<i + 1; j++)
			{
				printf("  ");
			}
			int k = 0;
			for (k = 0; k<n - i; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

2,
#include <stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n)) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j <i; j++)
			{
				printf(" ");
			}
			printf("*");

			int k = 0;
			for (k = 0; k<n - 1 - i; k++)
			{
				printf(" ");
			}

			printf("\n");

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
			for (j = 0; j<n - 1 - i; j++)
			{
				printf(" ");
			}
			printf("*");

			int k = 0;
			for (k = 0; k<i; k++)
			{
				printf(" ");
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
	int n = 0;
	while ((scanf("%d", &n)) != EOF)
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if ((i == j)
					|| (i + j == n - 1))
				{
					printf("*");
				}
				else
					printf(" ");
			}
			printf("\n");

		}
	}
	return 0;
}

5.
#include <stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n)) != EOF)
	{
		int i = 0;
		for (i = 0; i <n; i++)
		{
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if ((i == 0) || (i == n - 1) || (j == 0) || (j == n - 1))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}

			}
			printf("\n");
		}
	}
	return 0;
}

6.
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
			for (j = 0; j <n; j++)
			{
				if ((j == 0) || (i == n - 1) || (i == j))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

