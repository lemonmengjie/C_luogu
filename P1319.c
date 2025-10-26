#include <stdio.h>
int a[40000];
int main()
{
    int k,count=0,q=0,j=0;
    do
    {
        scanf("%d",&a[j]);
        j++;
    }while(getchar()!='\n');
    int n = a[0];
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