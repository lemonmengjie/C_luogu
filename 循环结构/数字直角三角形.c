#include<stdio.h>
int main()
{
    int n=0;
    int i=0;
    int curr=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            printf("%02d",curr);
            curr++;
            
        }
        printf("\n");

    }
    return 0;

}