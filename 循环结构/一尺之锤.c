#include<stdio.h>
int main()
{
    int a=0,count=1;
    scanf("%d",&a);
    while(a>1)
    {
        a=a/2;
        count++;
    }
    printf("%d",count);
    return 0;
}