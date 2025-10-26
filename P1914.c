#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char a[50];
    scanf("%d", &n);
    scanf("%s", a);
    int i = 0;
    while (a[i] != '\0')
    {
        a[i] = 'a' + (n+(int)(a[i]-'a'))%26;
        i++;
    }
    printf("%s", a);
    return 0;
}   