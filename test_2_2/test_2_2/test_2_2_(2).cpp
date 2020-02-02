#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int ADD(int x, int y)
{
	//printf("sum=%d\n", x + y);
	return x + y;
}

int add()
{
	int i,sum=0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return sum;
}