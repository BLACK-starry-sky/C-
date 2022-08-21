#define  _CRT_SECURE_NO_WARNINGS 1
// 打印图案训练
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
//		for (int i = 0; i < x; i++)  //打印行数 
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
//直角三角形
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x; i++)  //打印行数
//		{
//			for (int j = 0; j < i; j++)  //第i行打印i个*
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//翻转直角三角形
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x; i++)
//		{
//			for (int j = 0; j < (x - i + 1); j++)    //j<(x-i+1)表示第i行的*个数
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//带空格的直角三角形
//#include <stdio.h>
//int main()
//{
//	int s;
//	while (scanf("%d", &s) != EOF)
//	{
//		for (int i = 1; i <= s; i++) //行数
//		{
//			for (int j = 0; j < (s - i); j++)  //打印空格
//			{
//				printf(" ");
//			}
//			for (int k = 0; k <i; k++)  //打印*
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
// 金字塔
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
//翻转金字塔
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
// 菱形
//#include <stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		for (int i = 1; i <= x + 1; i++)
//			{//打印前三行，行数
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
//K图形
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
//箭形图案
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
//打印反/正 斜线
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