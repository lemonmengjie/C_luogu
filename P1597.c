#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char a = '0', b = '0', c = '0';
    char k[255*5];
    gets(k);
    int t = strlen(k);
    for (int i = 0; i < t/5; i++)
    {
        if (k[i*5+0] != '\0' && k[i*5+3] != 'a' && k[i*5+3] != 'b' && k[i*5+3] != 'c')
        {
            switch (k[i*5+0])
            {
            case 'a':
                a = k[i*5+3];
                break;
            case 'b':
                b = k[i*5+3];
                break;
            case 'c':
                c = k[i*5+3];
                break;
            }
        }
        else if (k[i*5+3] == 'a')
        {
            switch (k[i*5+0])
            {
            case 'a':
                a = a;
                break;
            case 'b':
                b = a;
                break;
            case 'c':
                c = a;
                break;
            }
        }
        else if (k[i*5+3] == 'b')
        {
            switch (k[i*5+0])
            {
            case 'a':
                a = b;
                break;
            case 'b':
                b = b;
                break;
            case 'c':
                c = b;
                break;
            }
        }
        else if (k[i*5+3] == 'c')
        {
            switch (k[i*5+0])
            {
            case 'a':
                a = c;
                break;
            case 'b':
                b = c;
                break;
            case 'c':
                c = c;
                break;
            }
        }
    }
    printf("%c %c %c", a, b, c);

    return 0;
}