#define  _CRT_SECURE_NO_WARNINGS 1
//  ���������� 1.ֻ������ĸ��������Сд���������»��ߣ�_�����
//             2.���������ֿ�ͷ
//             3.���Ȳ��ܳ���63�ַ�
//             4.�����������ִ�Сд
//             5.���������ܳ��ֹؼ���

//������������Щ�������  �з���
//   1.���泣��  100��3.14   'a'  
//   2.const���εĳ�����
//   3.#define ��ʶ������
//   4.ö�ٳ���
//#include <stdio.h>
//#include <string.h>
//#define MAX 100
//int main()
//{
	//const int num = 10;  //���ܱ��ı�  �����﷨�������ĳɳ���
	//num = 20;
	//printf("%d\n", num);
	/*int a[10]={0};*/
	/*const int n = 10;
	int arr[n] = { 0 };
	return 0;*/
	/*printf("%d\n", MAX);
	return 0;*/
//}
//ö�٣�һһ���о�
// ö�ٵĹؼ��֣�enum
enum Sex   //����������ȡֵ��ö�ٳ���
{
	MALE,
	FEMALE,
	SECRET
};
//int main()
//{
	//enum Sex s=MALE
	/*printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);*/
	/*char a[] = "abc";
	char a1[] = { 'a','b','c',};
	printf("%s\n", a);
	printf("%s\n", a1);
	printf("%d\n", strlen(a1));
	return 0;
}*/
//  '\0'���ַ����Ľ�����־
//  %s ��ӡ�ַ���������\0��ӡ�Զ�����
// string strlen ���ַ�������   ͷ�ļ�#include <string.h>
// strlen ֻ�����\0֮ǰ���ַ��ĸ���
//ת���ַ���ת��ԭ�е���˼
//int main()
//{
//	printf("c:\\test\\test.c\n");
//	printf("abc\\ndef\n");
//	printf("\'\n");
//	printf("\"\n");
//	printf("\\\\");
//	return 0;
//}
// ��ת���ǰ����  \   �Ϳɴ�ӡ�����磺\n,\t,\?
//�����ת���ַ�  \ddd:��ʾ1-3�İ˽�������
// \xdd:��ʾ2��16��������
// 123��ʮ���� ת ʮ���ƣ�3*10��0�η�+2*10��1�η�+1*10��2�η�=123
// 130�İ˽��� ת ʮ���ƣ�0*8��0�η�+3*8��1�η�+1*8��2�η�=88
// �ַ��ı��-ASC-II�����  A:65  a:97   0:48
//int main()
//{
//	printf("%c\n", '\62');//130����˽�������ת����ʮ����������ΪASC-IIֵ����ʾ���ַ�Ϊ'X'
//	printf("%c\n", '\x40');// 40ʮ������ ת ʮ���ƣ�0*16��0�η�+4*16��1�η�=64  
//	printf("%d\n",strlen("c:\test\628\test.c")); // c : \t e s t \62 8 \t e s t . c
//	return 0;
//}
//int main()
//{
//	int input;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ�𣿣�1/0��\n");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int light = 0;
//	while (light<=20)
//	{
//		printf("д����%d\n",light);
//		light++;
//	}
//	if (light == 21)
//	printf("�ߺ����");
//	return 0;
//}
// ���飺һ����ͬ����Ԫ�صļ���
//��ʼ��
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a1[10] = { 1,2,3 };//����ȫ��ʼ����ֵ��ʼ��ǰ3����ʣ��ĳ�ʼ��Ϊ0
//	int a2[] = { 1,2,3 };//��ʱĬ��[]����Ϊ3
//	//int a3[];err
//	int a4[10];//����������������
//}
// GCC-֧��C99
//int main()
//{
//	int n = 10;
//	int a[n];//C99 �䳤���飬���������ٴ�����ʱ������Ĵ�С�ñ���ָ�������������鲻�ܳ�ʼ������ǰ�ǲ�֧�ֵ�
//	return 0;
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����Ǵ�0��ʼ�ģ�����������1��0~9Ҳ��С��
//	//printf("%d\n", a[8]);
//	int j = 0;
//	while (j<10)
//	{
//		scanf("%d", &a[j]);
//		j++;
//	}
//	int i = 0;
//	while (i<10&&i>=0)
//	{
//		printf("%d ", a[i]);
//		i++;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 12; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2; k++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}