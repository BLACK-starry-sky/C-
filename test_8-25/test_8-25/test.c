#define  _CRT_SECURE_NO_WARNINGS 1
//�жϲ�����ĸ
//#include <stdio.h>
//int main()
//{
//	char s;
//	while (scanf("%c",&s) != EOF)
//	{
//		getchar();
//		if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))  // ����ĸ��Χ��
//			printf("%c is an alphabet.\n", s);
//		else
//		   printf("%c is not an alphabet.\n", s);
//	}
//	return 0;
//}
//��Сд��ĸ��ת��
//#include <stdio.h>
//int main()
//{
//	char s;
//	while (scanf("%c", &s) != EOF)
//	{
//
//		if (s >= 'a' && s <= 'z')
//		{
//			s = s - 32;
//			printf("%c\n", s);
//		}
//		else if (s >= 'A' && s <= 'Z')
//		{
//			s = s + 32;
//			printf("%c\n", s);
//		}
//	}
//	return 0;
//}
// ����
//#include <stdio.h>
//int main()
//{
//	float x,sum=0.0;
//	int a, b, c;
//	scanf("%f%d%d%d", &x, &a, &b, &c);
//	if (a ==11 && b == 11)
//	{
//		sum = x * 0.7-50.0*c;
//	}
//	else if (a == 12 && b == 12)
//	{
//		sum = x * 0.8-50*c;
//	}
//	if (sum < 0)
//	{
//		printf("0.00\n");
//	}
//	else
//	{
//		printf("%.2f\n", sum);
//	}
//	return 0;
//}
//#include <stdio.h>
////�ж�����
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
//#include <stdio.h>
//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        if (a >= 'a' && a <= 'z')
//        {
//            a = a - 32;
//            printf("%c\n", a);
//        }
//        else if (a >= 'A' && a <= 'Z')
//        {
//            a = a + 32;
//            printf("%c\n", a);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    if (a + b > 7)
//    {
//        if((a+b)%7==0)
//        {
//            printf("7\n");
//        }
//        else
//        printf("%d\n", (a + b) % 7);
//    }
//    else
//    {
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int s;
//	scanf("%d", &s);
//	float a[100];
//	float max=0.0, min=1e9,sum=0.0;
//	for (int i = 0; i < s; i++)
//	{
//		scanf("%f", &a[i]);
//	}
//	for (int i = 0; i < s; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//		sum += a[i];
//	}
//	printf("%.2f %.2f %.2f\n", max, min, sum / s);
//	return 0;
//}
//#include <stdio.h>
//// do while ѭ��
//int main()
//{
//	int i = 1;
//	do 
//	{
//		printf("%d ", i);
//		i++;
//	}
//		while (i <= 10);
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	float sum = 0.0;
//	sum = 3.14 * a * b * b;
//	int c = 10000,d=0;       //1���� 1000cm����
//	while (c > 0)
//	{
//		c = c - sum;
//		d++;
//	}
//	printf("%d\n", d);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int s;
//	scanf("%d", &s);
//	float sum = 0.0;
//	sum = (4.0/3.0) * 3.14 * s * s * s;
//	printf("%.2f\n", sum);
//	return 0;
//}
//���ֲ���
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);  //����Ԫ�ظ���
//	int left = 0, right = sz - 1;
//	int k = 0; //K����ҪѰ�ҵ���
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;  
//		}
//	}
//	if (left > right)
//	{
//		printf("-1\n");
//	}
//	return 0;
//}

//�м���
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
// ...
//welcome to bit!!!!!
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char a1[] = "welcome to bit!!!!!";
//	char a2[] = "###################";
//	int left = 0;
//	int right = strlen(a1) - 1;
//	while (left <= right)
//	{
//		a2[left] = a1[left];
//		a2[right] = a1[right];
//		printf("%s\n", a2);
//		Sleep(1000);   //���ߺ������Ǻ����仯������
//		system("cls");   //��һ����ˢ��  ������Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}
// 
// ģ���û���¼�龰������ֻ�����¼����
// strcmp �ַ����Ƚ�
// >0
// <0
// ==0
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������: >");
//		scanf("%s", password);
//		//�ж�������ȷ��
//		if (strcmp(password ,"bitbit")==0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}

//��������Ϸ
//�����������1-100������
//��β´��ˣ���֪�´���
// ...

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("***********  1.paly  ************\n");
//	printf("***********  0.exit  ************\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	int guess = 0;
//	//1.���������   rand����
//	int ret=rand()%100;  // %100 ����ֻ����0-99
//	//printf("%d\n", ret);
//	//������
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	// ���������������
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//		    break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
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
//    for (int i = 1; i <= 100; i++)
//    {
//        sun += asd(i);
//    }
//    printf("%d\n", sun);
//    return 0;
//}
// goto ���
//#include <stdio.h>
//int main()
//{
//	int s = -1;
//	float u = 1;
//	float sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += u / i;      //�����������ͱ��뱣��һ��
//		u = s*u;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//ˮ�ɻ�
#include <stdio.h>
int main()
{
    int m,n;
    int a, b, c;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        int j = 0;
        for (int i = m; i <= n; i++)
        {
            a = i % 10;
            b = i / 10 % 10;
            c = i / 100;
            if (i == (a * a * a) + (b * b * b) + (c * c * c))
            {
                printf("%d ", i);
                j++;
            }
        }
        if (j == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}