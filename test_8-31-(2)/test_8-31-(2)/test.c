#define  _CRT_SECURE_NO_WARNINGS 1
//ɾ�������е�ָ��Ԫ��
//#include <stdio.h>
//int main()
//{
//	int x,y;
//	int a[50],b[50];
//	scanf("%d", &x);
//	for (int i = 0; i < x; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &y);
//	int t = 0,j=0;
//	for (int i = 0; i < x; i++)
//	{
//		if (a[i] != y)
//		{
//			b[j] = a[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ",b[i]);
//	}
//	return 0;
//}
//����ȥ��
//#include <stdio.h>
//int main()
//{
//    int n;
//    //��һ�а���һ��������n��1 �� n �� 1000��
//    int arr1[1000] = { 0 }; //��Ϊ��������洢��Ϣ
//    int arr2[1000] = { 0 }; //��Ϊ�����������ɸѡȥ�غ������
//    scanf("%d", &n);
//    int num = 0;//����ͳ��ȥ�غ�Ԫ�صĸ���
//    for (int i = 0; i < n; i++) {
//        int sum = 0;//���ڱ�ʾ��Ԫ���Ƿ�Ϊ�ظ�Ԫ��
//        scanf("%d ", &arr1[i]);//���������
//        for (int j = 0; j < i; j++) {
//            if (arr2[j] == arr1[i]) { //��������������Ƿ��Ѿ����ڴ���
//                sum = 1;
//                break;
//            }
//        }
//        //sum=0˵��ifѭ��δ����������������޴���
//        //�������ֵ���������
//        if (sum == 0)
//        {   //˵����ʱΪ���ظ�Ԫ��
//            arr2[num] = arr1[i];//����Ԫ�ش洢��arr2���������
//            num++;//����++
//        }
//    }
//    for (int i = 0; i < num; i++) { //���ȥ�غ������
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int n;
//    int i, j = 0;
//    int a[100] = { 0 };
//    scanf("%d ", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &a[i]);
//    }
//    for (i = 0; i < n; i++) {
//        for (j = i + 1; j < n; j++) {
//            if (a[i] == a[j])
//                a[j] = 0;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] != 0)  //����0ʱ�����
//        {
//            printf("%d ", a[i]);
//        }
//    }
//}
//#include <stdio.h>
//int prime(int m)
//{
//	if (m == 0 || m == 1)
//	{
//		return 0;
//	}
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
//	int sum = 0;
//	int x;
//	scanf("%d", &x);
//	for (int i =1 ; i <= x; i++)
//	{
//		if (prime(i) == 1)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d\n", sum);
//	printf("%d\n", x - sum - 1);
//	return 0;
//}
//������
//#include <stdio.h>
//int main()
//{
//	int a[100];
//	int b,sum=0,c;
//	scanf("%d", &b);
//	for (int i = 0; i < b; i++)
//	{
//		scanf("%d ", &a[i]);
//	}
//	scanf("%d", &c);
//	for (int i = 0; i < b; i++)
//	{
//		if (a[i] == c)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//���ξ���
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[30][30];
//	for (int i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//
//	for (int i = 2; i < n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���;���
#include<stdio.h>
void Visit(int a[][100], int n)
{
    int p = 0, q = n - 1;
    int count = 0;

    while (count < n * n)
    {
        for (int i = p; i <= q; i++)//�����濪ʼ��ֵ  
            a[p][i] = ++count;
     // �в��䣬�б�  ��һ�е�4������++���
        for (int i = p + 1; i <= q; i++)//���ұ߿�ʼ��ֵ
            a[i][q] = ++count;
     // �в��䣬�б� ��n�У��ӵڶ��п�ʼ����++���
        for (int i = q - 1; i >= p; i--)//�����濪ʼ��ֵ
            a[q][i] = ++count;
     // �в��䣬�б䣬�ӵ�n�п�ʼ�����ڶ��п�ʼ����++���
        for (int i = q - 1; i >= p + 1; i--)
            a[i][p] = ++count;
     //�в��䣬�б�
     //countһֱ�Ӽӣ��ж��Ƿ�С��n*n�����С��n*n���ظ�ѭ��
        p++;
        q--;
    }


}
void Print(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int n, a[100][100];
    scanf("%d", &n);
    Visit(a, n);
    Print(a, n);
    return 0;
}
