#include<stdio.h>
int main()
{
    //��1��+2��+3��....n!
    int i=0;
    int sum=0;//�����н׳˵ĺ�
    int n=0;
    int ret=1;//��һ���׳�
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j=0;
        ret=1;
        for(j=1;j<=i;j++)
        {
            ret=ret*j;
        }
        sum=sum+ret;
    }
    printf("%d\n",sum);
    return 0;
}

