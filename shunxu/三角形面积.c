#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b=0,c=0;
    float p=0,s=0;
    scanf("%d %d %d",&a,&b,&c);
    p=0.5*(a+b+c);
    s=sqrt(p)*sqrt(p-a)*sqrt(p-b)*sqrt(p-c);
    printf("%.1f",s);
    return 0;

}