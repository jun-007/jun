#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("���������룺");
        scanf("%s",&password);
        if(strcmp(password,"123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
        {
            printf("������ȷ,��½�ɹ�\n");
            break;
        }
        else
        {
            printf("�������\n");
        }
    }
    if(i==3)
    {
        printf("���������꣬�����˳�\n");
    }
    return 0;
}
