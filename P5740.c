#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    char name[9];
    int score[3];
} STUDENT;
int BiJiao(int *sum, int n)
{
    int t = sum[0];
    int m = 0;
    for (int i = 1; i < n; i++)
    {
        if (sum[i] > t)
        {
            t = sum[i];
            m = i;
        }
    }
    return m;
}
int main(void)
{
    int n;
    int *sum;
    scanf("%d", &n);
    sum = (int *)malloc(n * sizeof(int));

    STUDENT *stu = (STUDENT *)malloc(n * sizeof(STUDENT));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", stu[i].name);
        scanf("%d %d %d", &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        getchar();
        sum[i] = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
    }
    printf("%s ", stu[BiJiao(sum, n)].name);
    printf("%d %d %d",
           stu[BiJiao(sum, n)].score[0],
           stu[BiJiao(sum, n)].score[1],
           stu[BiJiao(sum, n)].score[2]);
}
