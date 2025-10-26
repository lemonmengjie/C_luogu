#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int i, j, k;
    int flag=0;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (flag)
            {
                flag = 0;
                break;
            }
            for (k = 0; k < n; k++)
            {
                if (i != j && j != k && i != k && num[k] + num[j] == num[i])
                {
                    count++;
                    j = 0;
                    k = 0;
                    flag = 1;
                    break;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}