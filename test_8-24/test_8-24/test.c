#define  _CRT_SECURE_NO_WARNINGS 1
// C语言是结构化的程序设计语言
// 顺序结构
// 选择结构  if  swich
// 循环结构  while for  do-while
//#include <stdio.h>
//int main()
//{
//	// ; 表示空语句
//	//转向语句 ： break ,  goto,  continue,  return
//	int age = 20;
//	if (age < 18)  //if后面默认只有一条语句，如果有多个语句语序加上大括号
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//	}
//	return 0;
//}
  // <18 少年
 //  18~30青年
// 31~45中年
// 46~60 壮年
// 61~90 老年
// >90  老寿星
// if（表达式1）    表达式1为真输出语句1
    // 语句1：
//  else if(表达2)   表达式1为假 表达式2为真，输出语句2
    // 语句2：
//  else             表达式1，2都为假，输出语句3
  //  语句3：
//#include <stdio.h>  //多分枝语句
//int main()
//{
//	int age = 0;
//	scanf("%d\n", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age <=30)
//		printf("青年\n");
//	else if (age >= 31 && age <=45)
//		printf("中年\n");
//	else if (age >= 46 && age <= 60)
//		printf("壮年\n");
//	else if (age >= 61 && age < 90)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}
// 在C语言中，0表示假，非0表示真
// 
// 
//悬空的if语句   else 就近原则匹配
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)    //*** 重点，else 永远跟自己距离最近的if在一起
//            printf("hehe\n");
//    else                          //当if(a==1)为假时 ，下面的语句就不会执行，无输出
//            printf("haha\n");
//    return 0;
//}
// if（5==num） 尽量将常量写在左边
// 打印等腰三角形
//#include <stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    for (int i = 1; i <= 3; i++)
//    {
//        for (int j = 0; j < (3 - i); j++)
//        {
//            printf(" ");
//        }
//        for (int k = 0; k < (2 * i - 1); k++)
//        {
//            printf("%c",a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <=x; i++)
//		{
//			for (int j = 0; j < x - i; j++)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//空心正方形
//#include <stdio.h>
//int main()
//{
//    int x;
//    while (scanf("%d", &x) != EOF)
//    {
//        for (int i = 1; i <= x; i++)  //打印 行数
//        {
//            for (int j = 1; j <= x; j++)  //  打印每一行的*号和空格，去控制他们数量 
//            {
//                if (i == 1 || i == x || j == 1 || j == x)  // j<= x表明；一行最多打印X个
//                {
//                    printf("* ");          // if（...）i表明在第一行，第四行，
//                }                          // j 表明在一行可以打印 1个或者四个，这样进行判断
//                else                       // j 就代表 列
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// 空心三角形
//#include <stdio.h>
//int main()
//{
//    int s;
//    while (scanf("%d", &s) != EOF) //i 代表行数  j 代表列数
//    {
//        for (int i = 1; i <= s; i++)
//        {
//            for (int j = 1; j <= i; j++)  //  i行有i个符号
//            {
//                if (i == 1 || i == 2 || i == s || j ==1 || j ==i)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//数字三角形
//#include <stdio.h>
//int main()
//{
//    int x;
//    while (scanf("%d", &x) != EOF)
//    {
//        for (int i = 1; i <= x; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//逆序输出
//#include <stdio.h>
//int main()
//{
//    int a[11];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", & a[i]);
//    }
//    for (int j = 9; j >= 0; j--)
//    {
//        printf("%d ", a[j]);
//    }
//    return 0;
//} 
//计数问题
//#include <stdio.h>
//int asd(int x ,int y)
//{
//    int a,sum=0;
//    while (x)
//    {
//        a = x % 10;
//        if (a == y)
//        {
//            sum++;
//        }
//        x = x / 10;
//    }
//    return sum;
//}
//int main()
//{
//    int x, s, a;
//    scanf("%d %d", &x, &s);
//    int sum = 0;
//    for (int i = 1; i <= x; i++)
//    {
//        sum += asd(i, s);
//    }
//    printf("%d \n", sum);
//    return 0;
//}
// swich 的使用
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)   // 整形表达式
//    {
//        case 1:   //case 后必须是整形常量表达式
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//
//    }
//    return 0;
//}
//continue 跳过本次循环，本次循环后面代码不再执行，直接跳到h循环语句判断部分，进行下一次循环入口的判断
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch);  //打印字符
//    }
//    return 0;
//}
// 重点 getchar
//#include <stdio.h>
//int main()
//{
//    char password[20] = { 0 };
//    printf("输入密码");
//    scanf("%s", password);
//    // 清理\n
//    int p=0;
//    while ((p = getchar()) != '\n')  //getchar 返回值的类型为int   //清理缓存区
//    {
//        ;
//    }
//        printf("请确认密码（Y/N）");
//        int ch = getchar();
//        if (ch == 'Y')
//        {
//            printf("确认成功");
//        }
//        else
//        {
//            printf("确认失败");
//        }
//    
//    return 0;
//}
// 打印数字
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
//获得月份天数
//#include <stdio.h>
////判断闰年
//int asd(int m)
//{
//    if ((m % 4 == 0) && (m % 100 != 0) || (m % 400 == 0))
//    {
//        return 1;
//    }
//    return 0;
//}
//int main()
//{
//    int x[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)
//    {
//        if (asd(a) == 1)
//        {
//            x[1] = 29;
//        }
//        else
//        {
//            x[1] = 28;
//        }
//        printf("%d\n", x[b - 1]);
//    }
//    return 0;
//}
