#define  _CRT_SECURE_NO_WARNINGS 1
//删除序列中的指定元素
//#include <stdio.h>
//int main()
//{
//	int x,y;
//	int a[50],b[50];
//	scanf("%d", &x);
//	for (int i = 0; i < x; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &y);
//	int t = 0,j=0;
//	for (int i = 0; i < x; i++)
//	{
//		if (a[i] != y)
//		{
//			b[j] = a[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ",b[i]);
//	}
//	return 0;
//}
//序列去重
//#include <stdio.h>
//int main()
//{
//    int n;
//    //第一行包含一个正整数n（1 ≤ n ≤ 1000）
//    int arr1[1000] = { 0 }; //作为输入数组存储信息
//    int arr2[1000] = { 0 }; //作为输出数组用于筛选去重后的数字
//    scanf("%d", &n);
//    int num = 0;//用于统计去重后元素的个数
//    for (int i = 0; i < n; i++) {
//        int sum = 0;//用于表示该元素是否为重复元素
//        scanf("%d ", &arr1[i]);//输入数组①
//        for (int j = 0; j < i; j++) {
//            if (arr2[j] == arr1[i]) { //检测输出数组②中是否已经存在此数
//                sum = 1;
//                break;
//            }
//        }
//        //sum=0说明if循环未进入则输出数组中无此数
//        //将满足的值输入二数组
//        if (sum == 0)
//        {   //说明此时为非重复元素
//            arr2[num] = arr1[i];//将该元素存储到arr2输出数组中
//            num++;//个数++
//        }
//    }
//    for (int i = 0; i < num; i++) { //输出去重后的数组
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int n;
//    int i, j = 0;
//    int a[100] = { 0 };
//    scanf("%d ", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &a[i]);
//    }
//    for (i = 0; i < n; i++) {
//        for (j = i + 1; j < n; j++) {
//            if (a[i] == a[j])
//                a[j] = 0;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] != 0)  //等于0时不输出
//        {
//            printf("%d ", a[i]);
//        }
//    }
//}
//#include <stdio.h>
//int prime(int m)
//{
//	if (m == 0 || m == 1)
//	{
//		return 0;
//	}
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
//	int sum = 0;
//	int x;
//	scanf("%d", &x);
//	for (int i =1 ; i <= x; i++)
//	{
//		if (prime(i) == 1)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d\n", sum);
//	printf("%d\n", x - sum - 1);
//	return 0;
//}
//查数字
//#include <stdio.h>
//int main()
//{
//	int a[100];
//	int b,sum=0,c;
//	scanf("%d", &b);
//	for (int i = 0; i < b; i++)
//	{
//		scanf("%d ", &a[i]);
//	}
//	scanf("%d", &c);
//	for (int i = 0; i < b; i++)
//	{
//		if (a[i] == c)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//蛇形矩阵
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[30][30];
//	for (int i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//
//	for (int i = 2; i < n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//回型矩阵
#include<stdio.h>
void Visit(int a[][100], int n)
{
    int p = 0, q = n - 1;
    int count = 0;

    while (count < n * n)
    {
        for (int i = p; i <= q; i++)//从上面开始赋值  
            a[p][i] = ++count;
     // 行不变，列变  第一行的4列依次++输出
        for (int i = p + 1; i <= q; i++)//从右边开始赋值
            a[i][q] = ++count;
     // 列不变，行变 第n列，从第二行开始依次++输出
        for (int i = q - 1; i >= p; i--)//从下面开始赋值
            a[q][i] = ++count;
     // 行不变，列变，从第n行开始倒数第二列开始依次++输出
        for (int i = q - 1; i >= p + 1; i--)
            a[i][p] = ++count;
     //列不变，行变
     //count一直加加，判断是否小于n*n，如果小于n*n就重复循环
        p++;
        q--;
    }


}
void Print(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int n, a[100][100];
    scanf("%d", &n);
    Visit(a, n);
    Print(a, n);
    return 0;
}
