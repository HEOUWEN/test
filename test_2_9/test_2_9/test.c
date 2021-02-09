#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

135.
#include <stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j<n; j++)
	{
		if (n%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i))
		{
			count++;

		}
	}
	printf("%d ", count);
	return 0;
}

136.
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1001] = { 0 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &tmp);
		arr[tmp] = tmp;
	}

	for (i = 0; i<1001; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
	return 0;
}
138.

#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	int  n = 0;
	scanf("%d", &n);
	int i = 0;
	int data = 0;
	//创建一个链表
	struct Node* list = NULL;//指向链表第一个节点的
	struct Node* tail = NULL;//指向链表最后一个节点的


	//插入元素，尾部插入

	for (i = 0; i<n; i++)
	{
		scanf("%d", &data);
		//动态申请一个节点-堆区
		struct Node* pn = malloc(sizeof (struct Node));
		pn->data = data;
		pn->next = NULL;
		//尾部插入
		if (list == NULL)
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = tail->next;
		}
	}

	//删除指定元素
	int del = 0;
	scanf("%d", &del);
	struct Node* cur = list;
	struct Node* prev = NULL;
	while (cur)
	{
		if (cur->data = del)
		{
			//删除

			struct Node* pd = cur;
			if (cur == list)//第一个节点
			{
				list = cur->next;
				cur = list;
			}
			else //非第一个节点
			{
				prev->next = cur->next;
				cur = prev->next;
			}
			n--;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	printf("%d\n", n);

	//打印节点
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	//释放列表；
	cur = list;
	while (cur)

	{
		struct Node* pd = cur;
		cur = cur->next;
		free(pd);
	}

	list = NULL;

	return 0;
}


139.
// #include <stdio.h>

// int main ()
// {
//     int y  = 0;
//     int m = 0;
//     int d = 0;
//     scanf ("%d %d %d",&y,&m,&d);
//     printf ("%d/%d/%d\n",d,m,y);
//     return 0;
// }


