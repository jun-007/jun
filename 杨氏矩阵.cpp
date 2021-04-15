//杨氏矩阵
//有一个数字矩阵，从左到右递增，从上到下递增，请编写程序在矩阵中查找一个数字是否存在
//查找次数少于o（n）
#include<stdio.h>
int findnum(int arr[3][3], int k,int*px,int*py)
{
	int x = *px-1;
	int y = *py - 1;
	while (x <= *px- 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到了
	return 0;
	
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = findnum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
