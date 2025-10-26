#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    char a[101];
    scanf("%s", a);
    // VV VVK VVVK KV KK
    int i = 0, j = 1;
    int len = strlen(a);
    int time = 0;
    int flag = 0;
    for (; j < len;)
    {
        if (a[i] == 'V' && a[j] == 'K')
        {
            time++;
            i += 2;
            j += 2;
        }
        else if (a[i] == 'V' && a[j] == 'V')
        {
            if (j + 1 < len && a[j + 1] == 'K')
            {

                time++;

                i += 3;
                j += 3;
            }
            else if (j + 1 == len)
            {
                if (!flag)
                {
                    time++;
                    flag = 1;
                }
                break;
            }
            else
            {
                if (!flag)
                {
                    time++;
                    flag = 1;
                }
                i += 2;
                j += 2;
            }
        }
        else if (a[i] == 'K' && a[j] == 'K')
        {
            if (!flag)
            {
                time++;
                flag = 1;
            }
            i += 2;
            j += 2;
        }
        else
        {
            i++;
            j++;
        }
    }
    printf("%d\n", time);
    return 0;
}