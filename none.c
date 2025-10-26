#include <stdio.h>
#include <stdlib.h>
void Input(int *p);
int main()
{
    int a[2];
    Input(a);
    printf("%d %d",a[0],a[1]);
    return 0;
}

void Input(int *p)
{
    scanf("%d %d",p,p+1);
    
}