#include<stdio.h>
/*int main()
{
    //求素数
    //素数的判段规则
    //素数是只能被一和本身整除的数
    //1.试除法
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
//sqrt--开平方的数学库函数
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
//<<素数求解的n种境界>>
