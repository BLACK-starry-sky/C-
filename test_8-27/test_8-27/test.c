#define  _CRT_SECURE_NO_WARNINGS 1
//�ж���������Ƿ�Ϊ���꣬��Ҫ�������������е�����һ����
//�� ������ܱ� 4 ����ͬʱ���ܱ� 100 ������
//�� ������ܱ�400������

//#include <stdio.h>
//int main()
//{
//    int s;
//    scanf("%d", &s);
//    if (s % 400 == 0 || (s % 4== 0 && s % 100 != 0))
//    {
//        printf("yes\n");
//    }
//    else {
//        printf("no\n");
//    }
//    return 0;
//}
//�����ж�
//#include <stdio.h>
//#include <math.h>
//int asd(int x)
//{
//    int i;
//    for (i = 2; i * i <= x; i++)  //����һ��д�� for(j=2;j<=sqrt(x);j++)
//    {
//        if (x % i == 0)
//        {
//            return 0;  //��������
//        }
//    }
//    return 1;  // ������
//}
//int main()
//{
//    int x,a;
//    scanf("%d", &x);
//    scanf("%d", &a);
//    int sum = 0;
//    for (int i = x; i <= a; i++)
//    {
//        if (i == 0 || i == 1)
//            continue;
//        if (asd(i) == 1)
//            sum += i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int a[100], b[100];
//	int x, y;
//	int min = 1e7;
//	scanf("%d%d", &x, &y);
//	for (int i = 0; i < x; i++)
//	{
//		scanf("%d", a[i]);
//	}
//	for (int i = 0; i < y; i++)
//	{
//		scanf("%d", b[i]);
//	}
//	for (int i = 0; i < x; i++)
//	{
//		if (min > abs(b[i] - a[0]))
//		{
//			min = abs(b[i] - a[0]);
//		}
//		printf("%d ", min + a[0]);
//		if (min > abs(b[i] - a[1]))
//		{
//			printf("%d ", min + a[1]);
//		}
//	}
//	return 0;
//
//}
//дһ��������ʵ��һ��������������Ķ��ֲ���
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//int asd(int *a,int k,int sun)    //���� ���δ��ݵ�����Ԫ�صĵ�ַ
//{
//	int left = 0 , right=sun-1;
//	while (left <= right)
//	{
//		int mid = (right+left)/2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;  //�Ҳ���
//}
//int main()
//{
//	int k;
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sun = sizeof(a)/sizeof(a[0]);  
//	//int sun = strlen(a); �����������������int���͵������Ƽ�ʹ��sizeof���󣬶������ַ������Ƽ�ʹ��strlen����
//	scanf("%d", &k);
//	int sum = asd(a, k,sun);
//	if (-1 == sum)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", sum);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include "add.h"
//int main()
//{
//	int a = 10, b = 20;
//	scanf("%d%d", &a, &b);
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}
// 
// 
//�ݹ�
//#include <stdio.h>
//int main()
//{
//	printf("hehe");
//	return 0;
//}
#include <stdio.h>
//void print(unsigned int n)
//{
//	if (n < 10)
//	{
//		printf("%d ",n );
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num;
	scanf("%d", &num);
	print(num); // ����˳���ӡnum��ÿһλ
	return 0;
}