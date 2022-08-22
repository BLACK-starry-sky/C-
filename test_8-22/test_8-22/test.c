#define  _CRT_SECURE_NO_WARNINGS 1
// 打印素数
//#include <stdio.h>
//int asd(int m)
//{
//	for ( int i = 2; i * i <= m; i++)
//	{
//		if (m % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (asd(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//大数运算
//#include <stdio.h>
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    long sum = x * 3156e4;//后面几个零就加eX
//    printf("%ld\n", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int s,sum=0;
//	scanf("%d", &s);
//	while (s != 1)
//	{
//		if (s % 2 == 0)
//		{
//			s = s / 2;
//		}
//		else
//		{
//			s = s * 3 + 1;
//		}
//		sum++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 1-2019中找出包含9 的数字
//#include <stdio.h>
//int asd(int x)
//{
//    int sum = 0;
//    while (x != 0)
//    {
//        if (x % 10 == 9)
//        {
//            sum++;
//            break;
//        }
//        x = x / 10;
//    }
//    return sum;
//}
//int main()
//{
//    int sun = 0;
//    for (int i = 1; i <= 2019; i++)
//    {
//        sun += asd(i);
//    }
//    printf("%d\n",sun);
//    return 0;
//}
//#include <stdio.h>
//#define  M 1000 //  #define  定义符号和宏
//#define SIZE 10
//// #define 还可以定义宏
//#define Add(x,y) ((x)+(y))//宏  不需要去定义去，x,y
//int ADD(int x ,int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*int a[SIZE];
//	printf("%d\n", SIZE);
//	return 0;*/
//	int a = 10;
//	int b = 10;
//	printf("%d\n", ADD(a, b));
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 
//  指针   
//1.内存 ：内存是电脑上特别重要的内存器，计算机中的运行都是在内存中进行的。是一个很大的空间
//为了有效的使用内存，把他们分为许多小块，并且有各自的地址，一个一个小盒子，叫内存单元，    内存单元的编号就是----地址-----指针
// 一个内存单元大小   为一个字节   
//32位机器上 ，有32跟地址线，产生地址
//  编号==地址==指针
//%p  ---打印地址，显示16进制的数值
// & 取地址操作符
#include <stdio.h>
int main()
{
	int a = 10;  //a 要向内存申请4个字节的空间   4个字节每个字节都有自己的地址，
	//printf("%p\n",&a); //取出四个字节中，第一个字节的地址
	int * pa = &a;  //pa 指针变量  pa是专门存放地址的   pa 的类型应该是 int * pa
	return 0;
}