//喝汽水 20块钱买汽水，一块钱一瓶，喝完的空品2个换一瓶汽水，请问能换多少瓶（编程实现）
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf_s("%d", &money);
	//买回来的汽水喝掉
	total = money;
	empty = total;
	//换回来的汽水
	while (empty >= 2)
	{
		total = total+empty / 2 ;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}

//相当于0.5块一瓶汽水，但最后剩下一瓶。
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf_s("%d", &money);
	//买回来的汽水喝掉
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = 2 * money - 1;
	}
	printf("%d\n", total);
	return 0;
}
