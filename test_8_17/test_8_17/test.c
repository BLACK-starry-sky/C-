//C���Գ��ñ�����    GCC���ձ飩  MSVC(VS 2022)
// .c C���Ե�Դ�ļ�    .cpp   c plus plus  C++Դ�ļ��ĺ�׺  
//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//printf("hahah\n");
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n",a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("����\n");
//	printf("����\n");
//	printf("����\n");
//	printf("����\n");
//	return 0;
//}
// ������ĵ�λ
// bit
// byte-�ֽ�     1byte=8bit
// kB            1kb=1024byte
// MB            1MB=1024KB
// GB            1GB=1024MB
// TB            1TB=1024GB
// PB            1PB=1024TB
// 
//  ���ǵĵ�λ���ֽ�
#include <stdio.h>
//int main()
//	printf("%d\n", sizeof(char));    1�ֽ�
//	printf("%d\n", sizeof(short));   2�ֽ�
//	printf("%d\n", sizeof(int));     4�ֽ�
//	printf("%d\n", sizeof(long));    4�ֽ�   ��C�����еı�׼�涨sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));    8�ֽ�
//	printf("%d\n", sizeof(float));        4�ֽ�
//	printf("%d\n", sizeof(double));       8�ֽ�
//	printf("%d\n", sizeof(char));
//	return 0;
//}
// ����˵˵����
// 10������������0~9
// 2��������������0~1
// 8��������������0~7
// 16������������0~9   +   a~f
// ���м����Ϊ2����  2�����е� 0����һ��bit   1Ҳ��һ��bit
//main������������˼
//mian �ǳ������ڣ����ҽ���һ��
//ʾ������һ����Ŀ�����У����԰����ܶ�.c�ļ�,�����.c�ļ���ֻ����һ��main����
//������ע��ȥ����main����



//stdio.h�ĺ��壺 std input output
// .h header
//��׼���������ͷ�ļ� #include <stdio.h>


//ͨ�����ǻ������ϣ��������ϻῴ�� void mian() ,���Ǻܹ��ϵ�д��������
//  main() ����׼        int main(void)��ʾmain��������Ҫ����
//һ������ĵ�   float weight=55.6f   
//55.6 :��������Ĭ��Ϊ��double
//55.6f :����������Ϊ��float



//���ھֲ�������ȫ�ֱ��������
//int a = 20;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//�ֲ�������ȫ�ֱ��������ֿ�����ͬ�������Ǽȿ���ʹ�þֲ����ֿ���ʹ��ȫ�ֱ�����ʱ�򣬾ֲ��������ȡ�

int g_val = 10;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern ���������ⲿ�ķ���
