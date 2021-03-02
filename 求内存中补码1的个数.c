#include<stdio.h>
int main()
{
    int i=0;
    int count=0;
    int mun=0;
    scanf("%d",&mun);
    for(i=0;i<32;i++)
    {
        if((mun>>i &1)==1)
        count++;
    }
//    while(i)  //-1²»ÐÐ
//    {
//        if(i%2==1)
//        count++;
//        i=i/2;
//    }
    printf("%d\n",count);
    return 0;
    
}

