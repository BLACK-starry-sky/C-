#define  _CRT_SECURE_NO_WARNINGS 1
// ��ӡ����
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
//��������
//#include <stdio.h>
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    long sum = x * 3156e4;//���漸����ͼ�eX
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
// 1-2019���ҳ�����9 ������
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
//#define  M 1000 //  #define  ������źͺ�
//#define SIZE 10
//// #define �����Զ����
//#define Add(x,y) ((x)+(y))//��  ����Ҫȥ����ȥ��x,y
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
//  ָ��   
//1.�ڴ� ���ڴ��ǵ������ر���Ҫ���ڴ�����������е����ж������ڴ��н��еġ���һ���ܴ�Ŀռ�
//Ϊ����Ч��ʹ���ڴ棬�����Ƿ�Ϊ���С�飬�����и��Եĵ�ַ��һ��һ��С���ӣ����ڴ浥Ԫ��    �ڴ浥Ԫ�ı�ž���----��ַ-----ָ��
// һ���ڴ浥Ԫ��С   Ϊһ���ֽ�   
//32λ������ ����32����ַ�ߣ�������ַ
//  ���==��ַ==ָ��
//%p  ---��ӡ��ַ����ʾ16���Ƶ���ֵ
// & ȡ��ַ������
#include <stdio.h>
int main()
{
	int a = 10;  //a Ҫ���ڴ�����4���ֽڵĿռ�   4���ֽ�ÿ���ֽڶ����Լ��ĵ�ַ��
	//printf("%p\n",&a); //ȡ���ĸ��ֽ��У���һ���ֽڵĵ�ַ
	int * pa = &a;  //pa ָ�����  pa��ר�Ŵ�ŵ�ַ��   pa ������Ӧ���� int * pa
	return 0;
}