#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//int main()
//{
//	/*printf("abc\ndef");*/
//	printf("%d",strlen("c:\test\041\test.c"));
////\t \040 \ddd d��8��������
//	printf("%c",'\041');
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof (a));
//	/*printf("the size of short is %d bytes.\n", sizeof(short));
//	printf("the size of int is %d bytes.\n", sizeof(int));
//	printf("the size of long is %d bytes.\n", sizeof(long));
//	printf("the size of long long is %d bytes.\n", sizeof(long long));
//*/
//	return 0;
//}
//


////�������һ����λ��
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);
//	//���
//	 
//	while (n != 0)
//	{
//
//		printf("%d", n %10);
//		n = n / 10;
//	}
//	return 0;
//}
//EOF

//int main()
//{
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//����'\n'
//	}
//	return 0;
//
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):>");
//	getchar();
//
//	int ch = getchar();
//	
//	if (ch == 'Y')
//		printf ("ȷ�ϳɹ�\n");
//	else
//		printf  ("����ȷ��\n");
//	return 0;
//}

//--------------------------------------------

//1.
//#include <stdio.h>
//int main()
//{
//	printf("Practice makes perfect!");
//	return 0;
//}

//2.
//int main()
//{
//	printf("v   v\n");
//	printf(" v v\n");
//	printf("  v\n");
//	return 0;
//}

//int main()
//{
//	printf("v   v\n v v\n  v");
//	return 0;
//}
//

//3.
//int main()
//{
//	int a = 0;
//	a = sizeof (short);
//	printf("The size of short is %d bytes.\n", a);
//
//	int b = 0;
//	b = sizeof (int);
//	printf("The size of int  is %d bytes.\n", b);
//
//	int c = 0;
//	c = sizeof (long);
//	printf("The size of long is %d bytes.\n", c);
//
//	int d = 0;
//	d = sizeof (long long);
//	printf("The size of long long is %d bytes.\n", d);
//	return 0;
//}

//4.
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof (short));
//	printf("The size of int is %d bytes.\n", sizeof (int));
//	printf("The size of long is %d bytes.\n", sizeof (long));
//	printf("The size of long long is %d bytes.\n", sizeof (long long));
//	return 0;
////}
//
//int main()
//{
//	printf("0%o ", 1234);
//	printf("0X%X\n", 1234);
//	printf("0%o 0X%X", 1234, 1234);
//	return 0;
//
//}

//5.
//�������һ����λ����
//��Ŀ��������һ����λ�������������
//����������һ�У�����һ������n��1000 <= n <= 9999����
//������������ÿ�����룬���������Ӧ��λ����
//ʾ��1������1234  �����4321
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		a = n % 10;
//		n = n / 10;
//	}
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		printf("%d", n%10);
//		n = n / 10;
//	}
//	
//	return 0;
//}
//

//6.
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		
//		printf( "%c\n",a + 32);
//		getchar();
//	}
//
//	return 0;
//
//}

