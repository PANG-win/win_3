#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 1-100之间数字的和；
//extern int ADD(int x, int y);
//extern int add(int x, int y);
//int main()
//{
//	int i,sum=0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum =ADD(sum, i);
//		//sum = sum + i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//100-200之间不能被三整除的数(任意两数之间不能被三整除的数，任意两数之间不能被指定数整除的数及个数)；
//int main()
//{
//	int i, count = 0, j, a, b;
//	printf("请输入起始数字并点击enter键\n");
//	scanf("%d", &a);
//	printf("请输入终止数字并点击enter键\n");
//	scanf("%d", &b);
//	printf("请输入指定被除数并点击enter键\n");
//	scanf("%d", &j);
//	for (i = a; i <= b;i++)
//	//for (i = 100; i <= 200; i++)
//	{
//		if (i%j!=0)
//		//if (i % 3 != 0)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//输出4*5的矩阵（输出N阶矩阵）；
//int main()
//{
//	int i,N;
//	printf("请输入N阶矩阵阶数N并点击enter键\n");
//	scanf("%d", &N);
//	for (i = 1; i <= N;i++)
//	//for (i = 1; i <= 4; i++)
//	{
//		int j;
//		for (j = 1; j <= N;j++)
//		//for (j = 1; j <= 5; j++)
//		{
//			printf("%3d ", i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//声明函数体并调用；
//extern int ADD(int x, int y);
//int main()
//{
//	ADD(2, 3);
//	//printf("sum=%d\n", ADD(2, 3));
//	return 0;
//}
//交换两个整形变量的值(创建新的整形变量)；
//int main()
//{
//	int a, b, t;
//	printf("请输入两个整形变量的值并点击enter键\n");
//	scanf("%d%d", &a, &b);
//	printf("a=%d  b=%d(交换变量之前)", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("\na=%d  b=%d(交换变量之后)\n", a, b);
//	return 0;
//}
//交换两个整形变量的值（数组）；
//int main()
//{
//	int a[2];
//		printf("请输入两个整形变量的值并点击enter键\n");
//	scanf("%d%d", &a[0], &a[1]);
//	printf("a[0]=%d  a[1]=%d(交换之前的值)\n", a[0], a[1]);
//	a[2] = a[0];
//	a[0] = a[1];
//	a[1] = a[2];
//	printf("a[0]=%d  a[1]=%d(交换之后的值)\n", a[0], a[1]);
//	return 0;
//}
//求十个整数中最大值；
//int main()
//{
//	int i , a[9] , max = 0;
//	printf("请输入十个整数并点击enter键\n");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//max = a[0];
//	for (i = 0; i<=9; i++)
//		{
//			if (a[i] >max)
//			max = a[i];
//		}
//	printf("max=%d\n", max);
//	return 0;
//}
//将三个数按从大到小输出；
//int main()
//{
//	int a, b, c;
//	printf("请输入三个整数并点击enter键\n");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d %d %d\n",a,b,c);
//	if (a > b&&b>c)
//	{
//		printf("%d %d %d\n", a,b,c);
//	}
//	else if (a > b&&a < c)
//	{
//		printf("%d %d %d\n", c, a, b);
//	}
//	else if (a>c&&c > b)
//	{
//		printf("%d %d %d\n", a, c, b);
//	}
//	else if (b > a&&a > c)
//	{
//		printf("%d %d %d\n", b, a, c);
//	}
//	else if (b > c&&c > a)
//	{
//		printf("%d %d %d\n", b, c, a);
//	}
//	else
//	{
//		printf("%d %d %d\n", c, b, a);
//	}
//	return 0;
//}
//任意两个整数的最大公约数；
//int main()
//{
//	int a, b, c;
//	printf("请输入任意两个整数并点击enter键\n");
//	scanf("%d%d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数=%d\n", b);
//	return 0;
//}
//娱乐
//int main()
//{
//	printf("|   |---|\\        /|----    \\    /|---||     |  \n");
//	printf("|   |   | \\      / |         \\  / |   ||     |  \n");
//	printf("|   |   |  \\    /  |____      \\/  |   ||     |  \n");
//	printf("|   |   |   \\  /   |          |   |   ||     |  \n");
//	printf("|___|___|    \\/    |____      |   |___||_____|  \n");
//	printf("\n\n");
//	return 0;
//}
//输入成绩判定等级；
//int main()
//{
//	int i;
//	printf("请输入你的成绩并点击enter键\n");
//	scanf("%d", &i);
//	if (i >= 90 && i <= 100)
//	{
//		printf("A\n");
//	}
//	else if (i >= 80 && i < 89)
//	{
//		printf("B\n");
//	}
//	else if (i >= 70 && i < 79)
//	{
//		printf("C\n");
//	}
//	else if (i >= 60 && i < 69)
//	{
//		printf("D\n");
//	}
//	else if (i>=0&&i<60)
//	{
//		printf("E\n");
//	}
//	return 0;
//}
//int main()
//{
//	int score;
//	printf("输入成绩\n");
//	scanf("%d", &score);
//	if (score>90)
//		printf("A\n");
//	else if (score >= 80 && score <= 90)
//		printf("B\n");
//	else if (score >= 70 && score <= 79)
//		printf("C\n");
//	else if (score >= 60 && score <= 69)
//		printf("D\n");
//	else if (score >= 0 && score <= 59)
//		printf("E\n");
//	return 0;
//}
//逆序输出10个数；

//int main()
//{
//	int arr[8] = { 'a', 'b', 'c', 'd', 'e', 'f', 'h', 'g' };
//	int A, B, C, D, a1 = 0, a2 = 0, a3 = 0, a4 = 0,count=0;
//	for (A = 0; A <= 7; A++)
//	{ 
//		for (B = 0; B <= 7; B++)
//		{
//			for (C = 0; C <= 7; C++)
//			{
//				for (D = 0; D <= 7; D++)
//				{
//				
//					count++;
//				}
//			}
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
