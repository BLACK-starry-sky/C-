#define  _CRT_SECURE_NO_WARNINGS 1
// ��ӡͼ��ѵ��
//#include <stdio.h>
//int main()
//{
//	int s;
//	while (scanf("%d", &s) != EOF)
//	{
//		for (int i = 1; i <= s; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 0; i < x; i++)  //��ӡ���� 
//		{
//			for (int j = 0; j < x; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//ֱ��������
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x; i++)  //��ӡ����
//		{
//			for (int j = 0; j < i; j++)  //��i�д�ӡi��*
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//��תֱ��������
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < (x - i + 1); j++)    //j<(x-i+1)��ʾ��i�е�*����
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//���ո��ֱ��������
//#include <stdio.h>
//int main()
//{
//	int s;
//	while (scanf("%d", &s) != EOF)
//	{
//		for (int i = 1; i <= s; i++) //����
//		{
//			for (int j = 0; j < (s - i); j++)  //��ӡ�ո�
//			{
//				printf(" ");
//			}
//			for (int k = 0; k <i; k++)  //��ӡ*
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
// ������
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
//��ת������
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < (x - i + 1); k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
// ����
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x + 1; i++)
//			{//��ӡǰ���У�����
//			for (int j = 0; j < (x - i + 1); j++)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < i ; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < i ; j++)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < (x - i + 1); k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//Kͼ��
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x + 1; i++)
//		{
//			for (int j = 0; j < (x - i + 2); j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//����ͼ��
//#include <stdio.h>
//int  main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x + 1; i++)
//		{
//			for (int j = 0; j < (x + 1 - i); j++)
//			{
//				printf("  ");
//			}
//			for (int k = 0; k < i; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (int k = 0; k < (x - i + 1); k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//��ӡ��/�� б��
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < x - i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
    char a;
    while (scanf("%c", &a) != EOF)
    {
        if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'i' || a == 'I' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    return 0;
}