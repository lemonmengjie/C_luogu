#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, m, k, i, j, e, s;
    scanf("%d %d %d", &n, &m, &k);
    int a[n + 4][n + 4];
    for (i = 0; i < n+4; i++)
    {
        for (j = 0; j < n+4; j++)
        {
            a[i][j] = 0;
        }
    }
    int fire[m][2], stone[k][2];
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &fire[i][0], &fire[i][1]);
    }
    for (i = 0; i < k; i++)
    {
        scanf("%d %d", &stone[i][0], &stone[i][1]);
    }
    for (i = 0; i < m; i++)
    {
        int t = fire[i][0]+2-1;
        int y = fire[i][1]+2-1;
        e = t-2 ;
        s = y-2 ;
        a[t][y] = a[t + 1][y] = a[t - 1][y] = a[t + 2][y] = a[e][y] = a[t][y + 1] = a[t][y - 1] = a[t][y + 2] = a[t][s] = a[t + 1][y + 1] = a[t - 1][y - 1] = a[t - 1][y + 1] = a[t + 1][y - 1] = 1;
    }
    for (i = 0; i < k; i++)
    {
        int t = stone[i][0]+2-1;
        int y = stone[i][1]+2-1;
        for (int l = t-2; l <= t + 2; l++)
        {
            for (j = y-2; j <= y + 2; j++)
            {
                a[l][j] = 1;
            }
        }
    }
    int count = 0;
    for (i = 2; i < n+2; i++)
    {
        for (j = 2; j < n+2; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}