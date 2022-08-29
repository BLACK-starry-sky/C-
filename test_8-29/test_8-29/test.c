#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int x;
//    int s, sum = 0;
//    int tem = 1;
//    scanf("%d", &x);
//    int t = x;
//    int sz = 0;
//    while (x)
//    {
//        x = x / 10;
//        sum++;
//        tem *= 10;
//    }
//    for (int i = 1; i <= sum; i++)
//    {
//        tem = tem / 10;
//        s = (t / tem) % 10;
//        if (s % 2 == 0)
//        {
//            s = 0;
//        }
//        else
//        {
//            s = 1;
//        }
//        sz = sz * 10 + s;
//    }
//    printf("%d\n", sz);
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        int w = n % 10;
//        ret += w * pow(10, i++); //逆向变正向
//        n /= 10;
//    }
//
//    printf("%d\n", ret);
//
//    return 0;
//}
//数组是一组相同类型元素的集合
//#include <stdio.h>
//int main()
//{
	//int num = 10;
	//float fn = 3.14f;
	/*int a[10];
	char a1[10];
	double a2[10];*/
	//在C99中引入了变长数组的概念
	//变长数组支持数组的大小使用变量来指定
	//变长数组不是数组长度可以变化，而是数组的大小可以用变量来指定
	//VS2019,VS2022不支持C99
	//在大多是OJ网站上是支持的：牛客，力扣等
	/*int n = 0;
	scanf("%d", &n);
	int arr[n];
	return 0;
}*/
//#include <stdio.h>
//int main()
//{ 
	//int n = 0;
	//int m;
	//m = 20;
	//int a[10] = { 1 };  //不完全初始化，第一个元素初始化为1，其余元素默认为0
	//int a1[10] = { 1,2,3,4,5,6,7,8,9,10 }; //完全初始化
	//char a3[10] = { 'a','b','c'}; // a b c 0 0 0 0 0 0 0
	//char a2[10] = "abcdef";       // a b c d e f 0 0 0 0
	//int a[] = { 1,2,3,4 }; // 1 2 3 4
	//int a1[10] = { 1,2,3,4 }; // 1 2 3 4 0 0 0 0 0 0
	//char a[] = "abc";  // a b c \0
	//char a1[] = { 'a','b','c' }; // a b c
	//char a2[10] = "abc";  // a b c 0 0 0 0 0 0 0    /0就是0
	//return 0;
	//int a[15] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(a) / sizeof(a[0]); //15 计算数组的大小
	//printf("%d\n", sz);
	//return 0;
//}
//数组在内存中的存储
//数组在内存中是连续存放的，随着数组小标的增长，地址也是由低到高变化的
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
// '\0'--字符  ASCII码值是0
//  '0'--字符0 ASCII码值是48
//  0--数字0
//#include <stdio.h>
//int main()
//{
//	int s;
//	scanf("%d", &s);
//	if (s % 2 == 0)
//	{
//		printf("2 ");
//	}
//     if (s % 3 == 0)
//	{
//		printf("3 ");
//	}
//	 if (s % 7 == 0)
//	{
//		printf("7 ");
//	}
//	 if (s % 7 != 0 && s % 2 != 0 && s % 3 != 0)
//	 {
//		 printf("n");
//	 }
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float x=0.0,sum=0.0f;
//	char s;
//	scanf("%f%c", &x, &s);
//	if (x <= 1)
//	{
//		sum = sum + 20;
//	}
//	else
//	{
//		if((int)(x-1)%1==0)
//		{
//			sum = sum + 20 + ((x - 1) / 1);
//		}
//		else
//		{
//			sum = sum + 21 + ((x - 1) / 1);
//		}
//	}
//	if (s == 'y')
//	{
//		sum = sum + 5;
//	}
//	else if(s=='n')
//	{
//		sum = sum;
//	}
//	printf("%0.f\n", sum);
//	return 0;
//}
// 在二维数组中，如果初始化时，可以省略行，不能省略列
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a;
//	char b;
//	int sum = 20;
//	scanf("%f %c", &a, &b);
//	if (a > 0 && a <= 1)
//	{
//		if (b == 'y')
//			printf("25");
//		else
//			printf("20");
//	}
//	if (a > 1)
//	{
//		sum = sum + ceil(a - 1);//向上取整
//		if (b == 'y')
//			printf("%d\n", sum + 5);
//		else
//			printf("%d\n", sum);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int n, m;
//	scanf("%d %d", &a, &b);
//	scanf("%d %d", &n, &m);
//	if (a == n && b != m)
//	{
//		if(m - b >= 0)
//			printf("u\n");
//		else
//			printf("d\n");
//	}
//	else if (a != n && b == m)
//	{
//		if (n - a >= 0)
//			printf("r\n");
//		else
//			printf("l\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int y, m, d;
//	int y1, m1, d1;
//	scanf("%d %d %d\n%d %d %d", &y, &m, &d, &y1, &m1, &d1);
//	if (y < y1)
//	{
//		printf("yes");
//	}
//	else if (y == y1 && m < m1)
//	{
//		printf("yes");
//	}
//	else if (y == y1 && m == m1 && d <= d1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//冒泡排序
//#include <stdio.h>
//void sort(int* a, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)  //比较几次
//	{
//		for (int j = 0; j < sz - 1 - i; j++)   //比较几对
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	sort(a,sz);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[51];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	/*int sz = sizeof(a) / sizeof(a[0]);  //51
//	printf("%d\n", sz);*/
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//指针数组
//#include <stdio.h>
//void print(int* a, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(a + i));
//		//printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	print(a, sz);
//	return 0;
//}
// 数组名是首元素地址
// 存在两个例外
// 1.sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2.&数组名，数组名表示整个数组，取出整个数组的地址
// 除此之外，遇到的数组名都是数组首元素的地址
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int x[1000];
	int y[1000];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &y[i]);
	}
	int m[2000];
	for (int i = 0; i < a; i++)
	{
		m[i] = x[i];
	}
	for (int i = 0; i < b; i++)
	{
		m[a++] = y[i];
	}
	for (int i = 0; i < (a ) - 1; i++)
	{
		for (int j = 0; j < (a) - 1 - i; j++)
		{
			if (m[j] > m[j + 1])
			{
				int t = m[j];
				m[j] = m[j + 1];
				m[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < a ; i++)
	{
		printf("%d ", m[i]);
	}
	return 0;
}