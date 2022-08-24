#define  _CRT_SECURE_NO_WARNINGS 1
//结构体
// 一般用于描述一个人 ，书，等复杂对象，需要用到结构体：电话，性别，住址，年龄
//#include <stdio.h>
//struct Stu   //struct Stu 是一个类型
//{
//	char name[23];
//	char sex[6];
//	int age;
//	char id[23];
//};
//void print(struct Stu* pa)
//{
//	printf("%s %s %d %s\n", (*pa).name, (*pa).sex, (*pa).age, (*pa).id);
//	printf("%s %s %d %s\n", pa->name,pa->sex,pa->age,pa->id);
//}
//int main()
//{
//	//struct Stu s = { "张三","男",20,"20222105" };
//	struct Stu s = {0};
//	scanf("%s %s %d %s", s.name, s.sex, &(s.age), s.id); //数组名就是地址，不需要加&
//	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.id); //结构体变量。结构体成员
//	print(&s);
//	return 0;
//}
//死循环打印5
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int t = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (c > a)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (c > b)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
#/*include <stdio.h>

int asd(int m)

{

	for (int i = 2; i * i <= m; i++)

	{

		if (m % i == 0)

			return 0;

	}

	return 1;

}

int main()

{

	for (int i = 100; i <= 200; i++)

	{

		if (asd(i) == 1)

		{

			printf("%d\n", i);

		}

	}

	return 0;

}*/
//闰年判断
//#include <stdio.h>
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//最大公约数，和最小公倍数
//#include <stdio.h>
//int main()
//{
//	int a, b, c, m, t;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	m = a * b;
//	c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d\n", b);//最大公约数
//	printf("%d\n", m / b);//最小公倍数
//	return 0;
//}
// 9*9的乘法口诀表
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)  //行数
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求最大值
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int MAX = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		if (a[j] > MAX)
//		{
//			MAX = a[j];
//		}
//	}
//	printf("%d\n", MAX);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int s;
	scanf("%d", &s);
	long int sum=1;
	for (int i = 1; i <= s; i++)
	{
		sum = sum * 2;
	}
	printf("%d\n", sum);
	return 0;
}