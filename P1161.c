#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    scanf("%d",&n);
    double a[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&a[i][0],&a[i][1]);
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        temp=(int)(a[i][0]*a[i][1]);
        if(temp>max) max=temp;
    }
    int b[max];
    for(int i=0;i<max;i++) b[i]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i][1];j++)
        {
            int temp;
            temp=(int)(a[i][0]*j);
            // printf("%d ",temp);
            b[temp-1]++;
        }
    }
    // printf("\n");
    for(int i=0;i<max;i++)
    {
        if(b[i]%2==1){
            printf("%d\n",i+1);
            // printf("%d\n",b[i]);
        } 
    }
    return 0;
}