#include <stdio.h>
void getscore(int *score, int size, int n, int m);
void getscore(int *score, int size, int n, int m)
{
    float person[n];
    int min_pos = 0;
    int max_pos = 0;
    for (int i = 0; i < n; i++)
    {
        int min_pos = i*m;
        int max_pos = i*m;
        float sum = 0;
        // j对应的是m个评委
        for (int j = 0; j < m; j++)
        {
            if (score[min_pos] > score[i*m+j])
            {
                min_pos = i*m+j;
            }
            if (score[max_pos] < score[i*m+j])
            {
                max_pos = i*m+j;
            }
            // printf("score[%d] = %d\n", i*m+j, score[i*m+j]);
            sum += score[i*m+j];
        }
        sum-=score[min_pos];
        sum-=score[max_pos];
        person[i] = sum/(float)(m-2);
        // printf("person %d: %.2f \n", i,person[i]);
    }
    float max = person[0];
    for(int i = 0; i < n; i++)
    {
        // printf("%.2f \n", person[i]);
        if(person[i] > max)
        {
            max = person[i];
        }
    }
    printf("%.2f\n", max);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int size = n * m;
    int str[size];
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &str[i]);
    }

    getscore(str, size, n, m);
    return 0;
}