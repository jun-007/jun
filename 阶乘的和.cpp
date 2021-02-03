#include<stdio.h>
int main()
{
    //算1！+2！+3！....n!
    int i=0;
    int sum=0;//存所有阶乘的和
    int n=0;
    int ret=1;//存一个阶乘
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

