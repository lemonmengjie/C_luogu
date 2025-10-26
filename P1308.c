#include <stdio.h>
#include <string.h>
char str[10];
char article[100010];

int main()
{
    scanf("%s", str);
    char c1 = getchar();
    // char c2 = getchar();
    // printf("%c", c1);
    // printf("%c", c2);

    gets(article);
    // printf("%s\n", article);

    // 大写转化为小写
    if (str[0] <= 'Z')
    {
        str[0] = str[0] +32;
    }
    // 匹配文章中出现了多少次字符串
    int len_article = strlen(article);
    int len_str = strlen(str);
    // printf("article 's length is %d\n", len_article);
    // printf("article 's length is %d\n", strlen(str));
    int first = 0, first_flag=0, num = 0;
    for (int i = 0; i <= len_article - len_str; i++)
    {
        for (int j = 0; j < len_str; j++)
        {
            if (article[i + j] != str[j]&&article[i + j]+32 != str[j])
            {
                break;
            }
            else
            {
                // 说明已经完全匹配，但是不确定前面和后面是不是空格
                if (j == len_str - 1)
                {
                    // 如果前面没有空格且不是第一个
                    if (i != 0 && (article[i - 1] != ' '))
                    {
                        break;
                    }
                    else if ((i + j) != (len_article - 1) && (article[i + j + 1] != ' '))
                    { // 如果后面不是空格且不是最后一个
                        // 也不能满足要求
                        break;
                    }
                    // 这个就是满足要求的了
                    else
                    {
                        if (!first_flag)
                        {
                            first = i;
                            first_flag = 1;
                        }
                        num+=1;
                        i+=len_str-1;//因为后面还有i++
                    }
                }
            }
        }
    }
    if(num==0){
        printf("-1\n");
    }
    else{
        printf("%d %d\n",num,first);
    }

}
