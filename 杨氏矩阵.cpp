//���Ͼ���
//��һ�����־��󣬴����ҵ��������ϵ��µ��������д�����ھ����в���һ�������Ƿ����
//���Ҵ�������o��n��
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
	//�Ҳ�����
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
		printf("�ҵ���\n");
		printf("�±�Ϊ��%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
