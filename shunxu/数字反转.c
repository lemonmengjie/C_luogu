#include<stdio.h>
int main()
{
    float a=0;
    float b=0;
    scanf("%f",&a);
    int c=a*10;
    do{
        b=b*10+c%10;
        c=c/10;
    }while(c>0);
    b=b*(0.001);
    printf("%.3f",b);
    
    return 0;
}