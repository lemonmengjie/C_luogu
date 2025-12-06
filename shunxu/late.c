#include <stdio.h>
int main()
{
    int s = 0, v = 0;
    int a = 0;
    int HH = 0, MM = 0;
    scanf("%d %d", &s, &v);

    if (s % v == 0)
        a = s / v + 10;
    else
        a = s / v + 11;
    int b = a / 60;
    int c = a % 60;
    if (b < 8)
    {
        if (c != 0)
        {
            HH = 8 - 1 - b;
            MM = 60 - c;
            if (MM / 10 != 0)
                printf("0%d:%d", HH, MM);
            else
                printf("0%d:0%d", HH, MM);
        }
        else
        {
            HH = 8 - b;
            MM = 00;
            printf("0%d:00", HH);
        }
    }
    else
    {
        if (c != 0)
        {
            HH = 8 + 24 - 1 - b;
            MM = 60 - c;
            if (HH >= 10)
            {
                if (MM / 10 != 0)
                    printf("%d:%d", HH, MM);
                else
                    printf("%d:0%d", HH, MM);
            }
            else
            {
                if (MM / 10 != 0)
                    printf("0%d:%d", HH, MM);
                else
                    printf("0%d:0%d", HH, MM);
            }
        }
        else
        {
            HH = 8 + 24 - b;
            MM = 00;
            if (HH >= 10)
            {
                printf("%d:%d", HH, MM);
            }
            else
                printf("0%d:%d", HH, MM);
        }
    }
    return 0;
}