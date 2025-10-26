#include<stdio.h>
int main(){
    char s[1000];
    for(int i  = 0;;i++){
        s[i] = getchar();
        if(s[i] == '\n'){
            s[i] = '\0';
            break;
        }
    }
    printf("%s",s);
}