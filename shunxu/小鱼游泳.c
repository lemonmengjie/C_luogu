#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((d-b)<0)
    {
        f=d+60-b;
        e=c-a-1;

    }
    else
    {
        f=d-b;
        e=c-a;
    }
    printf("%d %d",e,f);
    return 0;
}