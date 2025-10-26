#include <stdio.h>

int main()
{
    int n = 30;
    int num[30];
    int a = 0;
    int i = 0;
    while (scanf("%d", &a) != EOF)
    {
        num[i] = a;
        i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}