//������
//����Ϊ4�����е�һ��
//A˵��������
//B˵����C	
//C˵����D
//D˵��C�ں�˵
//дһ���������ж�˭������
#include<stdio.h>
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer��%c\n", killer);
		}
	}
	return 0;
}
