#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[101];
    int i, j;
    gets(a);
    int l = strlen(a);
    int b[l];
    for (i = 0; i < l; i++)
    {
        b[i] = 0;
    }
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
                // printf("%c %d\n", a[i], b[i]);
            }
        }
    }
    int maxn = b[0];
    int minn = b[0];
    for (i = 0; i < l; i++)
    {
        if (b[i] > maxn)
        {
            maxn = b[i];
        }
        if (b[i] < minn)
        {
            minn = b[i];
        }
    }
    


    // printf("Max Frequency: %d\n", maxn);
    // printf("Min Frequency: %d\n", minn);
    int u = 1;
    int t = maxn - minn;
    if (t != 2)
    {
        for (i = 2; i < t; i++)
        {
            if (t % i == 0)
            {
                u = 0;
            }
        }
    }

    if (u == 0 || t == 0 || t == 1)
    {
        printf("No Answer\n%d", 0);
    }
    else
    {
        printf("Lucky Word\n%d", t);
    }

    return 0;
}