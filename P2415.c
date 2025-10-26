#include<stdio.h>

int main()
{
    int num[1000];
    int i = 0;
    do{
        scanf("%d", &num[i]);
        i++;
    }while(getchar()!= '\n');
    for(int j = 0; j < i-1; j++){
        printf("%d ", num[j]);
    }
}