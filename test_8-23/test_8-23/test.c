#define  _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
// һ����������һ���� ���飬�ȸ��Ӷ�����Ҫ�õ��ṹ�壺�绰���Ա�סַ������
//#include <stdio.h>
//struct Stu   //struct Stu ��һ������
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
//	//struct Stu s = { "����","��",20,"20222105" };
//	struct Stu s = {0};
//	scanf("%s %s %d %s", s.name, s.sex, &(s.age), s.id); //���������ǵ�ַ������Ҫ��&
//	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.id); //�ṹ��������ṹ���Ա
//	print(&s);
//	return 0;
//}
//��ѭ����ӡ5
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
//�����ж�
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
//���Լ��������С������
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
//	printf("%d\n", b);//���Լ��
//	printf("%d\n", m / b);//��С������
//	return 0;
//}
// 9*9�ĳ˷��ھ���
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)  //����
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�����ֵ
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