//����ˮ 20��Ǯ����ˮ��һ��Ǯһƿ������Ŀ�Ʒ2����һƿ��ˮ�������ܻ�����ƿ�����ʵ�֣�
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf_s("%d", &money);
	//���������ˮ�ȵ�
	total = money;
	empty = total;
	//����������ˮ
	while (empty >= 2)
	{
		total = total+empty / 2 ;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}

//�൱��0.5��һƿ��ˮ�������ʣ��һƿ��
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf_s("%d", &money);
	//���������ˮ�ȵ�
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
