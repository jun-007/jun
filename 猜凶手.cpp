//猜凶手
//凶手为4个人中的一个
//A说：不是我
//B说：是C	
//C说：是D
//D说：C在胡说
//写一个程序来判断谁是凶手
#include<stdio.h>
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer是%c\n", killer);
		}
	}
	return 0;
}
