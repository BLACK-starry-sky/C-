#define  _CRT_SECURE_NO_WARNINGS 1
//�������� + - * / %
//%f��ӡ float ������  
//%lf��ӡ����double  ������
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("%d\n", 8 / 2);//���������  /  ���Ϊ4
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 7 / 2);  //�������Ϊ3   7/2=3......1
//	printf("%.1lf\n", 7 / 2.0);//�����Ҫ�õ�3.5�Ľ�����������������߱�����һ����С�����ɣ���ǰ�����%f ����%lf
//	//  ��ֻ���ӡС�����һλ��ֻ��Ҫ����   .1  ����     .X �ʹ���С���������λ
//	printf("%0.2lf\n",7.0/2);
//	printf("%d\n", 7 % 2); //  %:��ʾȡģ��������ֵΪ���� 
//	return 0;
//}
// ��λ�� :�漰�������Ƶļ�����洢
// λ������ ��  &-��λ��  ^-��λ���   | - ��λ��

//C�������������ʾ��ٵ�
//0��ʾ��
//�����ʾ��
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
//	if (flag) //flagΪ�棬��ӡhaha
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
//sizeof  ������
//sizeof �ļ�����Ϊ�ֽ�
//sizeof ���Ǻ���
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
//	printf("%d\n", sizeof(a));  //�����������ܴ�С����λ���ֽ�   40
//	printf("%d\n", sizeof(a[0]));   4
//	printf("%d\n", sizeof(a) / sizeof(a[0]));// ���������Ԫ�ظ���  10
//	//�����Ԫ�ظ�����μ���
//	return 0;
//}
//int main()
//{
//	char a[] = "abc";                     
//	char a1[] = { 'a','b','c' };     // char ���ֽ�Ϊ 1
//	printf("%d\n", strlen(a)); //3   
//	printf("%d\n", strlen(a1));//? 
//	printf("%d\n", sizeof(a));// 4
//	printf("%d\n", sizeof(a1));//3
//	return 0;
//}
// streln �ǿɺ���
//strlen �����ַ������ȵģ���ע�����ַ������Ƿ���\0��ͳ��\0֮ǰ���ֵ��ַ�����
//sizeof  �ǲ�����
//sizeof ֻ��עռ���˶����ڴ�ռ䣬����ע�ڴ��д�ŵ����ݣ����ص�λ���ֽ�
//int main()
//{
//	/*int a = 10;
//	int b = ++a;*/
//	/*printf("a=%d b=%d\n", a, b);*/    //�ȸ�a+1,�ڸ�ֵ��b  a=11 b=11
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
//ǿ������ת��
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
//�����������ʽ
//int main()
//{
//	int a = 4;
//	int b = 0;
//	int m = (a > b ? a : b); //if(a>b)  { m=a}  else {m=b}
//	printf("%d\n", m);
//	return 0;
//}
//���Ų������ʽ
//���ű��ʽ����������μ��㣬�����������ʽ�Ľ��������һ�����ʽ�Ľ��
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 4;
//	int d = (a = b - 3, b = a + c, c = a - b,a=c+3);  //���Ϊ-1
//	printf("%d\n", d);
//	return 0;
//}
//����������
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int sum = a / b;
//	int sun = a % b;
//	printf("%d %d\n", sum, sun);
//	return 0;
//}
//�������һ����λ��(����)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b, c, e, f,d;
//	b = a % 10; //��λ
//	c = a /10%10; //ʮλ
//	e = a /100%10;//��λ
//	f = a / 1000; //ǧλ
//	d = b * 1000 + c * 100 + e * 10 + f;
//	printf("%04d\n", d);
//	return 0;
//}
//�������һ����λ�������ף�
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
//�����ƽ���ɼ�
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
//�ж������Ĵ�С��ϵ
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)// ���������ѭ��
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
//ʱ��ת��
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
//�ؼ���
//����������
//typedef unsinged int unit;
//int main()
//{
//	unsinged int num1 = 10;
//	unit num2 = 20;
//
//}
// register �Ĵ����ؼ���                             �ֽ�               xxM                   8G        500G      2T
//�Ĵ����Ǽ�����ϵ�һ�ִ洢�豸                    �Ĵ��� ------ ���ٻ��棨cache��----�ڴ�---Ӳ��----����
//                                                   ��                                                ��
// CPU ���봦����
//int main()
//{
//	// register ��һ�����������
//	register int num = 10;
//	return 0;
//}
// �ؼ��� static�������α����ͺ�����
// 1.���ξֲ�����-��Ϊ��̬�ֲ����� 
// 2.����ȫ�ֱ���-��Ϊ��̬ȫ�ֱ���
// 3.���κ���-----��Ϊ��̬����
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
//static ���ξٱ�������ʱ��
//�ı��˱����Ĵ洢����
//��ͨ�ľֲ������Ǵ洢��ջ����
//��static���εı����Ǵ洢�ھ�̬����
//�洢�ھ�̬���ı�����������������Ȼ�����٣���Ȼ����
//���Ծ�̬�������������ھ��ǳ������������
//���������ʱ�򣬾�̬�����Ż��ջؿռ�
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;  //��̬�ľֲ������Ͳ������٣��ı��˱����Ĵ洢����
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