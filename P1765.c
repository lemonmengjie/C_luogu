#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char keyboard[9][5];
    char start = 'a';
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            keyboard[i][j] = '1';
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            keyboard[i][j] = start + num;
            num++;
        }
    }
    for (int j = 1; j < 5; j++)
    {
        keyboard[5][j] = start+num;
        num++;
    }

    for (int j = 1; j < 4; j++)
    {
        keyboard[6][j] = start+num;
        num++;
    }

    for (int j = 1; j < 5; j++)
    {
        keyboard[7][j] = start+num;
        num++;
    }

    keyboard[8][1] = ' ';
    int count = 0;
    char read[201];
    gets(read);
    int t = strlen(read);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if (read[i] == keyboard[j][k])
                {
                    count = count + k;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}