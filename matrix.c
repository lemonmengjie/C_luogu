#include <stdio.h>

int a[1030][1030];

void solidget(int (*a)[1030], int x, int l, int q);

int main()
{
    int n;
    scanf("%d", &n);
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p *= 2;
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            a[i][j] = 1;
        }
    }
    solidget(a, p, 0, 0);
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void solidget(int (*a)[1030], int x, int l, int q)
{
    if (x == 2)
    {
        a[l][q] = 0;
        return;
    }
    else
    {
        for (int i = l; i < l + x / 2 ; i++)
        {
            for (int j = q; j < q + x / 2 ; j++)
            {
                a[i][j] = 0;
            }
        }
        printf("%d %d %d %d\n", l, q, l + x / 2 - 1, q + x / 2 - 1);
        solidget(a, x / 2, l + x / 2, q + x / 2);
        solidget(a, x / 2, l + x / 2, q);
        solidget(a, x / 2, l, q + x / 2);
    }
}