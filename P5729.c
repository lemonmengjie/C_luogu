#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, k;
    int w, x, h;
    scanf("%d %d %d", &w, &x, &h);
    int v[w + 1][x + 1][h + 1];
    int count = 0;
    for (i = 1; i <= w; i++)
    {
        for (j = 1; j <= x; j++)
        {
            for (k = 1; k <= h; k++)
            {
                v[i][j][k] = 1;
            }
        }
    }
    int q;
    scanf("%d", &q);
    int cut[q][6];
    for (i = 0; i < q; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &cut[i][j]);
        }
    }
    // printf("cut:");
    // for (i = 0; i < q; i++)
    // {
    //     for (j = 0; j < 6; j++)
    //     {
    //         printf("%d ", cut[i][j]);
    //     }
    //     printf("\n");
    // }
    for (int l = 0; l < q; l++)
    {
        for (i = 1; i <= w; i++)
        {
            for (j = 1; j <= x; j++)
            {
                for (k = 1; k <= h; k++)
                {
                    if (i >= cut[l][0] && i <= cut[l][3] && j >= cut[l][1] && j <= cut[l][4] && k >= cut[l][2] && k <= cut[l][5])
                    {
                        v[i][j][k] = 0;
                    }
                }
            }
        }
    }
    for (i = 1; i <= w; i++)
    {
        for (j = 1; j <= x; j++)
        {
            for (k = 1; k <= h; k++)
            {
                count = v[i][j][k] + count;
            }
        }
    }
    printf("%d", count);
    return 0;
}