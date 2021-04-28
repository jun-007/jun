#include"contact.h"
void InitContact(struct contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}
void AddContact(struct contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������->:");
		scanf_s("%s",ps->date[ps->size].name,20);
		printf("����������->:");
		scanf_s("%d",&( ps->date[ps->size].age));
		printf("�������Ա�->:");
		scanf_s("%s", ps->date[ps->size].sex,5);
		printf("������绰->:");
		scanf_s("%s", ps->date[ps->size].tele,12);
		printf("�������ַ->:");
		scanf_s("%s", ps->date[ps->size].addr,20);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	    for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);

		}
	}
}

static int Findbyname( const struct contact* ps, char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ��������
}
void DelContact(struct contact* ps)
{
	char name  [NAME_MAX];
	printf("������Ҫɾ���˵����֣�>");
	scanf_s("%s", name,NAME_MAX);
	//1.����Ҫɾ���˵�λ��
	int pos=Findbyname(ps, name);
	//2.ɾ��
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}

void SearchContact(const struct contact* ps)
{
	char name[NAME_MAX];
	printf("������Ҫ���ҵ��û�����>\n");
	scanf_s("%s", name, NAME_MAX);
	int pos = Findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[pos].name,
				ps->date[pos].age,
				ps->date[pos].sex,
				ps->date[pos].tele,
				ps->date[pos].addr);

		
	}
}

void ModifyContact(struct contact* ps)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ��û�����>");
	scanf_s("%s", name, NAME_MAX);
	int pos = Findbyname(ps, name);
	
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������->:");
		scanf_s("%s", ps->date[ps->size].name, 20);
		printf("����������->:");
		scanf_s("%d", &(ps->date[ps->size].age));
		printf("�������Ա�->:");
		scanf_s("%s", ps->date[ps->size].sex, 5);
		printf("������绰->:");
		scanf_s("%s", ps->date[ps->size].tele, 12);
		printf("�������ַ->:");
		scanf_s("%s", ps->date[ps->size].addr, 20);
		ps->size++;
		printf("�޸ĳɹ�\n");
	}

}


void Sortcontact(struct contact* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		for (int j = 0; j < ps->size - i - 1; j++)
		{
			if (strcmp(ps->date[j].name, ps->date[j + 1].name) > 0)
			{
				struct  peoinfo temp ;
				temp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = temp;

			}
		}
	}

}