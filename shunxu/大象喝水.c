#include<stdio.h>
#include<math.h>
int main()
{
    int h=0,r=0,v1=20000;
    float v0=0;
    const float PI=3.14;
    scanf("%d %d",&h,&r);
    v0=PI*r*r*h;
    int n=0;
    n=(int)ceil(v1/v0);
    printf("%d",n);
    return 0;



}