#include"contact.h"
void menu()
{
	printf("*******************************************\n");
	printf("*******1.add            2.del        ******\n");
	printf("*******3.search         4.modify     ******\n");
	printf("*******5.show           6.sort       ******\n");
	printf("*******0.exit                        ******\n"); 
	printf("*******************************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct peoinfo con[MAX];//con����ͨѶ¼�����������1000���˵���Ϣ��size
	//��ʼ��ͨѶ¼
	 InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;
		case SORT:
			Sortcontact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}