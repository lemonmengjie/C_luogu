#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    int k = 1, i;
    int w, e, r;
    scanf("%d %d %d", &w, &e, &r);
    int t = w + e + r;
    int count[t+1];
    for (i = 0; i < t; i++)
    {
        count[i] = 0;
    }
    i = 0;

    for (int j = 1; j <= w; j++)
    {
        for (k = 1; k <= e; k++)
        {
            for (int y = 1; y <= r; y++)
            {
                count[j+k+y]++;  
                // printf("%d,%d,%d,%d,%d \n", j, k, y,j+k+y, count[j+k+y]);
            }
        }
    }
    int max = 0;
    int num = 0;
    for(int i = 0; i < t; i++){
        if (num<count[i]){
            max = i;
            num = count[i];
        }
    }

    printf("%d", max);

    return 0;
}