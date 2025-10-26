#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  N 400000
int a[N];
int main()
{
    int n,k,count=0,q=0,j=1;
    scanf("%d",&n);
    do
    {
        scanf("%d",&k);
        a[j]=k;
        j++;
    }while(getchar()!='\n');
    for(int i=1;i<=j-1;i++)
    {
        for(int p=1;p<=a[i];p++)
        {
            printf("%d",q);
            count+=1;
            if(count==n)
            {
                putchar('\n');
                count=0;
            }
        }
        q=1-q;
    }
    putchar('\n');

}