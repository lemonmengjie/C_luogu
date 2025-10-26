#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, a, b, c;
    int i, j;
    scanf("%d\n", &n);
    char str[101];     //用于存储每个操作时
    char start[101];  //初始的字符串
    scanf("%s", start);
    getchar();
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);

        switch (a)
        {
        case 1: 
            scanf("%s", str);
            strcat(start, str);
            printf("%s\n", start);
            break;
        case 2:
            int j = 0;
            scanf("%d %d", &b, &c);
            start[b + c] = '\0';
            strcpy(str, &start[b]);
            strcpy(start, str);
            printf("%s\n", start);
            break;
        case 3:
            int w;
            scanf("%d", &w);
            scanf("%s", str);
            strcat(str, &start[w]);
            start[w] = '\0';
            strcat(start, str);
            printf("%s\n", start);
            break;
        case 4:
            scanf("%s", str);
            char *p = strstr(start, str);
            if (p == NULL)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",(int)(p-start));
            }
            break;
        }
        getchar();
    }

    return 0;
}