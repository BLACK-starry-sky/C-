//C语言常用编译器    GCC（普遍）  MSVC(VS 2022)
// .c C语言的源文件    .cpp   c plus plus  C++源文件的后缀  
//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//printf("hahah\n");
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n",a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("蛋蛋\n");
//	printf("蛋蛋\n");
//	printf("蛋蛋\n");
//	printf("蛋蛋\n");
//	return 0;
//}
// 计算机的单位
// bit
// byte-字节     1byte=8bit
// kB            1kb=1024byte
// MB            1MB=1024KB
// GB            1GB=1024MB
// TB            1TB=1024GB
// PB            1PB=1024TB
// 
//  他们的单位是字节
#include <stdio.h>
//int main()
//	printf("%d\n", sizeof(char));    1字节
//	printf("%d\n", sizeof(short));   2字节
//	printf("%d\n", sizeof(int));     4字节
//	printf("%d\n", sizeof(long));    4字节   在C语言中的标准规定sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));    8字节
//	printf("%d\n", sizeof(float));        4字节
//	printf("%d\n", sizeof(double));       8字节
//	printf("%d\n", sizeof(char));
//	return 0;
//}
// 再来说说进制
// 10····进制0~9
// 2·····进制0~1
// 8·····进制0~7
// 16····进制0~9   +   a~f
// 其中计算机为2进制  2进制中的 0就是一个bit   1也是一个bit
//main是主函数的意思
//mian 是程序的入口，有且仅有一个
//示例：在一个项目工程中，可以包含很多.c文件,但多个.c文件中只能有一个main函数
//可以用注释去屏蔽main即可



//stdio.h的含义： std input output
// .h header
//标准的输入输出头文件 #include <stdio.h>


//通常我们会在网上，或者书上会看到 void mian() ,这是很古老的写法不建议
//  main() 不标准        int main(void)表示main函数不需要参数
//一个特殊的点   float weight=55.6f   
//55.6 :编译器会默认为是double
//55.6f :编译器就认为是float



//对于局部变量与全局变量的理解
//int a = 20;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//局部变量和全局变量的名字可以相同，当我们既可以使用局部，又可以使用全局变量的时候，局部变量优先。

int g_val = 10;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern 声明来自外部的符号
