#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x)!=EOF)
//	{
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 1; j <= x; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//递归的两个条件
// 1.存在限制条件，当满足这个条件的时候，递归便不再继续
// 2.每次递归调用之后越来越接近这个限制条件

//编写函数，求字符串长度
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char *str)
//{
//	int count = 0;
//	while(*str!='\0')  //*str 指向a数组的首字符---a
//	{
//		count++;
//		str++;   //指针地址向前加一
//	}
//	return count;
//}
//递归
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char a[] = "abcdfe";
//	int len = my_strlen(a); // char*
//	printf("%d\n", len);
//	return 0;
//}
//阶乘递归
//#include <stdio.h>
//#include <math.h>
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{    
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
// 求第n个斐波那契数列
//斐波那契数列
//#include <stdio.h>
//#include <math.h>
//int asd(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return asd(n - 1) + asd(n - 2);
//}
//int asd(int n)
//{
//	int a = 1, b = 1;
//	int c = 0;
//	int m = n - 2;
//	while(m--)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = asd(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//void asd(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j); //%2d  2表示起前面空一格输出
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	asd(n);
//	return 0;
//}
//#include <stdio.h>
//void swap(int a, int b)
//{
//	int t = 0;
//	t = b;
//	b = a;
//	a = t;
//	printf("%d %d", a, b);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	swap(a, b);
//	return 0;
//}
//#include <stdio.h>
//void asd(int a)
//{
//	if (a % 4 == 0 || (a % 400 != 0) && (a % 100 == 0))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	asd(year);
//	return 0;
//}
//#include <stdio.h>
//int asd(int m)
//{
//	for (int i = 2; i * i <= m; i++)
//	{
//		if (m % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a=100, b=200;
//	for (int i = a; i <= b; i++)
//	{
//		if (asd(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//void asd(int n)
//{
//	int x;
//	while (n)
//	{
//		x = n % 10;
//		printf("%d ", x);
//		n = n / 10;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	asd(n);
//	return 0;
//}
////输出每一位的数
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)//限制条件
//		print(n / 10);//(n/10)使其逐渐接近（n>9）这个限制条件
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int input = 0;
//	printf("请输入一个整数：");//1234567890
//	scanf("%d", &input);
//
//	print(input);
//
//	return 0;
//}
//正向求出每一位数
//#include <stdio.h>
//int main()
//{
//	int n = 0; //输入一位数
//	int count = 0;//计算n的位数
//	int t = 0; //将n备份起来
//	int sum = 0; //输出的结果
//	int tem = 1;  //被除数
//	scanf("%d", &n);
//	t = n;  //开始备份
//	while (n)
//	{
//		n = n / 10;
//		count++;  //计算出n的位数
//	}
//	for (int i = 1; i <= count; i++) //从第一位数开始，控制输出 例子：1234  第一位为：1
//	{
//		for (int j = i; j < count; j++) //保证第一位数后的数全部变为去掉  ，需要整除1000
//		{
//			tem = tem * 10;      //循环count-1次，变为1000；
//		}
//		printf("%d ", (t/tem) % 10);   //  1234/1000=1  1%10=1 ,第一位输出
//		tem = 1;  // 便于第二次使用
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0; //输入一位数
//	int count = 0;//计算n的位数
//	int t = 0; //将n备份起来
//	int sum = 0; //输出的结果
//	int tem = 1;  //被除数
//	scanf("%d", &n);
//	t = n;  //开始备份
//	while (n)
//	{
//		n = n / 10;
//		count++;  //计算出n的位数
//		tem*=10;
//	}
//	//printf("%d %d", tem, count);
//	for (int i = 1; i <= count; i++)
//	{
//		tem = tem / 10;
//		printf("%d ", (t / tem) % 10);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int s;
//    scanf("%d", &s);
//    int a[100];
//    int sum = 0;
//    for (int i = 0; i < s; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < s; i++)
//    {
//        sum = sum + a[i];
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	long int x;
//	scanf("%ld", &x);
//	long int sum = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%ld\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main() 
//{
//	int a[100];
//	a[0] = 1;
//	a[1] = 1;
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 2; i <= x; i++)
//		{
//			a[i] = a[i - 1] + a[i - 2];
//		}
//		printf("%d\n", a[x - 1]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int asd(int n, int k)
//{
//	if (k > 0)
//	{
//		return asd(n, k - 1) * n;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n,k,sum=0;
//	scanf("%d%d", &n,&k);
//	sum=asd(n, k);
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	return n;
//}
//int main()
//{
//	int sum = 0;
//	sum=DigitSum(1729);
//	printf("%d\n", sum);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	char tmp = *str;  //1
	int len = my_strlen(str);
	*str = *(str + len - 1); 
	*(str + len - 1) = '\0';// *(str + len - 1)指向的就是g的位置
	if (strlen(str + 1) >= 2)
		reverse_string(str + 1);
	*(str + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);

	printf("%s\n", arr);
	return 0;
}