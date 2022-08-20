#define  _CRT_SECURE_NO_WARNINGS 1
//操作符： + - * / %
//%f打印 float 的数据  
//%lf打印的是double  的数据
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("%d\n", 8 / 2);//针对整除用  /  结果为4
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 7 / 2);  //整除结果为3   7/2=3......1
//	printf("%.1lf\n", 7 / 2.0);//如果想要得到3.5的结果，除法的左右两边必须有一个是小数即可，且前面的是%f 或者%lf
//	//  若只想打印小数点后一位，只需要加入   .1  即可     .X 就代表小数点后保留几位
//	printf("%0.2lf\n",7.0/2);
//	printf("%d\n", 7 % 2); //  %:表示取模，出来的值为余数 
//	return 0;
//}
// 移位符 :涉及到二进制的计算个存储
// 位操作符 ：  &-按位与  ^-按位异或   | - 按位或

//C语言中是如何提示真假的
//0表示假
//非零表示真
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);  // 5
//	printf("%d\n", a);  //5
//	printf("%d\n", !a);  //0
//	return 0;
//}
//int main()
//{
//	int flag = 0;
//	if (flag) //flag为真，打印haha
//	{
//		printf("haha\n");
//	}
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//	return 0;
//}
//sizeof  操作符
//sizeof 的计算结果为字节
//sizeof 不是函数
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));  //4
//
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	printf("%d\n", sizeof(a));  //计算的数组的总大小，单位是字节   40
//	printf("%d\n", sizeof(a[0]));   4
//	printf("%d\n", sizeof(a) / sizeof(a[0]));// 计算数组的元素个数  10
//	//数组的元素个数如何计算
//	return 0;
//}
//int main()
//{
//	char a[] = "abc";                     
//	char a1[] = { 'a','b','c' };     // char 的字节为 1
//	printf("%d\n", strlen(a)); //3   
//	printf("%d\n", strlen(a1));//? 
//	printf("%d\n", sizeof(a));// 4
//	printf("%d\n", sizeof(a1));//3
//	return 0;
//}
// streln 是可函数
//strlen 是求字符串长度的，关注的是字符串中是否有\0，统计\0之前出现的字符个数
//sizeof  是操作符
//sizeof 只关注占据了多大的内存空间，不关注内存中存放的数据，返回单位是字节
//int main()
//{
//	/*int a = 10;
//	int b = ++a;*/
//	/*printf("a=%d b=%d\n", a, b);*/    //先给a+1,在赋值给b  a=11 b=11
//	int a = 10;
//	int b = a++;
//	printf("a=%d b=%d\n",a,b);    //  a=11 b=10
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}
//强制类型转换
//int main()
//{
//	int a = (int )3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a && b)
//	{
//		printf("haha\n");
//	}
//	return 0;
//
//}
//条件操作表达式
//int main()
//{
//	int a = 4;
//	int b = 0;
//	int m = (a > b ? a : b); //if(a>b)  { m=a}  else {m=b}
//	printf("%d\n", m);
//	return 0;
//}
//逗号操作表达式
//逗号表达式会从左到右依次计算，但是整个表达式的结果是做后一个表达式的结果
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 4;
//	int d = (a = b - 3, b = a + c, c = a - b,a=c+3);  //结果为-1
//	printf("%d\n", d);
//	return 0;
//}
//计算带余除法
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int sum = a / b;
//	int sun = a % b;
//	printf("%d %d\n", sum, sun);
//	return 0;
//}
//反向输出一个四位数(初级)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b, c, e, f,d;
//	b = a % 10; //个位
//	c = a /10%10; //十位
//	e = a /100%10;//百位
//	f = a / 1000; //千位
//	d = b * 1000 + c * 100 + e * 10 + f;
//	printf("%04d\n", d);
//	return 0;
//}
//反向输出一个四位数（进阶）
//int main()
//{
//	int a,sum=0,sun=0;
//	scanf("%d", &a);
//	for (int i = 1; i <= 4;i++)
//	{
//		sun = a % 10;
//		a = a / 10;
//		sum = 10 * sum + sun;
//	}
//	printf("%04d\n", sum);
//	return 0;
//}
//计算机平均成绩
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	float sum = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		sum = sum + a[j];
//	}
//	printf("%.1f\n", sum/5);
//	return 0;
//}
//判断两数的大小关系
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)// 连续输出的循环
//	{
//		
//		
//			if (a ==b)
//			{
//				printf("%d=%d\n", a, b);
//			}
//			if (a > b)
//			{
//				printf("%d>%d\n", a, b);
//			}
//			if (a < b)
//			{
//				printf("%d<%d\n", a, b);
//			}
//		
//	}
//	return 0;
//}
//时间转换
//int main()
//{
//	int a, b, c,e,f;
//	scanf("%d", &a);
//	b = a % 60;
//	c = a / 60;
//	e = c % 60;
//	f = c / 60;
//	printf("%d %d %d\n", f, e, b);
//	return 0;
//}
//关键字
//类型重命名
//typedef unsinged int unit;
//int main()
//{
//	unsinged int num1 = 10;
//	unit num2 = 20;
//
//}
// register 寄存器关键字                             字节               xxM                   8G        500G      2T
//寄存器是计算机上的一种存储设备                    寄存器 ------ 高速缓存（cache）----内存---硬盘----网盘
//                                                   快                                                慢
// CPU 中央处理器
//int main()
//{
//	// register 起一个建议的作用
//	register int num = 10;
//	return 0;
//}
// 关键字 static用来修饰变量和函数的
// 1.修饰局部变量-称为静态局部变量 
// 2.修饰全局变量-称为静态全局变量
// 3.修饰函数-----称为静态函数
//int ADD()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		ADD();
//		i++;
//	}
//	return 0;
//}
//static 修饰举报变量的时候
//改变了变量的存储类型
//普通的局部变量是存储在栈区的
//被static修饰的变量是存储在静态区的
//存储在静态区的变量，出了作用域，依然不销毁，依然存在
//所以静态变量的生命周期就是程序的生命周期
//程序结束的时候，静态变量才会收回空间
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;  //静态的局部变量就不会销毁，改变了变量的存储类型
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}
//int ADD(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d\n", ADD(x,y));
//	return 0;
//}
//int main()
//{
//	int a = 40, c = 212;
//	int sum = 0;
//	sum = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//    int x;
//    while (scanf("%d", &x) != EOF);
//    {
//        if (x >= 140)
//        {
//            printf("Genius\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	printf("Name Age Gender\n");
//	printf("---------------------\n");
// 
//	printf("Jack 18 man\n");
//	return 0;
//}
int main()
{
	int x;
	while(scanf("%d", &x)!=EOF);
	{
		if (x % 5 == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}