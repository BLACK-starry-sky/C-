#define  _CRT_SECURE_NO_WARNINGS 1
//�����������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	float n = 0, m = 0,p=0;
//	n = a + b + c;
//	p = 0.5 * n;
//	m = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("circumference=%.2f area=%.2f\n", n, m);
//	return 0;
//}
//�¶�ת��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	float f, c=0.0;
//	scanf("%f", &f);
//	c = (5.0 / 9.0);   // cΪfloat �ͱ��뱣֤  /  ������Ϊx.0
//	c = c * (f - 32);
//	printf("%.3f\n", c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	scanf("%d", &r);
//	float sum = 0.0;
//	sum = 3.14 * r * r;
//	printf("%.2f\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float a, b;
//	scanf("%f%f", &a, &b);
//	float sum = 0.0;
//	sum = (a * b) / (a + b);
//	printf("%.4f\n", sum);
//	return 0;
//}
// 
//����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a1[20] = { 0 };
//	char a2[] = { "helllo world" };
//	strcpy(a1, a2);
//	printf("%s\n", a1);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a1[] = { "Hello,world" };
//	memset(a1, 'x', 5); //ǰ����ַ�ת��
//	printf("%s\n", a1);
//	return 0;
//}
//�����ú���ʱ
//ʵ�δ��ݸ��β�ʱ���βν���ʵ�ε�һ����ʱ����
//���Զ��βε��޸��ǲ�Ӱ��ʵ�ε�
//#include <stdio.h>
//int get_max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}
#include <stdio.h>
void swap(int *px,int *py)
{
	int t = 0;

	t=*px; //t=a
	*px=*py; //a=b;
	*py = t; //b=t
}
int main()
{
	int a = 0, b = 0;
	scanf("%d%d", & a, & b);
	printf("����ǰ%d %d\n", a, b);
	swap(&a, &b);
	printf("������%d %d\n", a, b);
	return 0;
}