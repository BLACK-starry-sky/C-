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
//�ݹ����������
// 1.�����������������������������ʱ�򣬵ݹ�㲻�ټ���
// 2.ÿ�εݹ����֮��Խ��Խ�ӽ������������

//��д���������ַ�������
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char *str)
//{
//	int count = 0;
//	while(*str!='\0')  //*str ָ��a��������ַ�---a
//	{
//		count++;
//		str++;   //ָ���ַ��ǰ��һ
//	}
//	return count;
//}
//�ݹ�
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
//�׳˵ݹ�
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
// ���n��쳲���������
//쳲���������
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
//			printf("%d*%d=%2d ", i, j, i * j); //%2d  2��ʾ��ǰ���һ�����
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
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
////���ÿһλ����
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)//��������
//		print(n / 10);//(n/10)ʹ���𽥽ӽ���n>9�������������
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int input = 0;
//	printf("������һ��������");//1234567890
//	scanf("%d", &input);
//
//	print(input);
//
//	return 0;
//}
//�������ÿһλ��
//#include <stdio.h>
//int main()
//{
//	int n = 0; //����һλ��
//	int count = 0;//����n��λ��
//	int t = 0; //��n��������
//	int sum = 0; //����Ľ��
//	int tem = 1;  //������
//	scanf("%d", &n);
//	t = n;  //��ʼ����
//	while (n)
//	{
//		n = n / 10;
//		count++;  //�����n��λ��
//	}
//	for (int i = 1; i <= count; i++) //�ӵ�һλ����ʼ��������� ���ӣ�1234  ��һλΪ��1
//	{
//		for (int j = i; j < count; j++) //��֤��һλ�������ȫ����Ϊȥ��  ����Ҫ����1000
//		{
//			tem = tem * 10;      //ѭ��count-1�Σ���Ϊ1000��
//		}
//		printf("%d ", (t/tem) % 10);   //  1234/1000=1  1%10=1 ,��һλ���
//		tem = 1;  // ���ڵڶ���ʹ��
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0; //����һλ��
//	int count = 0;//����n��λ��
//	int t = 0; //��n��������
//	int sum = 0; //����Ľ��
//	int tem = 1;  //������
//	scanf("%d", &n);
//	t = n;  //��ʼ����
//	while (n)
//	{
//		n = n / 10;
//		count++;  //�����n��λ��
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
	*(str + len - 1) = '\0';// *(str + len - 1)ָ��ľ���g��λ��
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