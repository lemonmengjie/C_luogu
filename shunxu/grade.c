#include <stdio.h>
int main()
{
    int A = 0, B = 0, C = 0, sum = 0;
    scanf("%d %d %d", &A, &B, &C);
    sum = (int)(0.2 * A + 0.3 * B + 0.5 * C);
    printf("%d", sum);
    return 0;
}