#include<stdio.h>
int main()
{
    const int dengzi=30;
    int a[10]={0};
    int b=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]<=dengzi+b)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;

}