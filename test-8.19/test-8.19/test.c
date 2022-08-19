#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int asd(int m)
{
	int i;
	for (i = 2; i * i <= m; i++)
	{
		if (m % i == 0)
			return 0;
	}
	return 1;
}
int ast(int n)
{
	int sum;
	sum = n % 10;
	if (sum != 1)
	{
		return 0;
	}
	return 1;
}
int main()
{
	for (int i = 10; i <= 100; i++)
	{
		if (asd(i) == 1 && ast(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}