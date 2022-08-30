#define  _CRT_SECURE_NO_WARNINGS 1
//数组训练
//有序序列判断
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int x[50];
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &x[i]);
//	}
//	int sum = 0,sun=0,sz=0;
//
//	for (int i = 0; i < a-1; i++)
//	{
//		if (x[i] > x[i + 1])
//		{
//			sum++;
//		}
//		else if (x[i] < x[i + 1])
//		{
//			sun++;
//		}
//		else if (x[i] == x[i + 1])
//		{
//			sz++;
//		}
//	}
//	/*if (sun > 0 || sum > 0)
//	{
//		sz = sz;
//	}
//	else
//	{
//		sz=sz + 1;
//	}*/
//	printf("%d %d %d\n", sum,sun,sz);
//	if (sum == a-1 || sun == a-1 || sz == a-1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}
// 有序序列插入一个整数
//#include <stdio.h>
//int main()
//{
//	int s;
//	scanf("%d", &s);
//	int a[52];
//	int b[52];
//	for (int i = 0; i < s; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int n,t=0;
//	scanf("%d", &n);
//	for (int i = 0; i < s; i++)
//	{
//		if (n < a[i])
//		{
//			t = i;
//			//printf("%d\n", t);
//			break;
//		}
//	}
//	if (n > a[s - 1])
//	{
//		a[s] = n;
//	}
//	else 
//	{
//		for (int i = s - 1; i >= t; i--)
//		{
//			a[i + 1] = a[i];
//		}
//		a[t] = n;
//	}
//	for (int i = 0; i <= s; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    int transfer(int ch);
//    char ch;
//    printf("请输入一个字母:");
//    scanf("%c", &ch);
//    printf("%c:%4d   ", ch, ch);
//    printf("转换成二进制数是:%d\n", transfer(ch));
//}
//
//int transfer(int ch)
//{
//    int p = 1, y = 0, yushu;
//    while (1)
//    {
//        yushu = ch % 2;
//        ch /= 2;
//        y += yushu * p;
//        p *= 10;
//        if (ch < 2)
//        {
//            y += ch * p;
//            break;
//        }
//    }
//    return y;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 10 - 1; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[20][20];
//	int n, m,sum=0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; i < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] > 0)
//			{
//				sum = sum + a[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m, i, j;
//    int sum = 0;
//    int a[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &a[i][j]);
//            if (a[i][j] >= 0)
//                sum += a[i][j];
//
//        }
//    }
//    printf("%d\n", sum);
//}
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void init(int* a, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		a[i] = 0;
		printf("%d ", a[i]);
	}
}
void print(int* a, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}
int reverse(int* a, int sz)
{
	for (int i = sz - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	int sz = sizeof(a) / sizeof(a[0]);
	//init(a,sz);
	//printf("\n");
	print(a,sz);
	printf("\n");
	reverse(a,sz);
	printf("\n");
	init(a, sz);
	return 0;
}