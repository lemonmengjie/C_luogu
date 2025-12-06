#include<stdio.h>
int main()
{
    long n=0;
    long s=0;
    long a=1;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        a=i*a;
        s=s+a;
    }
    printf("%lld",s);
    return 0;
}