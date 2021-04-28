#include"contact.h"
void InitContact(struct contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//设置通讯录最初只有0个元素
}
void AddContact(struct contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字->:");
		scanf_s("%s",ps->date[ps->size].name,20);
		printf("请输入年龄->:");
		scanf_s("%d",&( ps->date[ps->size].age));
		printf("请输入性别->:");
		scanf_s("%s", ps->date[ps->size].sex,5);
		printf("请输入电话->:");
		scanf_s("%s", ps->date[ps->size].tele,12);
		printf("请输入地址->:");
		scanf_s("%s", ps->date[ps->size].addr,20);
		ps->size++;
		printf("添加成功\n");
	}
}

void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");

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
	return -1;//找不到的情况
}
void DelContact(struct contact* ps)
{
	char name  [NAME_MAX];
	printf("请输入要删除人的名字：>");
	scanf_s("%s", name,NAME_MAX);
	//1.查找要删除人的位置
	int pos=Findbyname(ps, name);
	//2.删除
	if (pos==-1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}

void SearchContact(const struct contact* ps)
{
	char name[NAME_MAX];
	printf("请输入要查找的用户名：>\n");
	scanf_s("%s", name, NAME_MAX);
	int pos = Findbyname(ps, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改的用户名：>");
	scanf_s("%s", name, NAME_MAX);
	int pos = Findbyname(ps, name);
	
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字->:");
		scanf_s("%s", ps->date[ps->size].name, 20);
		printf("请输入年龄->:");
		scanf_s("%d", &(ps->date[ps->size].age));
		printf("请输入性别->:");
		scanf_s("%s", ps->date[ps->size].sex, 5);
		printf("请输入电话->:");
		scanf_s("%s", ps->date[ps->size].tele, 12);
		printf("请输入地址->:");
		scanf_s("%s", ps->date[ps->size].addr, 20);
		ps->size++;
		printf("修改成功\n");
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