#define  _CRT_SECURE_NO_WARNINGS 1
// C�����ǽṹ���ĳ����������
// ˳��ṹ
// ѡ��ṹ  if  swich
// ѭ���ṹ  while for  do-while
//#include <stdio.h>
//int main()
//{
//	// ; ��ʾ�����
//	//ת����� �� break ,  goto,  continue,  return
//	int age = 20;
//	if (age < 18)  //if����Ĭ��ֻ��һ����䣬����ж�����������ϴ�����
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}
  // <18 ����
 //  18~30����
// 31~45����
// 46~60 ׳��
// 61~90 ����
// >90  ������
// if�����ʽ1��    ���ʽ1Ϊ��������1
    // ���1��
//  else if(���2)   ���ʽ1Ϊ�� ���ʽ2Ϊ�棬������2
    // ���2��
//  else             ���ʽ1��2��Ϊ�٣�������3
  //  ���3��
//#include <stdio.h>  //���֦���
//int main()
//{
//	int age = 0;
//	scanf("%d\n", &age);
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age <=30)
//		printf("����\n");
//	else if (age >= 31 && age <=45)
//		printf("����\n");
//	else if (age >= 46 && age <= 60)
//		printf("׳��\n");
//	else if (age >= 61 && age < 90)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}
// ��C�����У�0��ʾ�٣���0��ʾ��
// 
// 
//���յ�if���   else �ͽ�ԭ��ƥ��
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)    //*** �ص㣬else ��Զ���Լ����������if��һ��
//            printf("hehe\n");
//    else                          //��if(a==1)Ϊ��ʱ ����������Ͳ���ִ�У������
//            printf("haha\n");
//    return 0;
//}
// if��5==num�� ����������д�����
// ��ӡ����������
//#include <stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    for (int i = 1; i <= 3; i++)
//    {
//        for (int j = 0; j < (3 - i); j++)
//        {
//            printf(" ");
//        }
//        for (int k = 0; k < (2 * i - 1); k++)
//        {
//            printf("%c",a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <=x; i++)
//		{
//			for (int j = 0; j < x - i; j++)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//����������
//#include <stdio.h>
//int main()
//{
//    int x;
//    while (scanf("%d", &x) != EOF)
//    {
//        for (int i = 1; i <= x; i++)  //��ӡ ����
//        {
//            for (int j = 1; j <= x; j++)  //  ��ӡÿһ�е�*�źͿո�ȥ������������ 
//            {
//                if (i == 1 || i == x || j == 1 || j == x)  // j<= x������һ������ӡX��
//                {
//                    printf("* ");          // if��...��i�����ڵ�һ�У������У�
//                }                          // j ������һ�п��Դ�ӡ 1�������ĸ������������ж�
//                else                       // j �ʹ��� ��
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// ����������
//#include <stdio.h>
//int main()
//{
//    int s;
//    while (scanf("%d", &s) != EOF) //i ��������  j ��������
//    {
//        for (int i = 1; i <= s; i++)
//        {
//            for (int j = 1; j <= i; j++)  //  i����i������
//            {
//                if (i == 1 || i == 2 || i == s || j ==1 || j ==i)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//����������
//#include <stdio.h>
//int main()
//{
//    int x;
//    while (scanf("%d", &x) != EOF)
//    {
//        for (int i = 1; i <= x; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//�������
//#include <stdio.h>
//int main()
//{
//    int a[11];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", & a[i]);
//    }
//    for (int j = 9; j >= 0; j--)
//    {
//        printf("%d ", a[j]);
//    }
//    return 0;
//} 
//��������
//#include <stdio.h>
//int asd(int x ,int y)
//{
//    int a,sum=0;
//    while (x)
//    {
//        a = x % 10;
//        if (a == y)
//        {
//            sum++;
//        }
//        x = x / 10;
//    }
//    return sum;
//}
//int main()
//{
//    int x, s, a;
//    scanf("%d %d", &x, &s);
//    int sum = 0;
//    for (int i = 1; i <= x; i++)
//    {
//        sum += asd(i, s);
//    }
//    printf("%d \n", sum);
//    return 0;
//}
// swich ��ʹ��
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)   // ���α��ʽ
//    {
//        case 1:   //case ����������γ������ʽ
//            printf("����һ\n");
//            break;
//        case 2:
//            printf("���ڶ�\n");
//            break;
//        case 6:
//            printf("������\n");
//            break;
//        case 7:
//            printf("������\n");
//            break;
//        default:
//            printf("�������\n");
//            break;
//
//    }
//    return 0;
//}
//continue ��������ѭ��������ѭ��������벻��ִ�У�ֱ������hѭ������жϲ��֣�������һ��ѭ����ڵ��ж�
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch);  //��ӡ�ַ�
//    }
//    return 0;
//}
// �ص� getchar
//#include <stdio.h>
//int main()
//{
//    char password[20] = { 0 };
//    printf("��������");
//    scanf("%s", password);
//    // ����\n
//    int p=0;
//    while ((p = getchar()) != '\n')  //getchar ����ֵ������Ϊint   //��������
//    {
//        ;
//    }
//        printf("��ȷ�����루Y/N��");
//        int ch = getchar();
//        if (ch == 'Y')
//        {
//            printf("ȷ�ϳɹ�");
//        }
//        else
//        {
//            printf("ȷ��ʧ��");
//        }
//    
//    return 0;
//}
// ��ӡ����
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
//����·�����
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
