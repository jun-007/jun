#include<stdio.h>
//1
/*int main()
{
    int i=0;
    while(i<100)
    {
        if(i%3==0)
        printf("%d\n",i);
        i++;
    }
    return 0;
} */
//2
/*int main()
{
    int i=0;
    for(i=0;i<100;i++)
    {
        if(i%3==0)
        printf("%d\n",i);
    }
    return 0;
}*/
//3
int main()
{
    int i=0;
    do
    {
    if(i%3==0)
    printf("%d\n",i);
    i++;
    }
    while(i<100);
    return 0;
}
    
