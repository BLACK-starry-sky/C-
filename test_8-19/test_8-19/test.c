#define  _CRT_SECURE_NO_WARNINGS 1
//  变量的命名 1.只能由字母（包括大小写）、数字下划线（_）组成
//             2.不能以数字开头
//             3.长度不能超过63字符
//             4.变量名中区分大小写
//             5.变量名中能出现关键字

//常量：描述那些不变的量  有分类
//   1.字面常量  100、3.14   'a'  
//   2.const修饰的常变量
//   3.#define 标识符常量
//   4.枚举常量
//#include <stdio.h>
//#include <string.h>
//#define MAX 100
//int main()
//{
	//const int num = 10;  //不能被改变  ，用语法将变量改成常量
	//num = 20;
	//printf("%d\n", num);
	/*int a[10]={0};*/
	/*const int n = 10;
	int arr[n] = { 0 };
	return 0;*/
	/*printf("%d\n", MAX);
	return 0;*/
//}
//枚举：一一的列举
// 枚举的关键字：enum
enum Sex   //这三个可能取值是枚举常量
{
	MALE,
	FEMALE,
	SECRET
};
//int main()
//{
	//enum Sex s=MALE
	/*printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);*/
	/*char a[] = "abc";
	char a1[] = { 'a','b','c',};
	printf("%s\n", a);
	printf("%s\n", a1);
	printf("%d\n", strlen(a1));
	return 0;
}*/
//  '\0'是字符串的结束标志
//  %s 打印字符串，遇到\0打印自动结束
// string strlen 求字符串长度   头文件#include <string.h>
// strlen 只能求出\0之前的字符的个数
//转义字符：转变原有的意思
//int main()
//{
//	printf("c:\\test\\test.c\n");
//	printf("abc\\ndef\n");
//	printf("\'\n");
//	printf("\"\n");
//	printf("\\\\");
//	return 0;
//}
// 在转义符前加上  \   就可打印出例如：\n,\t,\?
//特殊的转义字符  \ddd:表示1-3的八进制数字
// \xdd:表示2个16进制数字
// 123的十进制 转 十进制：3*10的0次方+2*10的1次方+1*10的2次方=123
// 130的八进制 转 十进制：0*8的0次方+3*8的1次方+1*8的2次方=88
// 字符的编号-ASC-II编码表  A:65  a:97   0:48
//int main()
//{
//	printf("%c\n", '\62');//130这个八进制数字转换成十进制数字作为ASC-II值，表示的字符为'X'
//	printf("%c\n", '\x40');// 40十六进制 转 十进制：0*16的0次方+4*16的1次方=64  
//	printf("%d\n",strlen("c:\test\628\test.c")); // c : \t e s t \62 8 \t e s t . c
//	return 0;
//}
//int main()
//{
//	int input;
//	printf("加入比特\n");
//	printf("要好好学习吗？（1/0）\n");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//int main()
//{
//	int light = 0;
//	while (light<=20)
//	{
//		printf("写代码%d\n",light);
//		light++;
//	}
//	if (light == 21)
//	printf("芜湖起飞");
//	return 0;
//}
// 数组：一组相同类型元素的集合
//初始化
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a1[10] = { 1,2,3 };//不完全初始化，值初始化前3个，剩余的初始化为0
//	int a2[] = { 1,2,3 };//此时默认[]里面为3
//	//int a3[];err
//	int a4[10];//里面的数据是随机的
//}
// GCC-支持C99
//int main()
//{
//	int n = 10;
//	int a[n];//C99 变长数组，允许数组再创建的时候，数组的大小用变量指定，但这种数组不能初始化，当前是不支持的
//	return 0;
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//编号是从0开始的，不断向后递增1：0~9也叫小标
//	//printf("%d\n", a[8]);
//	int j = 0;
//	while (j<10)
//	{
//		scanf("%d", &a[j]);
//		j++;
//	}
//	int i = 0;
//	while (i<10&&i>=0)
//	{
//		printf("%d ", a[i]);
//		i++;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 12; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2; k++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}