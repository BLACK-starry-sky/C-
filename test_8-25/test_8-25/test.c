#define  _CRT_SECURE_NO_WARNINGS 1
//ÅÐ¶Ï²»ÊÇ×ÖÄ¸
//#include <stdio.h>
//int main()
//{
//	char s;
//	while (scanf("%c",&s) != EOF)
//	{
//		getchar();
//		if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))  // ÔÚ×ÖÄ¸·¶Î§ÄÚ
//			printf("%c is an alphabet.\n", s);
//		else
//		   printf("%c is not an alphabet.\n", s);
//	}
//	return 0;
//}
//´óÐ¡Ð´×ÖÄ¸µÄ×ª»»
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
// Íø¹º
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
#include <stdio.h>
//ÅÐ¶ÏÈòÄê
int asd(int m)
{
    if ((m % 4 == 0) && (m % 100 != 0) || (m % 400 == 0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int x[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        if (asd(a) == 1)
        {
            x[1] = 29;
        }
        else
        {
            x[1] = 28;
        }
        printf("%d\n", x[b - 1]);
    }
    return 0;
}