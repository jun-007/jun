#include<stdio.h>
#include<string.h>

#define MAX 1000
#define NAME_MAX 15
#define SEX_MAX  10
#define TELE_MAX 12
#define ADDR_MAX 30

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct peoinfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//通讯录类型
struct contact
{
	struct peoinfo date[MAX];//存放一个人的信息
	int size;//记录当前已有的元素个数
};

//函数声明
void InitContact(struct contact* ps);
void AddContact(struct contact* ps);
void showcontact(const struct contact* ps);
void DelContact(struct contact* ps);
void SearchContact(const struct contact* ps);
void ModifyContact(struct contact* ps);
void Sortcontact(struct contact* ps);