#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//ˮ�ɻ�������������
		//1.����i�ж���λ��-n
		int n = 1;
		int tmp = i;
		while (tmp/=10)
		{
			n++;
		}
		//2.����ÿλ����n�η�֮��-sum
		int sum = 0;
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.�ж�i�Ƿ����sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
