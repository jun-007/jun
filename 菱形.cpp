#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <line-1-i ; j++)
		{
			printf(" ");
		}
		//打印星
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	//打印下部分
	for (i = 0; i <line-1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印星
		for (j = 0; j <2*(line-i-1)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
