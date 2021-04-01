#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//水仙花数（自幂数）
		//1.计算i有多少位数-n
		int n = 1;
		int tmp = i;
		while (tmp/=10)
		{
			n++;
		}
		//2.计算每位数的n次方之和-sum
		int sum = 0;
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.判断i是否等于sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
