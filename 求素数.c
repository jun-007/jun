#include<stdio.h>
/*int main()
{
    //������
    //�������жι���
    //������ֻ�ܱ�һ�ͱ�����������
    //1.�Գ���
    int i=0;
    int count=0;
    for(i=100;i<=200;i++)
    {
        int j=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
               break;
            }

        }
        if(i==j)
        {
            printf("%d ",i);
                count++;
        }
    }
    printf("\ncount=%d\n",count);

    return 0;
}*/

#include<math.h>
//sqrt--��ƽ������ѧ�⺯��
int main()
{
    int i=0;
    int count=0;
    for(i=101;i<=201;i+=2)
    {
        int j=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }

    }
    if(j > sqrt(i))
    {
        count++;
    printf("%d\n",i);
    }
    }
    printf("\n%d\n",count);
    return 0;
}
//<<��������n�־���>>
