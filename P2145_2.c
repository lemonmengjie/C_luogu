#include <stdio.h>

int main()
{
    int n = 30;
    int num[30]={0};
    int a = 0;
    int i = 0;
    char c;
    do{
        scanf("%d", &num[i]);
        i++;
    }while((c = getchar()) != '\n');

    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}